/* CircleMath.java
 * Matthew Bowker
 * CS1150.1208-4, Programming Assignment #3
 * This program computes various numbers for a circle of radius r.
 */

import java.util.Scanner;

public class CircleMath {
  public static void main(String[] args) {
    Scanner keyboard = new Scanner(System.in); //Define the scanner
    
    System.out.println("Welcome to CircleMath!");
    System.out.println("Please enter an integer for the radius:");
    int x = keyboard.nextInt();
    System.out.printf("A circle with radius %d has perimeter %.2f, area %.2f\n and a sphere with the same radius would have volume %.2f.\n",x,2*Math.PI*x,Math.PI*(x*x),(4/3)*Math.PI*(x*x*x) );
  }
}
