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
    
    
    public static void main(String[] args) {
        final String VERSION = "1.0";                      //Program Ver.
        
        //Initializing the three CD classes
        CD alpha = new CD("Nightwish","Dark Passion Play");      //CD Class 1
        CD bravo = new CD("Within Temptation","The Unforgiving " //CD Class 2
                + "(Special Edition)");
        CD charlie = new CD("Eyes of Eden","Faith");             //CD Class 3
        
        //Adding tracks for CD List Alpha - Dark Passion Play
        alpha.addTrack("Bye Bye Beautiful");
        alpha.addTrack("Amaranth");
        alpha.addTrack("Cadence of her Last Breath");
        alpha.addTrack("Master Passion Greed");
        alpha.addTrack("Eva");
        alpha.addTrack("Sahara");
        alpha.addTrack("Whoever Brings the Night");
        alpha.addTrack("For the Heart I Once Had");
        alpha.addTrack("The Islander");
        alpha.addTrack("Last of the Wilds");
        alpha.addTrack("7 Days to the Wolves");
        alpha.addTrack("Meadows of Heaven");
        alpha.addTrack("Escapest (Bonus Track)");
        alpha.addTrack("Reach (Amaranth Demo Version)");
        
        //Adding tracks for CD List Bravo - The Unforgiving (Special Edition)
        bravo.addTrack("Why not Me");
        bravo.addTrack("Shot in the Dark");
        bravo.addTrack("In the Middle of the Night");
        bravo.addTrack("Faster");
        bravo.addTrack("Fire and Ice");
        bravo.addTrack("Iron");
        bravo.addTrack("Where is the Edge");
        bravo.addTrack("Sinéad");
        bravo.addTrack("Lost");
        bravo.addTrack("Murder");
        bravo.addTrack("A Demon's Fate");
        bravo.addTrack("Stairway to the Skies");
        bravo.addTrack("I Don't Wanna (Bonus Track)");
        bravo.addTrack("The Last Dance (Bonus Track)");
        bravo.addTrack("Empty Eyes (Bonus Track)");
        
        //Adding tracks for CD List Charlie - Faith
        charlie.addTrack("Winter Night");
        charlie.addTrack("When Gods Fall");
        charlie.addTrack("Star");
        charlie.addTrack("Pictures");
        charlie.addTrack("Dancing Fire");
        charlie.addTrack("Sleeping Minds");
        charlie.addTrack("Daylight");
        charlie.addTrack("Man In the Flame");
        charlie.addTrack("from Heaven Sent");
        charlie.addTrack("Not Human Kind");	
        
        //Welcome the user
        System.out.println("Welcome to Matthew's CD Tracker, Version " 
                + VERSION + "\n");
        
        //Output the track lists
        alpha.display();
        bravo.display();
        charlie.display();
        
        //Say goodbye
        System.out.println("Enjoy your music!");
    }
}
