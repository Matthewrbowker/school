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
  #@@cars = Hash.new{|h,k| h[k] = Hash.new{|hh,kk| hh[kk] = 0}};
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

  def num_cars_made
    return @@count;
  end

  def most_popular_make

    key = @@cars.max_by{|k,v| v}
    return key[0]
  end

  def been_made?(car_make)
    retVal = false;
    if @@cars.key?(car_make)
      retVal = true;
    end
    return retVal;
  end

  def setMake(tempMake)
    @@holdingMake = tempMake;
  end

  def setModel(tempModel)
    @@holdingModel = tempModel;
  end

  def setYear(tempYear)
    @@holdingYear = tempYear;
  end

  def getCars()
    return @@cars;
  end

  def commitCar!()
    @@cars["#{@@holdingMake} #{@@holdingModel} #{@@holdingYear}"] =
        @@cars["#{@@holdingMake} #{@@holdingModel} #{@@holdingYear}"] + 1;

    @@count = @@count + 1;
  end

end

# Main Method...
myCar = Car.new({:make => "Honda", :model => "Civic", :year =>"1997"});
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2003");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2006");
myCar.commitCar!;
myCar.setMake("Honda");
myCar.setModel("Pilot");
myCar.setYear("2006");
myCar.commitCar!;
puts myCar.getCars().to_s;
puts myCar.num_cars_made();
puts myCar.most_popular_make();
puts myCar.been_made?("Honda Civic 1997");
puts myCar.been_made?("Honda Civic 1999");
puts myCar.been_made?("0");

gets;
