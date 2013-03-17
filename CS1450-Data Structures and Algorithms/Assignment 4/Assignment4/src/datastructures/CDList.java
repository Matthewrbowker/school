/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #4
 * Class for creating and managing a CD List
 */

package datastructures;

import java.util.*;            // Import the java utility functions, for scanner

public class CDList {
    private int totalSize;                  // The total size of our array
    private int currentSize;                // How many elements are stored
    private CD CDArray[];                   // Array of CD objects
    Scanner input = new Scanner(System.in); // Scanner - for keyboard input
    
    
    public CDList(int size) {
        //Constructor - initializes the array.
        // Integer input.  No output.  
        
        CDArray = new CD[size];    // Intitialize the array
        totalSize = size;          // Store the total size for later use
    }
    
    
    public boolean add() {
        // Adds a CD to the stack
        // Console input, console output, returns boolean
        
        boolean trackloop = true;    // Whether we should continue a loop
        String tempArtist;           // Temporary storage for an artist
        String tempTitle;            // Temporary storage for a title
        CD tempCD;                   // CD to hold the information
        int trackCount = 0;          // How many tracks have been added
        String tempTrack;            // Temporary storage for a track name
        
        if (currentSize < totalSize) {
            // Check if we have space for the CD.  If so...
            
            // Provide some output to the user
            System.out.println("All right, we're adding a CD...");
            
            // Ask for the title of the CD and store it
            System.out.println("So, what is the title of the CD?");
            tempTitle = input.nextLine();
            
            // Ask for the artist of the CD and store it
            System.out.println("OK, how about the artist?");
            tempArtist = input.nextLine();
            
            // Create a CD with the values given
            tempCD = new CD(tempArtist,tempTitle);
            
            // More output to the user - requesting tracks
            System.out.println("OK, now we're adding tracks.  Please enter "
                       + "the tracks one at a time, or enter \"-999\" to quit");
            
            while (trackloop){
                // Until the user enters a sentinal value, add tracks to 
                // the temporary CD.
                
                trackCount++;  // Increment the track count for readability.
                
                // Ask the user for the track name
                System.out.println("Track #" + trackCount + ":");
                tempTrack = input.nextLine();
                
                if (tempTrack.equals("-999")){
                    // If our sentinal is detected, end the loop by setting 
                    // the loop value to false.
                    trackloop = false;
                }
                else {
                    // Otherwise, store the CD track name and looop.
                    tempCD.addTrack(tempTrack);
                }
            }
            
            // Store the temporary CD into the array
            CDArray[currentSize] = tempCD;
            
            // Increment the current size of the array.
            currentSize++;
            
            // Return a success.
            return true;
        }
        else {
            // Otherwise, tell the calling function we're too full.
            return false;
        }
    }
    
    
    public void delete() {
        // Deletes a CD from the stack
        // Console input.  Console output.  
        
        String delTitle;     // The title we plan on deleting.
        String delArtist;    // The artist we plan on deleting.
        int count;           // Couning variable, used multiple times.
        int index = -1;      // The index of the value we're deleting.
        
        // Ask the user what they'd like to delete.
        System.out.println("OK, what is the title you would like to delete?");
        delTitle = input.nextLine();
        System.out.println("And the artist?");
        delArtist = input.nextLine();
        
        
        for (count = currentSize; count > 0; count--) {
            // Scan through the array, looking for the values.  
            if (CDArray[count-1].getArtist().equalsIgnoreCase(delArtist) &&
                    CDArray[count-1].getTitle().equalsIgnoreCase(delTitle)) {
                // If both the artist and title match, store the index.
                index = count - 1;
            }
        }
        
        if (index != -1) {
            // If a match was found (-1 indicates no match found.)
            for (count = index; count < currentSize; count++) {
                //Itterate through the loop, moving values down.
                if (count + 1 == totalSize) {
                    // If we're falling off the end, add some null to compensate
                    CDArray[count] = null;
                }
                else {
                    // Move the values down.
                    CDArray[count] = CDArray[count+1];
                }
            }
        }
        currentSize --; // Remove one from our current size, as we lost a CD.
        
        // Tell the user we're done
        System.out.println("... Deleted!");
        
    }
    
    
    public void SortArtist() {
        // Method to sort by artist name.
        // No input, console output.  Writes sorting to array.
        
        int countA;    // Counting variable A, for the first loop.
        int countB;    // Counting variable B, for the second loop.
        CD tempCD;     // Holding CD, for when we swap CDs.
        
        // Output to let the user know we're working on it...
        System.out.println("OK, sorting by artist...");
        
        for (countA = 0; countA < currentSize; countA++) {
            // Iterate through the array, set one.  We're doing this for 
            // each value in the array.
            
            for (countB = 1; countB < (currentSize - countA); countB++) {
                // Iterate through the array, set two.  Used for comparison to 
                // iteration one.
                
                if ((CDArray[countB - 1].getArtist()).
                        compareTo(CDArray[countB].getArtist()) > 0) {
                    //If one artist is before another artist, swap the two. 
                    
                    // Execute the swap.
                    tempCD = CDArray[countB - 1];
                    CDArray[countB - 1] = CDArray[countB];
                    CDArray[countB] = tempCD;
                }
            }
        }
        
        // Let the user know we're done.
        System.out.println("... Done!");
    }
    
    
    public void SortTitle() {
        // Method to sort the CD library by title.
        // No input, console output.  Writes sorting to array.
        
        int countA;       // Counting variable A, for the first loop.
        int countB;       // Counting variable B, for the second loop.
        int minIndex;     // The index of the found value
        CD tempCD;           // Holding CD, for when we swap CDs.
        
        // Output to let the user know we're working on it...
        System.out.println("OK, sorting by title...");
        
        for (countA = 0; countA < currentSize - 1; countA++) {
            //First loop, we're doing this for each value in the array.
            
            minIndex = countA; // Store where we are, for use in the second loop
            
            for (countB = countA + 1; countB < currentSize; countB++) {
                // Create another for look, that starts at countA and checks up
                // until the end of the loop for the value.  
                
                if ((CDArray[countB].getTitle()).
                        compareTo(CDArray[minIndex].getTitle()) < 0) {
                    // If there is another value lower than the current one,
                    // swap them.
                    
                    minIndex = countB; // Store the location of the second value
                    
                    if (minIndex != countA) {
                        // If the lower value does exist...
                        
                        // Execute the swap.
                        tempCD = CDArray[countA];
                        CDArray[countA] = CDArray[minIndex];
                        CDArray[minIndex] = tempCD;
                    }
                }
            }
        }
        
        // Let the user know we're done.
        System.out.println("... Done!");
    }
    
    
    public void Display() {
        // Method to display all of the CDs stored in the program
        // No input, console output.  
        
        int count;   // Counter variable, for the loop.
        
        // Display some output for the user.
        System.out.println("---------- Displaying entire CD Library "
                + "----------");
        
        for(count=0;count < currentSize; count++){
            // For each CD we have stored, run that CD's display method.
            CDArray[count].display();
        }
        
        // More output for the user.
        System.out.println("---------- End of CD Library ----------");
        System.out.println("---------- Total: " + currentSize + " CDs"
                + " ----------");
    }
    
    public int size() {
        // Method to give the program the size of the array.
        
        return currentSize;  // Return the current size variable.
    }
    
    
    public static void main(String argv[]) {
        // Main method - used for testing the program
        
        final String VERSION = "1.1devel1";      // Program Version
        int CDcount;                             // The number of CDs we need.
        Scanner scan = new Scanner(System.in);   // Scanner for keyboard input
        CDList test;                             // Actual CD list
        int choice;                              // The user's choice.
        boolean looping = true;                  // Check to see if a loop
                                                 // should continue.
        
        // Welcome the user, and ask how many CDs the user is storing.
        System.out.println("Hello and welcome to Matthew's CD tracker, version"
                + VERSION + ".  \nPlease enter the number of CDs you will be "
                + "tracking...");
        CDcount = scan.nextInt();
        
        // Create a CD list with that information
        test = new CDList(CDcount);
        
        while (looping) {
            // Execute a loop, while the value of looping is true
        
            // Ask the user what they'd like to do.
            System.out.println("OK, what would you like to do?\n" + 
                "\t1 - Add a new CD\n" + 
                "\t2 - Delete a CD\n" + 
                "\t3 - Sort your CDs by artist\n" + 
                "\t4 - Sort your CDs by title\n" + 
                "\t5 - Display your CDs\n" + 
                "\t0 - Exit");
            choice = scan.nextInt();
            
            // Take the user's choice and run the proper method
            switch (choice) {
                    case (1): // "1 - Add a new CD"
                        if (!test.add()) {
                            // If we aren't able to add a CD because we're full,
                            // output a message to the user.  Otherwise, nothing
                            System.out.println("Sorry, but you ran out of "
                                    + "room!");
                        }
                        break;                  // Break the switch
                    case (2):                   // "2 - Delete a CD"
                        test.delete();          // Run the delete method.
                        break;                  // Break the switch
                    case (3):                   // "3 - Sort your CDs by artist"
                        test.SortArtist();      // Run the SortArtist method
                        break;                  // Break the switch
                    case (4):                   // "4 - Sort your CDs by title"
                        test.SortTitle();       // Run the SortTitle method
                        break;                  //Break the switch
                    case (5):                   // "5 - Display your CDs"
                        test.Display();         // Run the Display method
                        break;                  // Break the switch
                    case (0):                   // "0 - Exit"
                        looping=false;          // Deactivate the loop
                        break;                  // Break the switch
                    default:  // For everything else, print an error.
                        System.out.println("Sorry, that wasn't a valid option."
                                + "  Please try again...");
                        break;                  // Break the switch
            }
            }
            
            // Say goodbye...
            System.out.println("Thank you for using the CD tracker!");
        }
}
