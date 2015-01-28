using namespace std;

class test {
private:
	test_question tQuest;                // Temporary testing question object
	test_progress tProg;                 // Temporary testing progres object
	test_ui tUI;                         // Temporary testing UI iobject
	void generateClassHeading(string);
public:
	void executeTests();

};

void test::generateClassHeading(string filename) {
	// Visual element, generates boxed headings for each class
	// Requirements: N/A

	// Get the length of the string, add 4 for the boxes
	int c = filename.length() + 4;

	// Some padding
	cout << endl;
	cout << endl;
	cout << endl;

	// Output the top of the box
	for (int i = 0; i <= c; i++) {
		cout << "-";
	}

	// Output a newline and then the file name with sides
	cout << endl;
	cout << "| " << filename << " |" << endl;

	// Output the bottom of the box
	for (int j = 0; j <= c; j++) {
		cout << "-";
	}

	// One more line break, for luck
	cout << endl;
}

void test::executeTests() {
	bool finalTestStatus_questions = true;  // Whether the question tests passed
	bool finalTestStatus_progress = true;   // Whether the progress tests passed
	bool finalTestStatus_ui = true;         // Whether the ui tests passed

	// Output the mode of the program, to avoid confusion
	cout << "Tests executing..." << endl;

	// Running tests on question.h
	generateClassHeading("question.h");
	finalTestStatus_questions = tQuest.executeTests();

	// Running tests on progress.h
	generateClassHeading("progress.h");
	finalTestStatus_progress = tProg.executeTests();

	// Running tests on ui.h
	generateClassHeading("ui.h");
	finalTestStatus_ui = tUI.executeTests();

	// Output the final test status of question.h
	cout << "Final Test Status (Question class): ";
	if (finalTestStatus_questions) {
		cout << "Succeeded!" << endl;
	}
	else {
		cout << "Failed :(" << endl;
	}

	// Output the final test status of progress.h
	cout << "Final Test Status (Progress class): ";
	if (finalTestStatus_progress) {
		cout << "Succeeded!" << endl;
	}
	else {
		cout << "Failed :(" << endl;
	}

	// Output the final test status of ui.h
	cout << "Final Test Status (UI class): ";
	if (finalTestStatus_ui) {
		cout << "Succeeded!" << endl;
	}
	else {
		cout << "Failed :(" << endl;
	}
}