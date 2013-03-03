/* Car.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #9
 * Fleet management program, extending fleet.java and Car.java
 */

import java.util.Scanner;

public class main extends fleet {
  public static void main(String args[]) {
    Scanner input = new Scanner(System.in);
    fleet myFleet = new fleet();
    
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
    System.out.println("Welcome to CS1150-4 Fleet management software!");
    
    // Implement a loop for the menu
    while(true) {
      System.out.println("What would you like to do this fine day?");
      System.out.println("\t1 - Add a car\n\t2 - View the current cars in the fleet\n\t3 - Delete a car\n\t0 - Exit");
      int choice = input.nextInt();
      if (choice == 0) {
        System.out.println("Awwwwww, bye :(");
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
      else {
        System.out.println("That's not a valid choice!  Do I really look that stupid to you? (don't answer that question!)\n");
      }
    }
  }
}
    