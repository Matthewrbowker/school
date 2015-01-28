using namespace std;

class test_ui {
private:
	ui mainUI;           // The testing UI object
	bool testOutputs();
	void breakline();
public:
	bool executeTests();
};

void test_ui::breakline() {
	// Visual function, outputs an 80 character breakline
	// Requriements: N/A

	// Output a newline for ease of use
	cout << endl;

	// Create 80 dashes
	for (int i = 0; i <= 80; i++) {
		cout << "-";
	}

	// Another newline, for luck
	cout << endl;
}
bool test_ui::testOutputs() {
	bool tempReturn = true;       // Whether the run succeeded
	string askStudentName_output; // The output of askStudentName()
	int getAnswer_output;         // The output of getAnswer()
	progress testProgress;        // Testing progress object

	// Set the values of our testing progress object
	testProgress.setStudentName("Charlie Test");
	testProgress.answerTrue();
	testProgress.answerTrue();
	testProgress.answerTrue();
	testProgress.answerFalse();
	testProgress.answerFalse();

	try {
		// Attempt to generate the proper output

		// Test function genHeader()
		cout << "Header generation" << endl;
		cout << "-----------------" << endl;
		mainUI.genHeader();
		breakline();

		// Test function genMainMenu()
		cout << "Main menu generation" << endl;
		cout << "--------------------" << endl;
		mainUI.genMainMenu();
		breakline();

		// Test function askStudentName()
		cout << "Ask student name" << endl;
		cout << "----------------" << endl;
		askStudentName_output = mainUI.askStudentName();
		cout << "The student name entered was: " << askStudentName_output << endl;
		breakline();

		// Test function askLevel()
		cout << "Asking the level of the questions" << endl;
		cout << "---------------------------------" << endl;
		mainUI.askLevel();
		breakline();

		// Test function askOperation()
		cout << "Asking the operation" << endl;
		cout << "--------------------" << endl;
		mainUI.askOperation();
		breakline();

		// Test function askQuestion()
		cout << "Asking a question the first time" << endl;
		cout << "--------------------------------" << endl;
		mainUI.askQuestion(10, 5, 2, false);
		breakline();

		// Test function AskQuestion() (again)
		cout << "Asking a question the second time" << endl;
		cout << "---------------------------------" << endl;
		mainUI.askQuestion(10, 5, 2, true);
		breakline();

		// Test function getAnswer()
		cout << "Getting an answer" << endl;
		cout << "-----------------" << endl;
		getAnswer_output = mainUI.getAnswer();
		cout << "The answer entered was: " << getAnswer_output << endl;
		breakline();

		// Test function echoStudentScores()
		cout << "Outputting student scores" << endl;
		cout << "-------------------------" << endl;
		mainUI.echoStudentScores(testProgress);
		breakline();

		// Test function answerEchoResult() (true)
		cout << "Student answered question right" << endl;
		cout << "-------------------------------" << endl;
		mainUI.answerEchoResult(true);
		breakline();

		// Test function answerEchoResult() (false)
		cout << "Student answered question wrong" << endl;
		cout << "-------------------------------" << endl;
		mainUI.answerEchoResult(false);
		breakline();

		// Test function answerChoiceNotValid()
		cout << "Student's choice is invalid" << endl;
		cout << "---------------------------" << endl;
		mainUI.answerChoiceNotVaild();
		breakline();
	}
	catch (...) {
		// If it breaks, tests failed
		tempReturn = false;
	}

	// Return whether we succeeded
	return tempReturn;
}

bool test_ui::executeTests (){
	// API to allow the running of tests
	bool tempReturn = true;     // Whether the tests succeeded
	tempReturn = testOutputs(); // Execute the test
	return tempReturn;          // Return whether it worked
}