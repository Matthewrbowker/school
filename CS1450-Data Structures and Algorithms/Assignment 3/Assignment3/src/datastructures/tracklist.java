/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #3
 * Class for processing a track list
 */

package datastructures;

public class tracklist {
    private String[] tracks;    //Array to store all of the tracks
    private int numTracks = 0;  //Intitialize the tracks counting var to 0
    
    
    public tracklist() {
        //Constructor method for the class
        //Takes no input
        
        //Initialize the array for the tracks
        tracks = new String[99];
    }
    
    
    public boolean add(String trackname){
        //Method to add a track to our current track list
        //String input, boolean output
        
        try {  //Try statement to catch an array out of bounds exception
            tracks[numTracks] = trackname; //Store the track name into the array
            numTracks++; //Increment the number of tracks, as we have one more!
            return true; //Tell the CD method it worked
        }
        catch(Error e) {
            return false; //Something broke, we weren't able to add the track
        }
    }
    
    
    int count(){
        //Method that returns the number of tracks in the stack
        //No input, int output
        
        return numTracks;  //Return the number of tracks
    }
    
    
    void display(int indent){
        //Method to print out the track list
        //int input, outputs to console.
        
        
        int count = 0;       //Counting variable - number of tracks
        int whiteSpaceCount; //Counting variable - number of spaces
        String buffer = "";  //String buffer, used to build the output
        
        while (count < numTracks){ //This loop handles each track name
            for(whiteSpaceCount=0;whiteSpaceCount < indent; whiteSpaceCount++){
                //For loop to add the predefined number of spaces to the buffer
                buffer = buffer + " ";
            }
            //Append the track name and number onto the buffer
            buffer = buffer + (count+1) + ". " + tracks[count] + "\n";
            
            //Increase the counting variable
            count++;
        }
        System.out.println(buffer);  //Output the buffer to the screen
    }
}
