/*
 * Matthew Bowker
 * CS 1450-002
 * Assignment #5
 * Class for creating and managing a car
 */




public class car {
    private char actionCode;   // The action code, each one has a meaning
    private String tag;        // The licence tag of the car
    
    
    public car() {
        // Constructor with no arguements
        // No input, no output.
        
        // Set the action code and tag to the default value
        actionCode = 'Z';
        tag = "XXXXXX";
    }
    
    
    public car(String tempTag) {
        // Constructor with one arguement
        // String input, no output
        
        // Set the action code to the default value and the tag to the 
        // user-supplied value
        actionCode = 'Z';
        tag = tempTag;
    }
    
    
    public car(String tempTag, char tempAction) {
        // Constructor with two arguement
        // String, char input, no output
        
        // Set the action code and tag to the user-supplied value
        actionCode = tempAction;
        tag = tempTag;
    }
    
    
    public void setActionCode(char tempAction) {
        // Setter method for actionCode
        // char input, no output
        
        // Set the Action Code to the user-supplied value
        actionCode = tempAction;
    }
    
    
    public char getActionCode() {
        // Getter method for actionCode
        // no input, char output
        
        // Return the current value of the Action Code
        return actionCode;
    }
    
    
    public void setTag(String tempTag) {
        // Setter method for the tag
        // String input, no output
        
        // Set the Tag to the user-supplied value
        tag = tempTag;
    }
    
    
    public String getTag(){
        // Getter method for the tag
        // No input, string output
        
        // Return the current value of the Tag
        return tag;
    }
}
