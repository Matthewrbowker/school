/* Main.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #14
 * Fleet management program, extending fleet.java and Car.java and with FLYING MONKEYS OF FILE WRITING!
 */

import java.util.Scanner;
import java.io.*;

public class Main extends Fleet {
  public static void main(String args[]) {
    final String VERSION = "3.0";
    Scanner input = new Scanner(System.in);
    Fleet myFleet = new Fleet();
    
    // Splash Screen
    System.out.println("            __---~~~~--__                      __--~~~~---__");
    System.out.println("           `\\---~~~~~~~~\\                    //~~~~~~~~---/'  ");
    System.out.println("             \\/~~~~~~~~~\\||                  ||/~~~~~~~~~\\/ ");
    System.out.println("                         `\\                //'");
    System.out.println("                           `\\            //'");
    System.out.println("                             ||          ||      ");
    System.out.println("                   ______--~~~~~~~~~~~~~~~~~~--______              ");
    System.out.println("              ___ // _-~                        ~-_ \\ ___  ");
    System.out.println("             `\\__)\\/~                              ~\\/(__/'          ");
    System.out.println("              _--`-___                            ___-'--_        ");
    System.out.println("            /~     `\\ ~~~~~~~~------------~~~~~~~~ /'     ~\\        ");
    System.out.println("           /|        `\\         ________         /'        |\\     ");
    System.out.println("          | `\\   ______`\\_      \\------/      _/'______   /' |          ");
    System.out.println("          |   `\\_~-_____\\ ~-________________-~ /_____-~_/'   |  ");
    System.out.println("          `.     ~-__________________________________-~     .'       ");
    System.out.println("           `.      [_______/------|~~|------\\_______]      .'");
    System.out.println("            `\\--___((____)(________\\/________)(____))___--/'           ");
    System.out.println("            |>>>>>>||                            ||<<<<<<|");
    System.out.println("            `\\<<<<</'                            `\\>>>>>/' \n");
    //Image source: http://www.retrojunkie.com/asciiart/vehicles/cars.txt
    
    // Welcome the user
    System.out.println("Welcome to CS1150-4 Fleet management software, version " + VERSION + "!");
    
    // Implement a loop for the menu
    while(true) {
      try {
      System.out.println("What would you like to do this fine day?");
      System.out.println("\t1 - Add a car\n\t2 - View the current cars in the fleet\n\t3 - Delete a car\n\t4 - Write the fleet to a file\n\t0 - Exit");
      int choice = input.nextInt();
      if (choice == 0) {
        System.out.println("Awwwwww, bye :(");
        System.exit(0);
        break;
      }
      else if (choice == 1) {
        Car tempCar = new Car();
        System.out.println("OK, what do you want this car to be called?");
        String tempCarName = input.next();
        tempCar.setName(tempCarName);
        myFleet.add(tempCar);
      }
      else if (choice == 2) {
        System.out.println(myFleet);
      }
      else if (choice == 3) {
        Car delCar = new Car();
        System.out.println("What is the name of the car you'd like to delete?");
        String delCarName = input.next();
        delCar.setName(delCarName);
        System.out.println(myFleet.remove(delCar));
      }
      else if (choice == 4) {
        boolean done = false;
        String workingDir = System.getProperty("user.dir");
        System.out.println("Writing file to: " + workingDir + "/ListOfCars.txt");
        File f = new File(workingDir + "/ListOfCars.txt");
        if (f.isFile()) {
          System.out.println("This file exists, would you like to continue?  Type \"yes\" to override the file, type \"no\" to quit.");
          String cont = input.next();
          if (!cont.equals("yes")) {
            continue;
          }
        }
        BufferedWriter out = new BufferedWriter(new FileWriter(f));
        out.write(myFleet.generateBuffer());
        out.close();
        done = true;
        if (done) {System.out.println("File written!"); }
        else {System.out.println("Error - file not written!"); }
      }
      else {
        throw new Exception("NotValidChoiceException");
      }
    }
      catch(Exception e) {
        System.out.println("An error has occurred.  The program said:\n" + e);
        System.exit(0);
      }
    }
  }
}
    