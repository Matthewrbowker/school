// Matthew Bowker
// CS2060
// March 20, 2013
// Function Pointers
// Assignment #2: Demonstrating an array of function pointers

// PreProcessor Directives - we need stdio.h
#include <stdio.h>


// Function Primitives, we have 5 functions in this program
void menu();
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);

int main() {
    // Main function - the one called when the program starts

    int loop = 1;    // Whether the loop should continue or not
    int choice = 0;  // What the user's choice is
    int (*mathop[4]) (int a, int b) = {add, sub, mult, div};  // Storage array for our function pointers
    int result;      // The result of the computation
    int a;           // The first number to be computed
    int b;           // The second number to be computed

    // Greet the user
    printf("Welcome to Matthew's Simple Calculator, Version 1.0!\r\n");

    while (loop) {
        // Enter a loop which allows for multiple calculations

        // Display a menu and get what the user wants to do
        menu();
        scanf("%d",&choice);

        // Some error checking
        if (choice == 0) {
            // If the user chose to exit, terminate the loop

            loop = 0;
            }
        else if (choice > 4 || choice < 0) {
            // A little error checking - check for valid input

            printf("Sorry, that's not a valid choice!"); // Woops, no go!
            }
        else {
            // Go ahead and ask the user for numbers, then run the computation and print the result

            printf("OK, what's the first number?  ");
            scanf("%d",&a);
            printf("And how about the second number?  ");
            scanf("%d",&b);
            result = (*mathop[choice - 1])(a,b);
            printf("\t = %d\r\n\r\n",result);
        }



    }

    // Thank the user and terminate the program
    printf("Thank you for playing, please come back later!\r\n\r\n");
    return 0;
}

void menu() {
    // Menu function - prints out the menu options
    printf("----------------------------------------\r\n");
    printf("Please choose an option:\r\n");
    printf("\t1 - Addition\r\n");
    printf("\t2 - Subtraction\r\n");
    printf("\t3 - Multiplication\r\n");
    printf("\t4 - Division\r\n");
    printf("\tOr type \"0\" to quit!\r\n");
}

int add(int a, int b) {
    // Addition function - adds two numbers

    // Inform the user what we're doing.
    printf("You selected addition!\r\n");
    printf("%d + %d\r\n", a, b);

    // Return our calculation
    return a + b;
}

int sub(int a, int b) {
    // Subtraction function - subtracts two numbers

    // Inform the user what we're doing
    printf("You selected subtraction!\r\n");
    printf("%d - %d\r\n", a, b);

    // Return our calculation
    return a - b;
}

int mult(int a, int b) {
    // Multiplication function - multiplies two numbers

    // Inform the user what we're doing
    printf("You selected multiplication!\r\n");
    printf("%d * %d\r\n", a, b);

    // Return our calculation
    return a * b;
}

int div(int a, int b) {
    // Division function - divides two numbers

    // Inform the user what we're doing
    printf("You selected division!\r\n");
    printf("%d / %d\r\n", a, b);

    // Return our calculation
    return a / b;
}
