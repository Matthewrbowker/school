using namespace std;

class ui {
private:
	void errorMessage(string);
public:
	const string SCHOOLNAME = "University of Colorado Colorado Springs";
	const string TAB = "     ";
	void genHeader();
	void genMainMenu();
	void clearConsole();
	string askStudentName();
	int askOperation();
	int askLevel();
	void askQuestion(int, int, int, bool);
	int getAnswer();
	void echoStudentScores(progress); // progress[] & );
	void answerEchoResult(bool);
	void answerChoiceNotVaild();
};

void ui::errorMessage(string message) {
	// Helper function that allows us to produce consistant error messages
	// Requirements: N/A
	cout << "An error has occured in the program." << endl;
	cout << "The error condition reported: " << message << endl;
	cout << "You can try that action again, but you may get the same result :(";
	cout << endl;
	cout << endl;
}

void ui::genHeader() {
	// Generates a welcome and instructions for the
	// user
	// Requirements: N/A

	cout << "Welcome to the Computer Aided Instruction System" << endl;
	cout << "This software licensed to: " << SCHOOLNAME << endl;
	cout << endl;
	cout << endl;
}
void ui::genMainMenu() {
	// Generates the main menu
	// Requirements: N/A
	cout << "Please enter your menu choice: " << endl;
	cout << TAB << "1 - Answer questions" << endl;
	cout << TAB << "2 - View Student scores" << endl;
	cout << TAB << "0 - exit" << endl;
}

void ui::clearConsole() {
	// Clears the console using a while loop and endl
	// Requirements: N/A
	for (int i = 0; i < 80; i++) {
		cout << endl;
	}
}
string ui::askStudentName() {
	// Asks for the student’s name and returns it in the
	// form “<first name> <last name>”
	// Requirements: 330
	string first; // First Name
	string last;  // Last Name

	// Ask for the names
	cout << "Please enter your first name: ";
	cin >> first;
	cout << "Please enter your last name: ";
	cin >> last;

	// Combine and return
	return first + " " + last;
}

int ui::askOperation() {
	// Asks which operation the student would like to do
	// Reuqirements: N/A
	int tempAnswer; // The answer given by the user

	// Output the options to the screen
	cout << "Please enter the operation you would like to do:" << endl;
	cout << TAB << "1 - Addition" << endl;;
	cout << TAB << "2 - Subtraction" << endl;
	cout << TAB << "3 - Multiplication" << endl;
	cout << TAB << "4 - Division" << endl;
	cout << TAB << "5 - A mixture of all four" << endl;

	// Get the user's answer
	tempAnswer =  getAnswer();

	// Some error checking
	while (tempAnswer < 1 || tempAnswer > 5) {
		errorMessage("That is an invalid menu choice.");
		tempAnswer = getAnswer();
	}

	// Return the user's choice
	return tempAnswer;
}

int ui::askLevel() {
	// Asks the user which level the want to do

	int tempAnswer; // The answer give by the user

	// Output the option to the screen
	cout << "Please enter which level you would like to try (1-3)" << endl;

	// Get the user's answer
	tempAnswer = getAnswer();

	// Some error checking
	while (tempAnswer < 1 || tempAnswer > 3) {
		errorMessage("That is an invalid menu choice.");
		tempAnswer = getAnswer();
	}

	// Return their choice
	return tempAnswer;
}

void ui::askQuestion(int numOne, int numTwo, int op, bool secondTry = false) {
	// Asks the student a question
	// Inputs: first number, second number, second attempt
	// Requirements: 120
	string textOperator; // A textual representation of the operator

	// Populate the textOperator field
	switch (op) {
	case 1:
		textOperator = " + ";
		break;
	case 2:
		textOperator = " - ";
		break;
	case 3:
		textOperator = " * ";
		break;
	case 4:
		textOperator = " / ";
		break;
	default:
		textOperator = " ? ";
		break;
	}

	// If this is the user's second try, output a notation to that effect
	if (secondTry) {
		cout << "(Second attempt) ";
	}

	// Output the actual problem
	cout << numOne << textOperator << numTwo << " = " << endl;
}


int ui::getAnswer() {
	// Gets the answer from a student using cin
	// Returns the answer given
	// Requirements: 130
	int temp; // The answer given

	cout << "Enter your answer: ";

	cin >> temp;

	return temp;
}
void ui::echoStudentScores(progress studentProgress) {
	// Outputs the student scores from each item of the
	// array to the screen
	// Requirements: 220, 230, 240, 330, 340
	cout << "Displaying scores for: " << studentProgress.getStudentName() << endl;
	cout << "Number correct: " << studentProgress.getNumTrue() << endl;
	cout << "Number wrong: " << studentProgress.getNumFalse() << endl;

	// Let the user know if they're ready to go on to the next level
	if ((studentProgress.getNumTrue() / 
		(studentProgress.getNumTrue() + studentProgress.getNumFalse())) 
		> 75 / 100) {
		cout << studentProgress.getStudentName() << " is ready to go on to the"
			<< " next level" << endl;
	}
	
	// new line, for luck
	cout << endl;
}
void ui::answerEchoResult(bool resultStatus) {
	// Outputs the text indicating the result to the user
	// Input: Whether the answer is true or false
	// Requirements: 150, 160, 170, 180
	int number;

	string right[4] = { "Very good!", "Excellent!", "Nice work!",
	 "Keep up the good work!" }; // Collection of phrases for right
	string wrong[4] = { "No. Please try again!", "Wrong. Try once more.",
	 "Don't give up!", "No. Keep trying." }; // Collection of phrases for wrong

	// Random number for which one to use
	number = rand() % 4;
	
	// Output to the screen
	if (resultStatus) {
		cout << right[number] << endl;
	}
	else {
		cout << wrong[number] << endl;
	}
}


void ui::answerChoiceNotVaild() {
	// Outputs an error message to the user.
	// Requirements: N/A
	errorMessage("That menu choice is not valid ");
}
