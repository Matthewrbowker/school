/* SimpleCalculator.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #4
 * A simple calculator that has a user select a mode, then asks for two numbers and performs a math operation on them.
 */

import java.util.Scanner;

public class SimpleCalculator {
  public static void main(String[] args) {
    Scanner keyboard = new Scanner(System.in); //Define the scanner
    System.out.println("Welcome to SimpleCalculator!");
    while (true) {
    System.out.println("Please choose which mode you'd like: \n\t1 - Addition\n\t2 - Subtraction\n\t3 - Multiplication\n\t4 - Division\n or enter 0 to exit.");
    int choice = keyboard.nextInt();
    if (choice == 0) {
      System.out.println("OK, bye!");
      break;
    }
    System.out.println("OK, now enter the first number you'd like:");
    int num1 = keyboard.nextInt();
    System.out.println("OK, now enter the first number you'd like:");
    int num2 = keyboard.nextInt();
    
    if (choice == 1) {
      System.out.println( num1 + " + " + num2 + " = " + (num1 + num2));
    }
    else if (choice == 2) {
      System.out.println( num1 + " - " + num2 + " = " + (num1 - num2));
    }
    else if (choice == 3) {
      System.out.println( num1 + " * " + num2 + " = " + (num1 * num2));
    }
    else if (choice == 4) {
      System.out.println( num1 + " / " + num2 + " = " + (num1 / num2));
    }
    else {
      System.out.println("Sorry, that's not a valid option!");
    }
    }
  }
}