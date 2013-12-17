4/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #8
 * Class for adding words to a Binary Search Tree
 * This code is modified from Assignment 7
 * 
 * This class uses wordfind.TextReader, provided and copyright Al Brouillette.
 * Used with permission.
 */

public class BST {

    public static void main(String[] args) {
        BSTree tree;           // The Binary Search Tree we'll be using
        TextReader reader;     // The TextReader class, provided by Al.
        String nextWord;       // The next word we're adding to the BST
        
        // Intitialize the tree and the text reader.
        tree = new BSTree();
        reader = new TextReader("/Users/matthewrbowker/"
                + "Documents/School/DSA/Assignments/Assignment 7/Data.as7");
        
        // Read the first word of the file
        nextWord = reader.GetWord();
        
        // Loop through the file, reading the other words.
        while (nextWord != null) {
            tree.insert(nextWord, true);
            nextWord = reader.GetWord();
        }
        
        // Display the tree.
        //tree.Display();
        
        // Print the height of the tree
        System.out.println("Height of the tree: " + tree.height());
        
        // Print the number of comparisons
        System.out.println("Number of comparisons: " + tree.total);
        
        // Print the node count
        System.out.println("Node count: " + tree.nodeCount());
        
        // Print the average number of comparisons
        System.out.println("Average number of comparisons:");
        tree.aveSearch();
    }
}
