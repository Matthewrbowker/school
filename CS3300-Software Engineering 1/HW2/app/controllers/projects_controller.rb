class ProjectsController < ApplicationController

  def show
    id = params[:id] # retrieve project task ID from URI route
    @project = Project.find(id) # look up project task by unique ID
    # will render app/views/projects/show.<extension> by default
  end

  def index
    @all_users = ['Coulson','Ward','May','Skye','Fitz','Simmons'];

    if params[:unset] != nil
      session.clear();
      redirect_to(projects_path)
    end

    if params[:sort] != nil
      @sort = params[:sort]
      session[:sort] = @sort;
    elsif session[:sort] != nil
      @sort = session[:sort];
    else
      @sort = "";
    end

    if params["users"].is_a? Hash
      @params = params["users"];
      session[:users] = @params
    elsif session[:users].is_a? Hash
      @params = session[:users]
    else
      @params = ""
    end

    if params["users"] != session[:users]||params[:sort] != session[:sort]
      redirect_to(projects_path({:sort => @sort, :users => @params}))
    end

    if (@sort == "title")
      order = "title"
      @title = "hilite"
    elsif (@sort == "date")
      order = "due_date"
      @date = "hilite"
    else
      order = "";
    end

    if @params.is_a? Hash
      @projects = Project.all(:order => order, :conditions => { :user => @params.keys});
      @checks = Hash[@params.keys.map {|x| [x, 1]}]
    else
      @projects = Project.all(:order => order);
      @checks = Hash[@all_users.map {|x| [x, 1]}]
    end
  end

  def new
    # default: render 'new' template
  end

  def create
    @project = Project.create!(params[:project])
    flash[:notice] = "#{@project.title} was successfully created."
    redirect_to projects_path
  end

  def edit
    @project = Project.find params[:id]
  end

  def update
    @project = Project.find params[:id]
    @project.update_attributes!(params[:project])
    flash[:notice] = "#{@project.title} was successfully updated."
    redirect_to project_path(@project)
  end

  def destroy
    @project = Project.find(params[:id])
    @project.destroy
    flash[:notice] = "Project '#{@project.title}' deleted."
    redirect_to projects_path
  end

end
