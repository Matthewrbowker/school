/* SimpleCalculatorRevised.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #5
 * A simple calculator that has a user select a mode, then asks for two numbers and performs a math operation on them, then repeats the process.
 */

import java.util.Scanner;

public class SimpleCalculatorRevised {
  public static void main(String[] args) {
    // pre-define the variables, otherwise the compiler dies.
    boolean end = false;
    int num1 = 0;
    int num2 = 0;
    Scanner keyboard = new Scanner(System.in); //Define the scanner
    System.out.println("Welcome to SimpleCalculator!"); //Welcome the user
    do {
      //start the loop
      System.out.println("Please choose which mode you'd like: \n\t1 - Addition\n\t2 - Subtraction\n\t3 - Multiplication\n\t4 - Division\n or enter 0 to exit.");
      int choice = keyboard.nextInt();
      if (choice == 0) {
        end = true;
      }
      if (choice != 0) { // Ask the user for input if the choice isn't 0
        System.out.println("OK, now enter the first number you'd like:");
        num1 = keyboard.nextInt();
        System.out.println("OK, now enter the second number you'd like:");
        num2 = keyboard.nextInt();
      }
      else { // Or say goodbye!
        System.out.println("OK, bye!");
      }
    
      if (choice == 1) { // Addition
        System.out.println( num1 + " + " + num2 + " = " + (num1 + num2));
      }
      else if (choice == 2) { // Subtraction
        System.out.println( num1 + " - " + num2 + " = " + (num1 - num2));
      }
      else if (choice == 3) { // Multiplication
      System.out.println( num1 + " * " + num2 + " = " + (num1 * num2));
      }
      else if (choice == 4) { // Division
        System.out.println( num1 + " / " + num2 + " = " + (num1 / num2));
      }
      else if (choice == 0) { // Exit
      }
      else {
        System.out.println("Sorry, that's not a valid option!");
      }
    }
    while (end == false);
  }
}