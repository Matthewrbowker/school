/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #6
 * Class for managing Crazy Eddie'sre Park and Save Valet Service
 * 
 * All other classes mentioned in this code are exactly duplicate from 
 * Assignment 5.
 */

public class Assignment6 {
    public int numTurnedAway;   // Number of cars that have been turned away
    public Lstack driveway;     // The Lstack that is our driveway
    public Lqueue alley;        // the Lqueue that is our alley
    
    
    public Assignment6() {
        // Contructor - sets all of our variables
        // No imput, no output.  
        
        // Number of cars turned away.  Using 0 so we don't overflow on 
        // the first iteration
        numTurnedAway=0;
        
        alley = new Lqueue();    // Create the Lqueue
        driveway = new Lstack(); // Create the Lstack
        
    }
    
    
    public void addCar(String tag) {
        // Method to add the cars to the proper places
        // string input, console output.  
        
        car tempCar = new car(tag);    // Temporary car - added to wherever
        
        if (alley.size() < 6) {
            // If our alley isn't full...
            
            tempCar.setActionCode('A');  //Set the action code of the car
            alley.insert(tempCar);       // Add the car to the alley
            
            // Print some user output
            System.out.println("Car #" + tag + " added to the alley.");
        }
        else if (driveway.size() < 3) {
            // If our alley is full but the driveway isn't...
            
            tempCar.setActionCode('B');  // Set the action code of the car
            driveway.push(tempCar);      // Add the car to the driveway
            
            // Print some user output
            System.out.println("Car #" + tag + " added to the driveway.");
        }
        else {
            // We're all full here... turning the car away
            
            numTurnedAway++;  // Add one to the number of cars turned away
            
            // User output
            System.out.println("Car #" + tag + " turned away.");
            System.out.println("Now removing " + (numTurnedAway+1) + " cars.");
        }
    }
    
    
    public void removeCar() {
        // Method to systematically remove the cars that come in
        // No input, console output
        
        int count;                  // Counter variable for the loop
        car tempCar;                // temprary car, it's what was removed
        String buffer = "Removed:"; // Buffer for display to the user
        boolean display = false;    // Should we display the buffer?
        
        for (count = 0; count < 1 + numTurnedAway; count++) {
            // Loop looks through, removes cars from the alley first
            // until we agree with eddie's demands
            // No input, console output
            
            if (!alley.isEmpty()) {
                // Remove cars from the alley first
                
                // Get a car out
                tempCar = alley.remove();
                
                // Add the tag to the string buffer
                buffer = buffer + " #" + tempCar.getTag();
                
                // Hey, we did something!  We need to show the buffer.
                display = true;
            }
            else if (!driveway.isEmpty()) {
                // Now removing cars from the driveway
                
                // Get the car out
                tempCar = driveway.pop();
                
                // Add the tag to the string buffer
                buffer = buffer + " #" + tempCar.getTag();
                
                // We did something, display the buffer.
                display = true;
            }
            else {
                // Do nothing ...  there's nothing to remove!
            }
        }
        
        if (alley.isEmpty() && driveway.isEmpty()) {
            // If we emptied both the alley and the driveway, Eddie calms
            // down a little bit.  So, let's remove one less car next time.
            
            numTurnedAway--; // Decriment the number
            
            // Display the new number to the user
            System.out.println("Now removing " + (numTurnedAway+1) + " cars.");
        }
        
        if (display) {
            // If we did something, display the text buffer
            System.out.println(buffer);
        }
        
        // Print out our new stack and queue.
        displayCars();
    }
    
    
    public void displayCars() {
        // Function that displays the contents of the alley and driveway
        
        if(!alley.isEmpty()) { 
            // If there's nothing in the alley, don't display a blank table.
            
            // Let the user know what we're doing
            System.out.println("Alley contents:");
            
            // Invoke alley's display method to make it look good.
            alley.display();
        }
        if (!driveway.isEmpty()) {
            // If there's nothing in the driveway, don't display a blank table.
            
            // Let the user know what we're doing
            System.out.println("Driveway contents:");
            
            // Invoke driveway's display method to make it look good.
            driveway.display();
        }
    }
    
    
    public void movingOver() {
        // Method that moves cars from the driveway to the alley if there's room
        // No input, console output (if a move is made)
        car tempCar;   // car to temporarily hold the one we're moving.
        int size;      // counter variable
        
        for(size = alley.size(); size < 6; size++) {
            // Loop until the alley size is 6
            
            if (driveway.size() > 0) {
                // If there's stuff in the driveway...
                
                // ... take it off the top ...
                tempCar = driveway.pop();
                
                // ... then let the user know what we're doing ...
                System.out.println("Moving #" + tempCar.getTag() + 
                        " to the alley.");
                
                // ... then move it into the alley.
                alley.insert(tempCar);
            }
        }
    }
    
    
    public void ending() {
        // Method to display the final configuration of the alley and driveway
        // No input, console output.  
        
        // Let the user know that this is the final configuration.
        System.out.println("\n\nFinal configuration:");
        
        // Invoke the displayCars method for pretty display.
        displayCars();
    }

    
    public static void main(String[] args) {
        // Main method
        // Controls the timing loop and other nuances.  
        // argv input, console output.
        
        int nextLicence;    // The next licence plate we'll use.
        int time;           // The time counter for the loop
        Assignment6 acc;    // Class variable for the above methods.
        
        // Intitialize the variables
        nextLicence = 10000;
        acc = new Assignment6();
        
        // Timing loop
        for (time = 0; time < 50; time++) {
            // Loop through until we've seen 49 minutes.
            
            // Let the user know where we are in the loop
            System.out.println("\n\nMinute: " + time);
            
            if (time %2 == 1) {
                // If we're on an odd time...
                
                // ... let's add a car...
                acc.addCar(Integer.toString(nextLicence));
                
                // ... and increment the next licence by 10.
                nextLicence = nextLicence + 10;
            }
            if (time %5 == 0 && time != 0) {
                // If we're on a time divisable by 5 and that time is not 0...
                
                // ... run the remove method.
                acc.removeCar();
            }
            
            // See if we can move any cars over.
            acc.movingOver();
        }
        
        // Invoke the ending method, which will display the final results.
        acc.ending();
    }
}
