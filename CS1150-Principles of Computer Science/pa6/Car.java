/* Car.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #6
 * Creates a new method that emulates driving a car.
 */

public class Car {
  private double mileage;
  private double fuelLevel;
  private double averageMPG;
  private double lastOilChange;
  private int serialNumber;

  public double getMileage() {
    return mileage;
  }
  
  public double getFuelLevel() {
    return fuelLevel;
  }
  
  public double getAverageMPG() {
    return averageMPG;
  }
  
  public double getLastOilChange() {
    return lastOilChange;
  }
  
  public int getSerialNumber() {
    return serialNumber;
  }
  
  public void setAverageMPG(double MPG) {
    averageMPG = MPG;
  }
  
  public void setSerialNumber(int serial) {
    serialNumber = serial;
  }
  
  public double fillTank() {
    double used = 15.0 - fuelLevel;
    fuelLevel = 15.0;
    return used;
  }
  
  public void drive(double miles) {
    double gallons = miles / averageMPG;
    if (gallons > fuelLevel) {
      System.out.println("Not enough gas to perform the required operation.  Aborted.");
      return;
    }
    else {
      mileage = mileage + miles;
      fuelLevel = fuelLevel - gallons;
    }
    
    double oilcheck = mileage - lastOilChange;
    
    if (oilcheck > 4500) {
      System.out.println("*****WARNING***** \nYou need to change your oil very soon!");
    }
    else if (oilcheck > 3000) {
      System.out.println("Your oil needs to be changed soon");
    }
    else {};
  }
  
  public void changeOil() {
    lastOilChange = mileage;
  }

  public static Car create() {
    Car theCar = new Car();
    theCar.mileage = 0.0;
    theCar.fuelLevel = 0.0;
    theCar.averageMPG = 35.0;
    theCar.lastOilChange = 0.0;
    theCar.serialNumber = 0;
    return theCar;
  }
  
  public static void main(String args[]) {
    Car myCar = Car.create();
    System.out.println(myCar.getMileage());
    System.out.println(myCar.getFuelLevel());
    System.out.println(myCar.getAverageMPG());
    System.out.println(myCar.getLastOilChange());
    System.out.println(myCar.getSerialNumber());
    
    System.out.println(myCar.fillTank());
    
    myCar.setAverageMPG(13.0);
    
    myCar.drive(4501);
    myCar.fillTank();
    
    myCar.changeOil();
    
    System.out.println(myCar.getLastOilChange());
  }
}