 /* Fleet.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #13
 * Creates and manages fleet of cars, now stored in an array.
 */

public class Fleet extends Car{
private int numCars = 0;
private Car[] cars = new Car[20];

public void add(Car tempCar) {
  cars[numCars + 1] = tempCar;
  numCars++;
  }
  
public String remove(Car tempCar) {
  int index = 0;
  int sn = 0;
  while (sn < numCars) {
    if (cars[sn] != null) {
      if (tempCar.getName() == cars[sn].getName()) {
        index = sn;
        break;
      }
    }
    sn++;
    /* if (tempCar == cars[sn]) {
      index = sn;
      break; */
    }
  cars[index] = cars[numCars];
  numCars--;
  return("Car Deleted Successfully!");
  }

  public int size() {
    return numCars;
  }
  
    public String toString() {
      int n = 0;
      String mainstring = "";
      mainstring = "There are currently " + size() + " car(s) in the fleet.";
      while (n < numCars) {
        n++;
        if (cars[n] != null) {
          mainstring = mainstring + "\n" + cars[n].toString(); 
        }
      }
      return mainstring;
  }
  
  public static void main(String args[]) {
    /* final double DEFAULT_MPG = 23.0;
    * fleet myFleet = new fleet();
    * Car testCar = new Car();
    * Car testCar2 = new Car();
    * testCar.setAverageMPG(50.0);
    * testCar2.setAverageMPG(75.0);
    * myFleet.add(testCar);
    * System.out.println(myFleet.toString());
    * myFleet.add(testCar);
    * System.out.println(myFleet.toString());
    * myFleet.remove(testCar);
    * System.out.println(myFleet.toString());
    * myFleet.remove(testCar2);
    * System.out.println(myFleet.toString());
    * */
    
  }
}