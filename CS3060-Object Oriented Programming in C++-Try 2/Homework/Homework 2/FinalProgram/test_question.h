using namespace std;

class test_question {
private:
	question mainQuestion;                 // Test instace of the Question obj
	bool test_function_generateQuestion(); // Test function 1
	bool test_function_getAnswer();        // Test function 2
	const string TAB = "     ";            // Constant to help align output
public:
	bool executeTests();                   // External API to run the tests
};

bool test_question::test_function_generateQuestion() {
	// Function generates 10 questions at each level of the program, 
	// checks them against the given parameters, and then repeats.

	// Functions tested: generateQuestion(), getNumOne(), getNumTwo()
	bool returnValue = true; // Whether the test succeeded
	int level = 1;           // Starting level
	int prevNumOne = 0;      // The first number from the previous problem
	int numOne = 0;          // The first number from the current problem
	int prevNumTwo = 0;      // The second number from the previous problem
	int numTwo = 0;          // The second number from the current problem


	while (level <= 3) {
		// Testing each level individually using this loop

		// Output the level so we know which one we're doing
		cout << "Level " << level << ": " << endl;

		// Set the level in our test class
		mainQuestion.setLevel(level);

		for (int i = 0; i < 10; i++) {
			// Loop to generate ten questions to test

			// Generate the question then output the count
			mainQuestion.generateQuestion();
			cout << "Question " << i + 1 << " Generated." << endl;

			// Retrieve the stored values
			numOne = mainQuestion.getNumOne();
			numTwo = mainQuestion.getNumTwo();

			// Compare the stored values against my three comparison tests.
			// If one fails, it sets returnValue to false
			if (prevNumOne == numOne) {
				cout << TAB;
				cout << "Two numbers were generated in a row for the first "
					<< "number. The numbers " << numOne << " and " 
					<< prevNumOne << " matched. " << endl;
				returnValue = false;
			}
			else if (prevNumTwo == numTwo) {
				cout << TAB;
				cout << "Two numbers were generated in a row for the second"
					<< " number. The numbers " << numTwo << " and " 
					<< prevNumTwo << " matched. " << endl;
				returnValue = false;
			}

			if (numOne == numTwo) {
				cout << TAB;
				cout << "The two numbers matched: "
					<< numOne << " and " << numTwo << "." << endl;
				cout << endl;
				returnValue = false;
			}

			// Store the numbers for the next test.
			prevNumOne = numOne;
			prevNumTwo = numTwo;
		}

		// Increment the level counter
		level++;
	}

	// Return the success condition
	return returnValue;
}

bool test_question::test_function_getAnswer() {
	// Function generates 10 questions at each level of the program, 
	// Answers them, then checks the answers with the ones stored in the class

	// Functions tested: generateQuestion(), getNumOne(), getNumTwo(), 
	// setLevel(), setOp(), getOp(), checkAnswer()

	bool returnValue = true; // Bool to store if the test passed
	int numOne;              // Storage variable for the fist number
	int numTwo;              // Storage variable for the second number
	int level = 1;           // Level of the problem.  Starting at 1
	int tempAnswer;          // The answer this function generates
	int tempRemainder;       // A remainder for divison problems
	int op;                  // Integer representation of the operator
	string opVisual;         // Visual representation of the operator

	// Setting the intial level so this first generateQuestion function
	// doesn't die a horrible death
	mainQuestion.setLevel(level);

	// Generate our first question
	mainQuestion.generateQuestion();

	for (op = 1; op <= 5; op++) {
		// Loop through each operator, setting it then testing it.
		mainQuestion.setOp(op);

		for (level = 1; level <= 3; level++) {
			// Loop through all the levels for each operator

			// Output which level we're on
			cout << "Level " << level << ":";

			// Set the level for the test class
			mainQuestion.setLevel(level);

			// Generate our question
			mainQuestion.generateQuestion();

			// Retrieve the numbers from the class
			numOne = mainQuestion.getNumOne();
			numTwo = mainQuestion.getNumTwo();

			// Generate a local answer to comapre against
			switch (op) {
			case 1:
				tempAnswer = numOne + numTwo;
				opVisual = " + ";
				break;
			case 2:
				tempAnswer = numOne - numTwo;
				opVisual = " - ";
				break;
			case 3:
				tempAnswer = numOne * numTwo;
				opVisual = " * ";
				break;
			case 4:
				tempAnswer = numOne / numTwo;
				tempRemainder = numOne % numTwo;
				opVisual = " / ";
				break;
			case 5:
				switch (mainQuestion.getOp()) {
				case 1:
					tempAnswer = numOne + numTwo;
					opVisual = " + ";
					break;
				case 2:
					tempAnswer = numOne - numTwo;
					opVisual = " - ";
					break;
				case 3:
					tempAnswer = numOne * numTwo;
					opVisual = " * ";
					break;
				case 4:
					tempAnswer = numOne / numTwo;
					tempRemainder = numOne % numTwo;
					opVisual = " / ";
					break;
				}
			}

			// If the operation is division, check for a remainder
			// then output to the screen
			if (mainQuestion.getOp() == 4) {
				cout << numOne << opVisual << numTwo << " = " << tempAnswer
					<< " (Remainder " << tempRemainder << ")";
			}
			else {
				cout << numOne << opVisual << numTwo << " = " << tempAnswer;
			}

			// If the stored answer matches the class' answer, succeed
			// Else set the success condition to false
			if (mainQuestion.checkAnswer(tempAnswer)) {
				cout << " --- Matches!" << endl;
			}
			else {
				cout << " --- Does not Match :(" << endl;
				returnValue = false;
			}

		}
	}

	// Return the success condition
	return returnValue;
}

bool test_question::executeTests() {
	bool returnValue = true; // Whether the tests succeeded

	// Output a header so we know what's going on.
	cout << "test_function_generateQuestion" << endl;
	cout << "------------------------------" << endl;

	// Execute the generateQuestion test
	// If it fails set the success flag to false
	if (test_function_generateQuestion() == false) {
		returnValue = false;
	}

	// Some blank lines, yay!
	cout << endl;
	cout << endl;

	// Another heading
	cout << "test_function_getAnswer" << endl;
	cout << "-----------------------" << endl;

	// Execute the getAnswer test
	// If it fails, set the success flag to false
	if (test_function_getAnswer() == false) {
		returnValue = false;
	}

	// Return whether the function succeeded
	return returnValue;
}