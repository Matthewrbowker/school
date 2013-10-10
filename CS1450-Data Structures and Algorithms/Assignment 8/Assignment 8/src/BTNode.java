/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #8
 * Node class for the Binary Seach Tree
 */

public class BTNode {
    public String nodeData;     // The data of the node.
    public int nodeCount;       // The number of times the word appears.
    public BTNode left, right;  // Pointers to the next node.
    
    public BTNode(String data){
        // Constructor method - initializes variables.
        // String input.
        
        // Initialize the variables.
        nodeData = data;
        nodeCount = 1;
        left = null;
        right = null;
    }
    
    public void increment() {
        // Incrementor method for nodeCount.
        // No input, no output.
        nodeCount++;
    }
    
}
