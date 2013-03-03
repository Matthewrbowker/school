/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #1
 * Collects a series of data, then displays the maximum, minimum, count, sum, 
 *     and average of the data.
 */
package datastructures;

import java.util.Scanner;


public class Assignment1 {
    public static void main(String[] args) {
        /* Main method for this program.  This program recieves input via the
         * console (a series of numbers) and outputs the maximum, minimum, 
         * count, sum, and average back to the console.
         */
        
        
        final int RUN_NUMBER = 1;               // Which run of data we're on
        int count = 0;                          // How many numbers input?
        int sum = 0;                            // Sum of the values input
        int checkVal;                           // The value to be checked
        int max = 0;                            // The Maximum value given
        int min = 0;                            // The minimum value given
        float average;                          // variable to hold the average
        Scanner input = new Scanner(System.in); // Create a scanner for input.
        
        //Initial console output, welcoming the user and giving instructions.
        System.out.println("<<< Run #" + RUN_NUMBER + ": >>>");
        System.out.println("\tHello and welcome!");
        System.out.println("\tPlease enter a number to check, or enter -999"
                + " to exit");
        
        //Grab the integer and put it in a variable for processing
        checkVal = input.nextInt();
        
        //Initialize a loop to process the data
        while (true) {
            if (checkVal != -999) { // Check if the value is our sentinal.
                if (count == 0) { // If not, check and see if we've had values 
                                  // before.
                    
                    //Assign all of the values, as they are unititialized.
                    max = checkVal;
                    min = checkVal;
                    sum = checkVal;
                }
                else {
                    /* Cross-check the values against the min and max, assigning
                    * value the user input to the variable if it's less than the
                    * max and greater than the min.  Also, add the user input
                    * to the sum
                    */
                    
                    sum = sum + checkVal;
                    
                    if (max < checkVal) {
                        max = checkVal;
                    }
                    
                    if (min > checkVal) {
                        min = checkVal;
                    }
                }
            }
            else {
                //If the value is the sential, terminate the loop.
                break;
            }
            // Add onto the count, and ask the user for another number to
            // continue the loop.
            count = count + 1;
            System.out.println("\tNumber stored.");
            System.out.println("\tPlease enter a number to check, or enter -999"
                    + " to exit");
            checkVal = input.nextInt();
        } //Loop ends here.
        
        /* Check and see if we've had actual values.  If not, output a sad
         * message.  If so, give the maximum, minimum, count, sum, and average
         * of the values given.
         */
        
        if (count == 0) {
            System.out.println("\tSorry, but you haven't given me any "
                    + "values.  I can't process the data.");
        }
        else {
            average = sum / count; //Calculate the average
            //Print the output to the screen
            System.out.println("\tAll right, here are the outputs:");
            System.out.println("\t\tMaximum Value: " + max + ".");
            System.out.println("\t\tMinimum Value: " + min + ".");
            System.out.println("\t\tNumber of values entered: " + count + ".");
            System.out.println("\t\tSum of the values: " + sum + ".");
            System.out.printf("\t\tAverage: %.2f.\n", average);
        }
        System.out.println("<<< End processing of Run #" + RUN_NUMBER + "."
                + " >>>");
        
    }
}
