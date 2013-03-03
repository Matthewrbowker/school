/* Car.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #13
 * Creates a new method that emulates driving a car - including a toString method!
 */

public class Car {
  public static final double DEFAULT_MPG = 23.0;
  private String name;
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
  
  public String getName() {
    return name;
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
  
  public void setName(String tempName) {
    name = tempName;
  }
  
  public double fillTank() {
    double used = 15.0 - fuelLevel;
    fuelLevel = 15.0;
    return used;
  }
  
  public double fillTank(double newFuel) {
    double newFill = fuelLevel + newFuel;
    try {
      if (newFill >= 15.0) {
        throw new Exception("OverfillTankException");
      }
      else {
        fuelLevel = newFill;
        return newFuel;
      }
    }
      catch(Exception e) {
        System.out.println("An error has occurred, we can't continue!  The program said:\n" + e);
        return 0;
  }
  }
    
  
  public void drive(double miles) {
    double gallons = miles / averageMPG;
    try {
      if (gallons > fuelLevel) {
        throw new Exception("RunningOnFumesException");
    }
    else {
      mileage = mileage + miles;
      fuelLevel = fuelLevel - gallons;
    }
    }
    catch(Exception e) {
      System.out.println("An error has occurred.  The program said:\n" + e);
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
    return name + " has " + mileage + " miles, gets " + averageMPG + " miles per gallon, and is of type \""+ type + "\".";
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
  
  public Car(double newMiles, double newFuel) {
    this();
    mileage = newMiles;
    fillTank(newFuel);
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