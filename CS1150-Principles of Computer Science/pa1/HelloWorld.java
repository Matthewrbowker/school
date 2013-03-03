/* HelloWorld.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #1
 * This program prints some values to the screen
 */
import java.util.Scanner;

public class HelloWorld {
  public static void main(String[] args) {
    System.out.println("Hello, World!"); 
    System.out.println("This is the first Java program for");
    System.out.println("  CS1150.1208-4.");
    System.out.println("6 * 3 is " + 6 * 3);
    System.out.println("My name is Matthew Bowker.");
    System.out.println("What is yours?");
    
    Scanner keyboard = new Scanner(System.in);
    String name = keyboard.nextLine();
    System.out.println("Why, hello there, " + name + "!");
  }
}