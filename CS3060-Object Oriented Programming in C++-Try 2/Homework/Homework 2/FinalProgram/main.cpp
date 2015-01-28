#include <stdio.h>
#include <String>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include "progress.h"
#include "question.h"
#include "ui.h"
#include "test_question.h"
#include "test_progress.h"
#include "test_ui.h"
#include "test.h"

int main(int argc) {

	if (argc == 2) {
		// Check the number of arguements.  If there is more than one, test mode
		
		test testing; // Create a new testing object

		// Execute the tests on our Testing object
		testing.executeTests();

		// Pause so we can see the output
		system("PAUSE");
	}
	else {
		ui mainUI;              // Create a UI object
		progress students[100]; // Student progress tracker
		int stu = 0;            // The number of students already stored
		question questions;     // Create a question object
		int menuChoice = 1;     // The choice the user makes on a menu
		int userAnswer = 0;     // The user's answer to a question
		bool secondTry = false; // Whether this is their second try
		int i = 0;              // Loop counter variable

		while (menuChoice != 0) {
			// While it's not the menu choice to exit the program

			// Show our lovely header
			mainUI.genHeader(); 

			// Show our main menu
			mainUI.genMainMenu();

			// Ask the user what they want to do
			menuChoice = mainUI.getAnswer();

			if (menuChoice == 1) {
				// If it's the menu choice for answering questions

				// Intitialize a student object
				students[stu].setStudentName(mainUI.askStudentName());
				questions.setLevel(mainUI.askLevel());
				questions.setOp(mainUI.askOperation());
				students[stu].activate();

				// Generate a new question
				questions.generateQuestion();

				// Ask the user ten questions
				while (i < 10) {
					mainUI.askQuestion(questions.getNumOne(), 
						questions.getNumTwo(), questions.getOp(), secondTry);

					if (questions.checkAnswer(mainUI.getAnswer())) {
						// If the answer is true, increment counter and 
						// generate a new question
						students[stu].answerTrue();
						questions.generateQuestion();
						secondTry = false;
						mainUI.answerEchoResult(true);
						i++;
					}
					else {
						// If the answer is false, increment counter and
						// check to see if the student is on their second try...
						students[stu].answerFalse();
						if (secondTry) {
							// ... If so, new question
							questions.generateQuestion();
							secondTry = false;
							i++;
						}
						else {
							// ... If not, flag it so it is a second try
							secondTry = true;
						}

						// Output to the user
						mainUI.answerEchoResult(false);
					}
				}

				// Reset the counter and increment the number of students
				i = 0;
				stu++;
			}
			else if (menuChoice == 2) {
				// If it's the menu choice for seeing answers, output them
				for (int i = 0; students[i].getActive(); i++) {
					mainUI.echoStudentScores(students[i]);
				}
			}
			else if (-1 > menuChoice || menuChoice > 3) {
				// Invalid menu choice, let the user know
				mainUI.answerChoiceNotVaild();
				mainUI.genHeader();
				mainUI.genMainMenu();
			}
			else {
				// Do nothing, the loop will terminate
			}
		}
	}

	// Tell the OS we're done and happy :)
	return 0;
}