/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #3
 * Class for creating and managing a 
 */

package datastructures;


public class CD {
    private String artist;          //String variable to hold the artist
    private String title;            //String variable to hold the CD title
    private tracklist tracklisting;  //creating a call to tracklist.java
    
    
    public CD(String artistName, String titleName) {
        //Constructor, initialize the artist, title, and tracklist.java
        //Takes two string inputs
        
        //Intitialize the variables
        artist = artistName;
        title = titleName;
        
        //Set up the calls to tracklist.java
        tracklisting = new tracklist();
    }
    
    
    public String getArtist(){
        //Method that returns the artist name
        //No input, String output
        return artist;  //Return the artist
    }
    
    
    public String getTitle(){
        //Method that returns the CD Title
        //No input, String output
        return title;  //Return the CD Title
    }
    
    
    public boolean addTrack(String trackinfo){
        //Method that adds a track to the tracklist.java call
        //String input, boolean output
        if (tracklisting.count() < 99) { //If we have less than 99 tracks stored
            return tracklisting.add(trackinfo);  //Call tracklist to add title
        }
        else {
            return false;  //Woops, too many strings
        }
    }
    
    public int numTracks(){
        //Method that returns the number of tracks in the listing
        //No input, String output
        return tracklisting.count();  //Return the track count
    }
    
    
    public void display(){
        //Method that returns the artist name
        //No input, outputs to the console.  Relies on tracklist.java
        
        //Starting with a heading line
        System.out.println("\"" + title + "\" By \"" + artist + "\":");
        
        //Call upon tracklist.java for the rest
        tracklisting.display(5);
    }
    
    
}
