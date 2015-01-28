// Matthew Bowker, CS3060-001, Assignment #1 Problem 4.26 decryption

#include <iostream>

using namespace std;

int decrypt(int value) {
    value = value + 20;
    value = value - 7;
    value = value % 10;
    return value;
}

int swapNumbers(int value1, int value2,  int value3, int value4) {
    return (value3 * 1000) + (value4 * 100) + (value1 * 10) + value2;
}

int main()
{
    int number;
    int thousands;
    int hundreds;
    int tens;

    cout << "Welcome to the decryption program!" << endl;
    cout << "Enter the number to decrypt here: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "That's not a number that I can process!" << endl;
        return 1;
    }

    // Split out the 1000s
    thousands = number / 1000;
    number = number % 1000;


    // Split out the 100s
    hundreds = number / 100;
    number = number % 100;


    // Split out the 10s
    tens = number / 10;
    number = number % 10;

    thousands = decrypt(thousands);
    hundreds = decrypt(hundreds);
    tens = decrypt(tens);
    number = decrypt(number);

    cout << "Here is your encrypted number: " << swapNumbers(thousands, hundreds, tens, number) << endl;
    return 0;
}
