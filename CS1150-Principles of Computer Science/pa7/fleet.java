/* fleet.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #7
 * Creates and manages fleet of cars.  
 */

public class fleet {
Car primaryCar;
Car secondaryCar;


public Car getPrimaryCar() {
  return primaryCar;
}

public void setPrimaryCar(Car tempSetCar) {
  primaryCar = tempSetCar;
}

public Car getSecondaryCar() {
  return secondaryCar;
}

public void setSecondaryCar(Car tempSetCar) {
  secondaryCar = tempSetCar;
}

  public int size() {
    int numcars = 0;
    if (primaryCar != null) {
      numcars++;
    }
    if (secondaryCar != null) {
      numcars++;
    }
    return numcars;
  }
  
    public String toString() {
      String mainstring = "";
      mainstring = "There are currently " + size() + " cars in the fleet.";
      if (primaryCar != null) mainstring = mainstring + "\n The Primary Car gets " + primaryCar.getAverageMPG() + " MPG and has " + primaryCar.getMileage() + " miles and has " + primaryCar.getFuelLevel() + " gallons of fuel left.";
      if (secondaryCar != null) mainstring = mainstring + "\n The Secondary Car gets " + secondaryCar.getAverageMPG() + " MPG and has " + secondaryCar.getMileage() + " miles and has " + secondaryCar.getFuelLevel() + " gallons of fuel left.";      
      return mainstring;
  }
  
  public static void main(String args[]) {
    final double DEFAULT_MPG = 23.0;
    fleet myFleet = new fleet();
    Car primaryCar = new Car();
    Car secondaryCar = new Car();
    primaryCar.setAverageMPG(DEFAULT_MPG);
    secondaryCar.setAverageMPG(DEFAULT_MPG);
    myFleet.setPrimaryCar(primaryCar);
    myFleet.setSecondaryCar(secondaryCar);
    System.out.println(myFleet.toString());
    primaryCar.fillTank();
    secondaryCar.fillTank();
    System.out.println(myFleet.toString());
    primaryCar.drive(30.0);
    secondaryCar.drive(30.0);
    System.out.println(myFleet.toString());
    primaryCar.drive(60.0);
    secondaryCar.drive(60.0);
    System.out.println(myFleet.toString());
    primaryCar.fillTank();
    System.out.println(myFleet.toString());
    primaryCar.drive(300.0);
    secondaryCar.drive(300.0);
    System.out.println(myFleet.toString());
    Car primaryCar2 = new Car();
    primaryCar2.fillTank();
    primaryCar2.setAverageMPG(DEFAULT_MPG);
    myFleet.setPrimaryCar(primaryCar2);
    System.out.println(myFleet.toString());
  }
}