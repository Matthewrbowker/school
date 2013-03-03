/* Arithmetic.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #2
 * Takes two numbers as input from the user, then spits out the addition, subrtraction, multiplication, and division of those two numbers.
 */

import java.util.Scanner;

public class Arithmetic {
  public static void main(String args[]) {
    // Define variables
    char relative = 'Å';
    Scanner keyboard = new Scanner(System.in);
    
    // Get the numbers
    System.out.println("Welcome to the Arithmetic Program!");
    System.out.println("Please enter the first number:");
    int num1 = keyboard.nextInt();
    System.out.println("Please enter the second number:");
    int num2 = keyboard.nextInt();
    
    // OK, do the math.
    int add = (num1 + num2);
    int sub = (num1 - num2);
    int mult = (num1 * num2);
    int div = (num1 / num2);
    
    // Spit it all back to the user
    System.out.println("OK, go ......");
    System.out.println("- " + num1 + " + " + num2 + " = " + add);
    System.out.println("- " + num1 + " - " + num2 + " = " + sub);
    System.out.println("- " + num1 + " * " + num2 + " = " + mult);
    System.out.println("- " + num1 + " / " + num2 + " " + relative + " " + div);
    System.out.println("... There it is :)");
  }
}
    