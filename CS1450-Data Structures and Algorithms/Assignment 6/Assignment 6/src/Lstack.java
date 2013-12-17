/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #5
 * Class for creating and managing a linked-list stack
 */




public class Lstack {
    private Node top;          // The top node of the stack
    private int numElements;   // The number of elements in the stack
    
    public Lstack() {
        // Constructor method, initializes variables
        // No input, no output
        
        // Initialize the variables to the default value
        top = null;
        numElements = 0;
    }
    
    
    public void push(car tempCar) {
        // Method to add a car to the stack
        // Car input, no output
        
        // Create a node for the car
        top = new Node(tempCar,top);
        
        // Increment the number of elements
        numElements++;
    }
    
    
    public car pop() {
        // Method to "pop" a car off of the stack
        // No input, car output
        
        // Store the car temporarily
        car temp = top.mine;
        
        // Move the top down, eliminating the car
        top = top.next;
        
        // Decrement the number of elements
        numElements--;
        
        // Return the car to the caller
        return temp;
    }
    
    
    public boolean isEmpty() {
        // Method to check whether the stack is empty
        // No input, boolean output
        
        // If the top member of the stack is null, no stack exists and we
        // return true.
        return (top==null);
    }
    
    
    public int size() {
        // Method to return the size of the stack
        // No input, int output
        
        // Return the number of elements we have stored in a var.
        return numElements;
    }
    
    
    public void display() {
        // Method to display the stack in an easy-to-read format
        // No input, console output.
        
        String buffer = "| TOP -> |";   // Buffer to hold the output
        int length;                     // The length of the buffer
        String line = "";               // A variable holding our line of -
        Node curr = top;                // Incrementing node, for stepping
                                        // through the queue
        int lengthCur = 0;              // Length counter for the loop
        
        while (curr != null) {
            // Loop until we run out of nodes
            
            // Append a line and the tag onto the buffer
            buffer = buffer + " " + curr.mine.getTag() + " |";
            
            // Step up the stack
            curr = curr.next;
        }
        
        // Get the length of the buffer
        length = buffer.length();
        
        while(lengthCur < length) {
            // Loop to append "-" onto the line variable
            
            // append the value
            line = line + "-";
            
            // Increment the counter
            lengthCur++;
        }
        
        // Output the information to the console.
        System.out.println(line);
        System.out.println(buffer);
        System.out.println(line);
        
    }
    
    
    public void reverseStack(){
        // Method to reverse the stack, using a queue temporary storage
        // No input, no output
        
        Lqueue tempQueue = new Lqueue();  // Temporary queue for values
        
        while (numElements > 0) {
            // While we still have elements in our current stack...
            
            // Remove a value from the stack and add it to the Queue
            tempQueue.insert(pop());
        }
        
        while (tempQueue.isEmpty() == false) {
            // While we have values in the queue
            
            // Remove a value from the queue and add it to the stack
            push(tempQueue.remove());
        }
    }
    
}
