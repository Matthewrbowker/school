/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #5
 * Class for implementing stacks and queues of cars
 */
package datastructures;


import java.util.Scanner;


public class Assignement5 {

    public static void main(String[] args) {
        Lstack stack = new Lstack();         // Stack for the stack manipulation
        Lqueue queue = new Lqueue();         // Queue for the queue manipulation
        int count = 0;                       // Counter variable
        Scanner in = new Scanner(System.in); // Scanner, for input
        String temp;                         // Holding string for the input
        int num;                             // Display variable-number of cars
        
        // Welcome the user
        System.out.println("Welcome to Matthew's car tracking program!");
        System.out.println("Let's start by adding the cars.");
        
        while (count < 7) {
            // While we have less than 7 cars in the stack
            
            // Increment the display variable
            num = count + 1;
            
            // Ask the user for input
            System.out.println("Please enter a tag for car #" + num + 
                    " in the stack:");
            
            // Get the input and store it in temp
            temp = in.next();
            
            // Create a car and push it to the stack
            stack.push(new car(temp,'X'));
            
            // Increment the counter
            count++;
        }
        
        // Reset the counter for the next loop
        count = 0;
        
        while (count < 5) {
            // While we have less than 5 cars in the queue
            
            // Increment the display variable
            num = count + 1;
            
            // Ask the user for input
            System.out.println("Please enter a tag for car #" + num +
                    " in the queue:");
            
            // Get the input and store it
            temp = in.next();
            
            // Create a car and push it to the stack
            queue.insert(new car(temp,'X'));
            
            // Increment the counter
            count++;
        }
        
        // Display the stack and queue
        System.out.println("This is what we have in the stack:");
        stack.display();
        System.out.println("This is what we have in the queue:");
        queue.display();
        
        // Reverse the stack and queue
        System.out.print("OK, now we're reversing the ADTs...");
        stack.reverseStack();
        queue.reverseQueue();
        System.out.print(" ... Done! \n");
        
        // Display the stack and queue
        System.out.println("This is what we have in the stack:");
        stack.display();
        System.out.println("This is what we have in the queue:");
        queue.display();
        
        System.out.println("Have a nice day!");
    }
}
