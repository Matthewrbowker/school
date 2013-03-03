/* Car.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #8
 * Creates a new method that emulates driving a car - including a toString method!
 */

public class Car {
  public static final double DEFAULT_MPG = 23.0;
  private double mileage;
  private double fuelLevel;
  private double averageMPG;
  private double lastOilChange;
  private int serialNumber;
  private String type;

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
  
  public String getType() {
    return type;
  }
  
  public void setAverageMPG(double theMPG) {
    averageMPG = theMPG;
  }
  
  public void setSerialNumber(int serial) {
    serialNumber = serial;
  }
  
  public void setType(String tempType) {
    type = tempType;
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
  
  public String toString() {
    return "This car has " + mileage + " miles, gets " + averageMPG + " miles per gallon, and is of type \""+ type + "\".";
  }

  public Car() {
    mileage = 0.0;
    fuelLevel = 0.0;
    averageMPG = DEFAULT_MPG;
    lastOilChange = 0.0;
    serialNumber = 0;
    type = "car";
    fillTank();
  }
  
  public static void main(String args[]) {
    /* Car myCar = Car.create();
    * System.out.println(myCar.getMileage());
    * System.out.println(myCar.getFuelLevel());
    * System.out.println(myCar.getAverageMPG());
    * System.out.println(myCar.getLastOilChange());
    * System.out.println(myCar.getSerialNumber());
    
    * System.out.println(myCar.fillTank());
    
    * myCar.setAverageMPG(13.0);
    
    * myCar.drive(4501);
    * myCar.fillTank();
    
    * myCar.changeOil();
    
    * System.out.println(myCar.getLastOilChange());
    * */
  }
}