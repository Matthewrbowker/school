// Matthew Bowker, CS3060-001, Assignment #1 Problem 5.24

#include <iostream>
#include <string>

using namespace std;

string genIndividualRows(int rowNum) {
    string buffer;
    (rowNum == 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (9 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (8 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (7 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (6 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (5 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (4 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (3 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (2 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (1 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (2 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (3 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (4 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (5 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (6 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (7 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (8 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (9 <= rowNum && rowNum <= 10) ? buffer = buffer + "*" : buffer = buffer + " ";
    (rowNum == 10) ? buffer = buffer + "*" : buffer = buffer + " ";

    return buffer;
}

void genStars(int rows) {
    int finalRows;
    int i;

    i = 0;

    finalRows = rows;

    rows = rows - 1;
    rows = rows / 2;

    finalRows = finalRows - rows;

    while (i < rows) {
        i++;
        cout << genIndividualRows(i) << endl;
    }

    cout << genIndividualRows(finalRows) << endl;

    while (i > 0) {
        cout << genIndividualRows(i) << endl;
        i--;
    }
}

int main()
{
    int numRows;
    cout << "Please enter the number of rows of stars you would like (between 1 and 19, odd numbers only): ";
    cin >> numRows;

    if (numRows < 1 || numRows > 19) {
        cout << "Sorry, that number won't work for me. " << endl;
        return 1;
    }

    if ((numRows % 2) != 1) {
        cout << "That's not an odd number, bro! Try again please." << endl;
        return 1;
    }

    genStars(numRows);

    return 0;
}
