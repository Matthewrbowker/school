/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #6
 * Class for adding words to a Binary Search Tree
 *
 * This class has the following interface:
 * 1) constructor TextReader(String filename).  Initializes to
 *    read exsiting file with full path name filename;
 * 2)String GetWord() returns the next word in the file,
 *   or NULL when there are no words left.
 */

import java.io.*;
import java.util.*;


public class TextReader {

private Scanner read;
private String currline;

public TextReader(String filename){
 try{
 currline = "";
 read =new Scanner(new File(filename));
    }
 catch (Exception ex)
        {   //Gets here if any errors occur; we will print the error stuff
            System.out.println("File does not exist error: "+ex.toString());
 //           ex.printStackTrace();
        }

    }

    private static boolean isLetter(char ch) {
        return ((ch >= 'A')&&(ch <= 'Z') ||
                (ch >= 'a')&&(ch <= 'z') ||
                (ch == '-') || (ch == '\'')  //Allow dash and apostrophe
                );  }
    private String removeNextWord(String s) {
        //Returns the string with the first 'word' removed
        //First,  pull all non-letters off front
        while ((s.length()>0) && (isLetter(s.charAt(0))== false))
          s = s.substring(1);
        //Now, pull all letters off front
        while ((s.length()>0) && (isLetter(s.charAt(0))== true))
          s = s.substring(1);
        //Finally remove all non-letters off front
        while ((s.length()>0) && (isLetter(s.charAt(0))== false))
          s = s.substring(1);

        return s;                             //Return the resulting string
    }
    private String getNextWord(String s) {
        //Returns first 'word' of the string
        //First,  pull all non-letters off front
        String word="";
        while ((s.length()>0) && (isLetter(s.charAt(0))== false))
          s = s.substring(1);
        //Now, keep all letters as we pull them off the front
        while ((s.length()>0) && (isLetter(s.charAt(0))== true))
        {   word = word + s.charAt(0);  //build up the word
            s = s.substring(1);         //remove letters from string input
        }
        return word;                    //Return the resulting word string
    }

   public String GetWord(){
     // throws FileNotFoundException  //required throw line
    {   String nextword;

        while ((currline != null)&&(currline.length()== 0)){
            if (read.hasNext())
              currline =  read.nextLine().trim();
            else
              currline = null;
        }
        if (currline != null)
        {    nextword = getNextWord(currline);   //get word from front of line
             currline = removeNextWord(currline).trim();  //update the line w/o word
        }
        else
        {
             nextword = null;
        }
       return nextword;
    }
    }
}
  /*  try{
      int num;
      double val=0;
      int i,j;
      String[] list;
      String linebuffer;  // Holds the lines read in
      //read will prepare the disk file to be read; \\ because \ is escape char
      Scanner read = new Scanner(new File("f:\\amat.txt"));

      //write is where the data will go
//      PrintStream write = new PrintStream(new File("c:\\dat\\datout.txt"));
      num = Integer.parseInt( read.nextLine());
    //))read.nextInt();
   *
   */