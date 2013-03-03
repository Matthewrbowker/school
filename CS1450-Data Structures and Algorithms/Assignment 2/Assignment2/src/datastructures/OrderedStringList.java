/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #2
 * Class for processing a string list stack
 */

package datastructures;


public class OrderedStringList {
    private int currentDataSize;      //The size of the data, used for arrays.
    private String[] data;            //The array holding the data.
    private int totalDataSize;        //The total size of the array.
    
    
    public OrderedStringList(int size){
        //Intitializing the variables defined above, CONSTRUCTOR.
        //integer input, no output
        currentDataSize = 0;
        totalDataSize = size;
        data = new String[size];   
    }
    
    
    public int size() {
        //Returning the current size of the array.
        //No input, integer output
        return currentDataSize;  //Return the current data size for use
    }
    
    
    public String dataReturn(int location){
        //Returns the specific data for a location
        //integer input, string output
        return data[location]; //Return the data stored at "location"
    }
    
    
    public int find(String s) {
        //Finds a string in the stack
        //String input, int output
        
        int count = 0;        //Counting variable, to be used for the loop
        int foundLoc = -1;    //The location of the value, defaults to not found
        
        //Loop to see if the data matches the string given.  
        while (count < currentDataSize){
            if (data[count].equals(s)){
                foundLoc = count; //If so, store the location in a variable
            }
            count = count + 1; //increment the counter 
        }
        return foundLoc; //Return the value found.
    }
    
    
    public boolean insert(String s) {
        //Inserts a string into the stack
        //String input, boolean output
        
        if (currentDataSize < totalDataSize){
            //If the data size is smaller than the allowed data size, add it
            data[currentDataSize] = s;
            currentDataSize = currentDataSize + 1;
            return true;
        }
        else {
            //Else, tell the computer we can't do that.
            return false;
        }
    }
    
    
    public boolean delete(String s) {
        //Deletes a value from the stack, moving values down to compensate
        //String input, boolean output.  Uses find method.
        int location = find(s);    //The location of the statement in the stack
        int count = location;      //Counter-defaults to the current location
        try{
            //Encased in a try statement to catch an out of bounds exception
            while (count < currentDataSize){
                //Goes through each piece of data, moving it down one space
                if (count + 1 < currentDataSize) {
                    data[count] = data[count + 1];
                }
                else {
                    //If we run out of values, add some null values at the end.
                    data[count] = null;
                }
                count = count + 1; //Increment the counter
            }
        // Subtract one from the curent data size, so we don't have wierd values
        currentDataSize = currentDataSize - 1;
        return true; //Return success!
        }
        catch(Error e){
            //If an error occurs, return a failure.
            return false;
        }
    }
    
    
    public boolean deleteRange(String start, String end) {
        //Deletes a range of values, from "start" to "end"
        //Two String inputs, boolean output. Uses find method.
        
        int startLoc = find(start);   //The location of the start string
        int endLoc = find(end);       //The location of the end string
        if (startLoc == -1 || endLoc == -1) {
            //If one of those values doesn't exist, return an error.
            return false;
        }
        else {
            //Otherwise, loop through and run delete statements on everything.
            while (startLoc <= endLoc) {
                delete(data[startLoc]);
                endLoc = endLoc - 1; //Each time, one step closer to the end.
            }
            return true; //Return a success!
        }
    }
    
    
    public void displayNoLF() {
        //Displays all the values without any formatting
        //No input, no output, prints to screen.
        
        String collection = ""; //Collection variable, to hold the values
        int count = 0;          //Counter variable, for the loop
        
        while(currentDataSize > count && count < totalDataSize){
            //While we're less than the total data size and current data size
            collection = collection + data[count]; //append the value
            
            if (currentDataSize-1 != count ) {
                //If we're not at the end, add a comma.
                collection = collection + ", ";
            }
            count = count + 1;
        }
        System.out.println(collection); //Print the final output to the screen.
    }
    
    
    public void display() {
        //Displays all values with table formatting
        //no input, no output, prints to screen
        
        int count = 0;  //Counter variable for the loop
        
        //Heading for the table
        System.out.println("-------------------------");
        System.out.println("|#\t|Value\t\t|");
        System.out.println("-------------------------");
        
        while(currentDataSize > count && count < totalDataSize){
            //While loop adds another row on, with the contents of the array.
            System.out.println("|" + (count+1) + "\t|" + data[count] + "\t|");
            System.out.println("-------------------------");
            
            count = count + 1; //Increment the counter
        }
    }
    
    
    public boolean merge(OrderedStringList a, OrderedStringList b){
        //Merges two string lists together
        //Two string lists input, boolean output, uses size and dataReturn
        
        int finalSize = a.size() + b.size();  //Calculate the final size we need
        int count = 0;                        //Counting variable
        
        try {
            //Try statement to catch any errors
            data = new String[finalSize]; //Create a new right-sized data array
            totalDataSize = finalSize;    //Store the new size for use
            currentDataSize = finalSize;  //Store the current size for use
            
            while (count < finalSize){
                //Loop to append the data
                if (count < a.size()){
                    //If we're in a, then add on using a
                    data[count] = a.dataReturn(count);
                }
                else {
                    //If we're in b, then add on using b
                    data[count] = b.dataReturn(count - a.size());
                }
                count = count + 1; //Increment the counter
            }
            return true; //Return success
            }
            catch (Error e){
                //If something went wrong, return failure.
                return false;
            }
    }
    
    
    public static void main(String[] args) {
        //Main method, used for testing
        //Command line args input, void output, uses all methods.
        
        OrderedStringList alpha = new OrderedStringList(10);   //1st String List
        OrderedStringList bravo = new OrderedStringList(1);    //2nd String List
        OrderedStringList charlie = new OrderedStringList(8);  //3rd String List
        
        //Testing the size method by printing the size of Alpha
        System.out.println("The Alpha array size is"
                + " currently: " + alpha.size());
        
        //Putting some data into both Alpha and Bravo
        alpha.insert("Testing");
        alpha.insert("Testing2");
        alpha.insert("Testing3");
        alpha.insert("Testing4");
        alpha.insert("Testing5");
        alpha.insert("Testing6");
        alpha.insert("Testing7");
        bravo.insert("Testing_b1");
        bravo.insert("Testing_b2"); //Will not work, as bravo is smaller than 2
        
        //Displaying the data of Alpha with no line feed
        System.out.print("The Alpha array consists of: ");
        alpha.displayNoLF();
        
        //Showing how big Alpha is with the data inserted
        System.out.println("The alpha "
                + "array size is currently: " + alpha.size());
        
        //Testing the find method by finding the string "Testing3"
        System.out.println("\"Testing3\" is located at position #" + 
                alpha.find("Testing3") + ".");
        
        //Displaying the contents of Alpha and Bravo
        System.out.println("Alpha:");
        alpha.display();
        System.out.println("Bravo:");
        bravo.display();
        
        //Merging Alpha and Bravo into Charlie, then display the results
        if(charlie.merge(alpha, bravo)) {
            System.out.println("Merge successful!\n");
        }
        System.out.println("Charlie:");
        charlie.display();
        
        //Delete a range from Charlie, to test the method
        charlie.deleteRange("Testing2","Testing5");
        System.out.print("Charlie: ");
        charlie.displayNoLF();
        
        //Deleting testing7 to test the delete method
        charlie.delete("Testing7");
        
        //And, printing one last time to see the final result, and a termination
        System.out.print("Alpha: ");
        alpha.displayNoLF();
        System.out.print("Bravo: ");
        bravo.displayNoLF();
        System.out.print("Charlie: ");
        charlie.displayNoLF();
        System.out.println("---------- END PROGRAM ----------");
    }
}

