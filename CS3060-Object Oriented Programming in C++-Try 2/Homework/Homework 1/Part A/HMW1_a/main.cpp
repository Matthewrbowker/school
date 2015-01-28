// Matthew Bowker, CS3060-001, Assignment #1 Problem 2.28

// Assignment 1a #2.28 (Digets of an Integer) Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each.
// HINT: Use the integer division and modulus operators.

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Declaring Variables
    int number;       // Number given by the user
    int tenThousands; // Number in the 10.000s place
    int thousands;    // Number in the 1.000s place
    int hundreds;     // Number in the 100s place.
    int tens;         // Number in the 10s place

    // Printing a welcome message to the user, as well as basic directions.
    cout << "Hello, and welcome to the Integer splitting application." << endl;
    cout << "Please enter a five-digit integer" << endl;

    // Recieve the input and store it in an integer.
    cin >> number;

    // Basic error checking... error out if the number isn't five digits.
    if (number < 10000 || number > 99999) {
        cout << "That's not a number that I can process!" << endl;
        return 1;
    }


    // Split out the 10000s
    tenThousands = number / 10000;
    number = number % 10000;

    // Split out the 1000s
    thousands = number / 1000;
    number = number % 1000;


    // Split out the 100s
    hundreds = number / 100;
    number = number % 100;


    // Split out the 10s
    tens = number / 10;
    number = number % 10;

    // Output all of the information to the console
    cout << tenThousands;
    cout << "   ";
    cout << thousands;
    cout << "   ";
    cout << hundreds;
    cout << "   ";
    cout << tens;
    cout << "   ";
    cout << number;
    cout << endl;

    // We're done here :)
    return 0;
}

