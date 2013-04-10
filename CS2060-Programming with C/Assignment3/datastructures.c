// Matthew Bowker
// CS2060
// March 20, 2013
// Stack
// Assignment #3: Demonstrating a stack

// PreProcessor Directives - we need stdio.h
#include <stdio.h>

// Defining some stuff
#define SIZE 5

//Function prototypes
void push(int *loc, int * arrayPtr[]);
int pop(int *loc, int * arrayPtr[]);
void unwind(int *loc, int * arrayPtr[]);

int main() {
    // Main function - where everthing runs from

    // Variables - two ints to control the loop, which choice the user picked, and the top
    int loop;
    int choice;
    int top = -1;

    //Create the stack
    int stack[SIZE];

    //Pointers to the stack and the top
    int *topPtr = &top;
    int (*stackPtr) = &stack;

    //Method array
    int (*method[3])(int *loc, int *arrayPtr[]) = {unwind, push, pop};

    printf("Welcome to Matthew's Stack!");
    while (loop) {
        //Repeat the menu
        printf("What can we help you with today?\n\tPress 1 to add a value to the stack.\n\tPress 2 to pop a value off of the stack.\n\tPress 0 to exit\n");
        scanf("%d",&choice);
        if (choice < 3) {
            //Error checking, then run the method
            method[choice](topPtr, stackPtr);
            if (choice == 0){
                loop = 0;
            }
        }
        else {
            //Woops, outside of the range
            printf("That's not a valid choice, sorry!\n");
        }
    }

    //Return we're done
    return 0;
}

void push(int *loc, int *arrayPtr[]) {
    //Method to add values

    //Variables
    int newLoc = *loc + 1;
    int tempVal;

    //Ask the user for a value
    printf("OK, please enter a value:\n");
    scanf("%d",&tempVal);
    if (newLoc > SIZE-1) {
        //Error checking
        printf("Sorry, but we're out of space in the stack!  Remove some elements or expand the stack to add more.\n");
    }
    else {
        //Add the value
        *(arrayPtr+newLoc) = tempVal;
        *loc = *loc + 1;
        printf("Value \"%d\" added successfully!\n",arrayPtr[newLoc]);
    }

}

int pop(int *loc, int * arrayPtr[]) {
    if (*loc > -1) {
        //Error checking

        //Print the value and remove it
        printf("Your value: %d\n", arrayPtr[*loc]);
        arrayPtr[*loc] = 0;
        *loc = *loc - 1;
    }
    else {
        //Woops, error
        printf("I'm sorry, there's nothing here...");
    }
}

void unwind(int * loc, int * arrayPtr[]) {
    //Run through pop until the stack is empty
    int i = 0;
    printf("OK, unwinding...");
    while (i < *loc+1) {
        //Loop to actually run through.
        pop(loc, arrayPtr);
    }
}
