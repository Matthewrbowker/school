/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #7
 * Class for controlling a Binary Search Tree
 */

public class BSTree {
    BTNode root;    // The root node of the tree, our functions are based off it
    String buffer;  // Buffer text for the output.
    int counter;    // Counter for the output.
    
    
    public BSTree() {
        // Constructor - sets variables
        // No input.
        
        // Create a root node.
        root = null;
        
        // Create the buffer, and add the top line.  
        buffer = "|";
        while (counter < 67) {
            // Rather than trying to create a string with 67 "-", it was easier
            // to put it in a loop.
            buffer = buffer + "-";
            counter++;
        }
        buffer = buffer + "|\n|";
        
        // Reset the counter for future use.
        counter = 0;
    }
    
    
    public BTNode insert(String newWord, boolean lowerCase) {
        // Function that inserts a node into the tree.
        
        BTNode returnValue;  // Pointer to the return value of the node we just
                             // added.
        
        if (lowerCase) {
            // If the function calls for a lower-case letter, make it lower case
            newWord = newWord.toLowerCase();
        }
        
        if (root == null) {
            // If the root is null, we'll just make this the first root.
            root = new BTNode(newWord);
            
            // Set the return value.
            returnValue = root;
        
        }
        else {
            // Call the recersive insert function to insert the node.
            returnValue = insertR(root, newWord);
        }
        
        // Return the value.
        return returnValue;
    }
    
    
    public BTNode insertR(BTNode n, String value) {
        // Recersive insert function - goes through the nodes until it finds the
        // likely spot to insert the new node.
        // BTNode, String input, BTNode output. 
        
        BTNode returnValue = null;  // The return value we're giving back to
                                    // the caller.
        
        if (value.compareTo(n.nodeData) < 0) {
            // If the word is less than the node we're currently raversing, 
            // the function moves left.
            
            if (n.left == null) {
                // If the left pointer is undefined, let's add our value!
                n.left = new BTNode(value);
                
                // Set the return value
                returnValue = n.left;
            }
            else {
                // Run the recersive insert function, checking to the left.
                insertR(n.left, value);
            }
            
        }
        else if (value.compareTo(n.nodeData) > 0) {
            // If the word is greater than the node we're currently traversing,
            // the function moves right.
            
            if (n.right == null) {
                // If the right pointer is undefined, let's add our value.
                n.right = new BTNode(value);
                
                // Set the return value.
                returnValue = n.right;
            }
            else {
                // Run the recersive insert function, checking to the right.
                insertR(n.right, value);
            }
        }
        else {
            // The values match, increment the current node.
            n.increment();
            
            // Set the return value.
            returnValue = n;
        }
        
        // Return the return value.
        return returnValue;
    }
    
    
    public void visit(BTNode n) {
        // Function to add to our buffer.
        // BTNode input, ouput added to the "buffer" varaible
        
        String tempNumber;    // The number we're adding to the string.
        String tempText;      // The text we're adding to the string.
        
        // Set the value of tempText to the node's data.
        tempText = n.nodeData;
        
        // Trim the string if it's greater than 10 characters.
        tempText = tempText.substring(0, Math.min(tempText.length(), 10));
        
        while(tempText.length() < 11) {
            // Add spaces if it's less than 10 characters
            tempText = tempText + " ";
        }
        
        // Set the value of tempNumber to the node's data, and covert to string.
        tempNumber = Integer.toString(n.nodeCount);
        
        while(tempNumber.length() < 4) {
            // Add zeros if the number is less than 3 characters.
            tempNumber = "0" + tempNumber;
        }
        
        // Write the output to the buffer.
        buffer = buffer + tempText;
        buffer = buffer + " ";
        
        buffer = buffer + tempNumber;
        buffer = buffer + "|";
        
        // Increment the counter
        counter++;
        
        if (counter > 3) {
            // If the counter is greater than 3, add a line break to our script.
            buffer = buffer + "\n";
            buffer = buffer + "|";
            
            // Reset the counter.
            counter = 0;
        }
        
    }
    
    
    public void traverse(BTNode n) {
        // Recersive function, checks through the nodes and adds them to the 
        // output using visit().
        // BTNode input, no output.  
        if (n != null) {
            visit(n);
            traverse(n.left);
            traverse(n.right);
        }
    }
    
    
    public void Display() {
        // Function to display the contents of the nodes.
        // No input, output to console.
        
        // Begin the recursive traversal.
        traverse(root);
        
        // Reset the counter.
        counter = 0;
        
        while (counter < 67) {
            // Add the lines again.
            buffer = buffer + "-";
            counter++;
        }
        
        // Reset the counter
        counter = 0;
        
        // Add one more line to the buffer, to make things even.
        buffer = buffer + "|";
        
        // Output the buffer to the console.
        System.out.println(buffer);
        
        // Output the word count to the console.
        System.out.println("There are " + wordCount(root) + " words in"
                + " the tree");
    }
    
    
    public int wordCount(BTNode n) {
        // Function that counts the number of words.
        // BTNode input, int output.  Recursive function.
        
        int count;   // Variable that holds the number of words.
        
        // Set the counter variable.
        count = 0;
        
        if (n!= null) {
            // If n is not null, add the count and recurse.
            
            count = count + n.nodeCount;
            count = count + wordCount(n.left);
            count = count + wordCount(n.right);
        }
        
        // Return the count.
        return count;
    }
}
