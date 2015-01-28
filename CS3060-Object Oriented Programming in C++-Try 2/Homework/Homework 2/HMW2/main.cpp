#include <iostream>
#include "ui.h"
#include "question.h"
#include "progress.h"
#include "student.h"

using namespace std;

int main()
{
	ui mainUI;
    question mainQuestion;
    progress mainProgress;
    student mainStudent;
	int answer;
	int choice;

    mainUI.genHeader();

    while(choice != 0) {
    	// Do stuff here.

    }

    cout << "What is 2 + 2?" << endl;

    cin >> answer;

    while (true) {
        // generate question
        // Get user input
        // Test the question: If true, then increment the true counter, if false then increment the fals ecounter
        // 
    }



    return 0;
}
