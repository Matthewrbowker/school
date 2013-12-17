/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #5
 * Class for creating and managing a linked-list queue
 */




public class Lqueue {
    private Node front;    // The first value in our queue
    private Node rear;     // The last value in our queue
    
    
    public Lqueue() {
        // Constructor method
        // No input, no output
        
        // Set front and rear to their default values.
        front = null;
        rear = null;
    }
    
    
    public void insert(car tempCar){
        // Method for inserting a car into the queue
        // car input, no output
        
        if (front == null){
            // A little error checking, if we have nothing we can just add
            // the car as the first value
            
            // Create a new node with the car, store it as front
            front = new Node(tempCar,null);
            
            // Set rear to front, as there is only one value
            rear = front;
        }
        else {
            // Append a node onto the end of the queue
            
            // Put the node into line
            rear.next = new Node(tempCar,null);
            
            // Shift rear back so it still reflects accurate values
            rear = rear.next;
        }
    }
    
    
    public car remove() {
        // Method for removing a car from the queue.
        // No input, car output
        
        car temp;          // Temporary car, a holding place until we can return
        
        // Pull a car off the queue and store it in temp
        temp = front.mine;
        
        // Remove the car by shifting the stack
        front = front.next;
        
        // Return the car back to the caller.
        return temp;
    }
    
    
    public boolean isEmpty() {
        // Method to test whether the queue is empty
        // No input, boolean output
        
        // Return whether a queue exists.  A queue only exists when front is
        // not null.
        return (front == null);
    }
    
    
    public int size() {
        // Method to calculate the size of the queue
        // No input, int output
        
        int count = 0;      // Counter variable, we'll return this
        Node current;       // Create a temporary node for comparison
        
        current = front;    // Set the temporary node to the first node of the 
                            // set
        
        while (current != null){
            // Loop until we don't see any more nodes in the queue
            
            count++;                // Increment the counter variable
            current = current.next; // Step to the next node in the queue
        }
        
        // Return how many nodes we counted.
        return count;
    }
    
    
    public void display() {
        // Method to display the queue in an easy-to-read format
        // No input, console output.
        
        String buffer = "| FRONT -> |";      // Buffer to hold our output
        int length;                          // Length of the output
        String line = "";                    // String to hold the line of -'s
        Node curr = front;                   // Temporary node for stepping
                                             // through the queue
        int lengthCur = 0;                   // The current length of the buffer
        
        while (curr != null) {
            // Loop until the stepping node is null
            
            // Append the tag onto the buffer
            buffer = buffer + " " + curr.mine.getTag() + " |";
            
            // Step up the list.
            curr = curr.next;
        }
        
        // Get the length of the buffer
        length = buffer.length();
        
        while(lengthCur < length) {
            // Loop to append onto the line variable
            
            // For each character, add one -
            line = line + "-";
            
            // Increment the length.
            lengthCur++;
        }
        
        // Print the line, buffer, then another line to the console
        System.out.println(line);
        System.out.println(buffer);
        System.out.println(line);
        
    }
    
    
    public void reverseQueue() {
        // Method to reverse the queue value for value
        // No input, no output
        
        Lstack tempStack = new Lstack();   // Temporary stack to hold the data
        
        while (isEmpty() == false) {
            // While the queue isn't empty
            
            // Remove a value from the queue and put it on the stack
            tempStack.push(remove());
        }
        
        while (tempStack.isEmpty() == false){
            // While the stack isn't empty
            
            // Reversing the prochedure, removes a value from the stack and
            // returns it to the queue
            insert(tempStack.pop());
        }
    }
}
