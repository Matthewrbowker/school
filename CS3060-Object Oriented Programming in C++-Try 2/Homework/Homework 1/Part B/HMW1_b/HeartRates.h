// Matthew Bowker, CS3060-001, Assignment #1 Problem 3.16 (HeartRates.H)

#ifndef HEARTRATES_H
#define HEARTRATES_H

#endif // HEARTRATES_H

using namespace std;

class HeartRates {
public:
    HeartRates();
    HeartRates(string, string, int, int, int);
    string getFirstName();
    void setFirstName(string);
    string getLastName();
    void setLastName(string);
    int getMonth();
    void setMonth(int);
    int getDay();
    void setDay(int);
    int getYear();
    void setYear(int);
    int getCurrentMonth();
    void setCurrentMonth(int);
    int getCurrentDay();
    void setCurrentDay(int);
    int getCurrentYear();
    void setCurrentYear(int);
    int getAge();
    int getMaximumHeartRate();
    int getTargetHeartRate(int);
    void generateReport();
private:
    string firstName;
    string lastName;
    int month;
    int day;
    int year;
    int currentMonth;
    int currentDay;
    int currentYear;
};

HeartRates::HeartRates() {

}

HeartRates::HeartRates(string tempFirstName, string tempLastName, int tempMonth, int tempDay, int tempYear) {
    firstName = tempFirstName;
    lastName = tempLastName;
    month = tempMonth;
    day = tempDay;
    year = tempYear;
}

string HeartRates::getFirstName() {
    return firstName;
}

void HeartRates::setFirstName(string tempFirstName) {
    firstName = tempFirstName;
}

string HeartRates::getLastName() {
    return lastName;
}

void HeartRates::setLastName(string tempLastName) {
    lastName = tempLastName;
}

int HeartRates::getMonth() {
    return month;
}

void HeartRates::setMonth(int tempMonth) {
    month = tempMonth;
}

int HeartRates::getDay() {
    return day;
}

void HeartRates::setDay(int tempDay) {
    day = tempDay;
}

int HeartRates::getYear() {
    return year;
}

void HeartRates::setYear(int tempYear) {
    year = tempYear;
}

int HeartRates::getCurrentMonth() {
    return currentMonth;
}

void HeartRates::setCurrentMonth(int tempMonth) {
    currentMonth = tempMonth;
}

int HeartRates::getCurrentDay() {
    return currentDay;
}

void HeartRates::setCurrentDay(int tempDay) {
    currentDay = tempDay;
}

int HeartRates::getCurrentYear() {
    return currentYear;
}

void HeartRates::setCurrentYear(int tempYear) {
    currentYear = tempYear;
}

int HeartRates::getAge() {

    if (currentYear == 0) {// Have we set the year yet?
        cout << "Please enter the current year:";
        cin >> currentYear;
    }

    return currentYear - year;
}


int HeartRates::getMaximumHeartRate() {
    return 220 - getAge();
}

int HeartRates::getTargetHeartRate(int choice) {
    switch (choice) {
        case 1: // Min
            return getMaximumHeartRate() * .5;
            break;
        case 2:
            return getMaximumHeartRate() * .85;
            break;
        default:
            cout << "Error: You haven't specified a "
                     << "valid case for getTargetHeartRate()" << endl;
            return 0;
            break;
    }

}

void HeartRates::generateReport() {
    cout << "--------------------------------" << endl;
    cout << "|   Patient HeartRate Report   |" << endl;
    cout << "|    Dr. Albert Broullette     |" << endl;
    cout << "--------------------------------" << endl;
    cout << "Patient Name: " << getLastName() << ", " << getFirstName() << endl;
    cout << "Patient Date of Birth: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
    cout << "--------------------------------" << endl;
    cout << "Maximum Heart Rate: " << getMaximumHeartRate() << endl;
    cout << "--------------------------------" << endl;
    cout << "Target Heart Rate: " << getTargetHeartRate(1) << " - " << getTargetHeartRate(2) << endl;
    cout << "--------------------------------" << endl;
    cout << "Report generated on: " << getCurrentMonth() << "/" << getCurrentDay() << "/" << getCurrentYear() << endl;


}
