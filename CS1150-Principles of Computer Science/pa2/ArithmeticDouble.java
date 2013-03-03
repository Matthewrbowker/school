/* Arithmetic.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #2
 * Takes two numbers as input from the user, then spits out the addition, subrtraction, multiplication, and division of those two numbers.
 */

import java.util.Scanner;

public class ArithmeticDouble {
  public static void main(String args[]) {
    // Define variables
    char relative = 'Å';
    Scanner keyboard = new Scanner(System.in);
    
    // Get the numbers
    System.out.println("Welcome to the Arithmetic Program!");
    System.out.println("Please enter the first number:");
    double num1 = keyboard.nextDouble();
    System.out.println("Please enter the second number:");
    double num2 = keyboard.nextDouble();
    
    // OK, do the math.
    double add = (num1 + num2);
    double sub = (num1 - num2);
    double mult = (num1 * num2);
    double div = (num1 / num2);
    
    // Spit it all back to the user
    System.out.println("OK, go ......");
    System.out.println("- " + num1 + " + " + num2 + " = " + add);
    System.out.println("- " + num1 + " - " + num2 + " = " + sub);
    System.out.println("- " + num1 + " * " + num2 + " = " + mult);
    System.out.println("- " + num1 + " / " + num2 + " " + relative + " " + div);
    System.out.println("... There it is :)");
  }
}
    