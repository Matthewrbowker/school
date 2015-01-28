// Matthew Bowker, CS3060-001, Assignment #1 Problem 3.16

#include <iostream>
#include <string>

#include "HeartRates.h"

using namespace std;

int main()
{
    HeartRates rate;
    string tempFirstName;
    string tempLastName;
    int tempMonth;
    int tempDay;
    int tempYear;
    int tempCurrentMonth;
    int tempCurrentDay;
    int tempCurrentYear;
    int i;

    cout << "Welcome to the Heart Rate Calculator program" << endl;
    cout << "Please enter the Patient's first name: ";
    cin >> tempFirstName;
    cout << "Please enter the Patient's last name: ";
    cin >> tempLastName;
    cout << "Please enter the Patent's month of birth in numbers: ";
    cin >> tempMonth;
    cout << "Please enter the Patent's day of birth in numbers: ";
    cin >> tempDay;
    cout << "Please enter the Patent's year of birth in numbers: ";
    cin >> tempYear;
    cout << "Please enter the current month in numbers: ";
    cin >> tempCurrentMonth;
    cout << "Please enter the current day in numbers: ";
    cin >> tempCurrentDay;
    cout << "Please enter the current year in numbers: ";
    cin >> tempCurrentYear;
    rate.setFirstName(tempFirstName);
    rate.setLastName(tempLastName);
    rate.setMonth(tempMonth);
    rate.setDay(tempDay);
    rate.setYear(tempYear);
    rate.setCurrentMonth(tempCurrentMonth);
    rate.setCurrentDay(tempCurrentDay);
    rate.setCurrentYear(tempCurrentYear);

    cout << "Generating report...." << endl;
    for (i=0; i < 50; i++) {
        cout << endl;
    }

    rate.generateReport();
    return 0;
}

