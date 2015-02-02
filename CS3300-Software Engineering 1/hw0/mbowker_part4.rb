#!/usr/bin/ruby

=begin
Define a class Car with setters and getters for make, model, and year
- Implement self.num_cars_made, which returns the total number of cars ever instantiated
- Implement self.most_popular_make, which returns the most instantiated car maker
- Implement self.been_made?(car_make), which determines if a certain make has been instantiated
Note: maintain your data structures efficiently!
=end

class Car
  @@count = 0
  @@cars = Hash.new(0)
  @make = "";
  @model = "";
  @year = "";
  #Assume that when Car object gets instantiated, it gets passed in a hash value called params
  def initialize(params)
    setMake(params[:make]);
    setModel(params[:model]);
    setYear(params[:year]);
    commitCar!();

  end

  def self.num_cars_made
    return @@count;
  end

  def self.most_popular_make

    key = @@cars.max_by{|k,v| v}
    return key[0]
  end

  def self.been_made?(car_make)
    retVal = false;
    if @@cars.key?(car_make)
      retVal = true;
    end
    return retVal;
  end

  def setMake(tempMake)
    @make = tempMake;
  end

  def setModel(tempModel)
    @model = tempModel;
  end

  def setYear(tempYear)
    @year = tempYear;
  end

  def getMake
    return @make
  end

  def getModel
    return @model
  end

  def getYear
    return @year
  end

  def self.getCars()
    return @@cars;
  end

  def commitCar!()
    @@cars["#{@make} #{@model} #{@year}"] =
        @@cars["#{@make} #{@model} #{@year}"] + 1;

    @@count = @@count + 1;
  end

end