/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #5
 * Class to create the nodes for the linked list stacks and queues
 */




public class Node {
    car mine;      // The car the node contains
    Node next;     // The location of the next node in the stack.
    
    
    public Node(car temp, Node nxt){
        // Constructor, sets everything up
        // car, Node input; no output
        
        // Set the values of mine and next to the user-supplied values
        mine = temp;
        next = nxt;
    }
    
}
