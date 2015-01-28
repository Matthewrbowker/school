using namespace std;

class question {
	private:
		int randomNumber(bool, bool, int);
		int generateAnswer();
		int numOne;
		int numTwo;
		int answer;
		int level;
		int op;
		bool useTempOp;
		int tempOp;
		int prevNumOne;
		int prevNumTwo;
	public:
		question();
		void generateQuestion();
		bool checkAnswer(int);
		void setLevel(int);
		void setOp(int);
		int getOp();
		int getNumOne();
		int getNumTwo();

};

int question::randomNumber(bool randOp = false, bool division = false, int part = 0) {
	// Wrapper for the random function, allows the
	// creation of requirement-fitting random numbers
	// Requirements: 110, 260, 270, 290, 300

	int bottomValue;
	int topValue;

	if (randOp) {
		bottomValue = 1;
		topValue = 4;
	}
	else if (division) {
		if (part == 1) {
			if (level == 2 || level == 3) {
				topValue = 99;
				bottomValue = 1;
			}
			else {
				topValue = 9;
				bottomValue = 1;
			}
		}
		else if (part == 2) {
			if (level == 3) {
				topValue = 99;
				bottomValue = 1;
			}
			else {
				topValue = 9;
				bottomValue = 1;
			}
		}
		else {
			topValue = 9;
			bottomValue = 1;
		}
	}
	else {
		switch (level) {
		case 1:
			bottomValue = 1;
			topValue = 9;
			break;
		case 2:
			bottomValue = 1;
			topValue = 99;
			break;
		case 3:
			bottomValue = 1;
			topValue = 999;
			break;
		default:
			bottomValue = 1;
			topValue = 1;
			break;
		}
	}

	return bottomValue + (rand() % topValue);
	
}

int question::generateAnswer() {
	int localOp;                 // Temporary storage of the operator

	if (useTempOp) {
		localOp = tempOp;
	}
	else {
		localOp = op;
	}

	switch (localOp) {
	case 1:
		return numOne + numTwo;
		break;
	case 2:
		return numOne - numTwo;
		break;
	case 3:
		return numOne * numTwo;
		break;
	case 4:
		return numOne / numTwo;
		break;
	default:
		return 0;
		break;
	}
}

question::question() {
	srand(time(NULL));
}

void question::generateQuestion() {
	// Generates a new question for the student to work on
	// Requrements: 120, 200, 260, 280
	int tempNumOne;                       // Temporarily generated number 1
	int tempNumTwo;                       // Temporarily generated number 2
	int localOp = randomNumber(true);     // Random operator, used if op == 5
	
	// Division checking and generating our initial set of numbers
	if (op == 4) {
		tempNumOne = randomNumber(false, true, 1);
		tempNumTwo = randomNumber(false, true, 2);
	}
	else if (op == 5 && localOp == 4) {
		tempNumOne = randomNumber(false, true, 1);
		tempNumTwo = randomNumber(false, true, 2);
	}
	else {
		tempNumOne = randomNumber();
		tempNumTwo = randomNumber();
	}

	// If the first number matches a previous number, generate a new one
	while (tempNumOne == prevNumOne || tempNumOne == prevNumTwo) {
		if (op == 4) {
			tempNumOne = randomNumber(false, true, 1);
		}
		else if (op == 5 && localOp == 4) {
			tempNumOne = randomNumber(false, true, 1);
		}
		else {
			tempNumOne = randomNumber();
		}
	}

	// If the second number matches a previous number, generate a new one
	while (tempNumTwo == prevNumTwo || tempNumTwo == prevNumOne) {
		if (op == 4) {
			tempNumTwo = randomNumber(false, true, 2);
		}
		else if (op == 5 && localOp == 4) {
			tempNumTwo = randomNumber(false, true, 2);
		}
		else {
			tempNumTwo = randomNumber();
		}
	}

	// If the two numbers match, generate a new one for the second number
	while (tempNumOne == tempNumTwo) {
		tempNumTwo = randomNumber();
		while (tempNumOne == prevNumOne || tempNumOne == prevNumTwo) {
			if (op == 4) {
				tempNumTwo = randomNumber(false, true, 2);
			}
			else if (op == 5 && localOp == 4) {
				tempNumOne = randomNumber(false, true, 2);
			}
			else {
				tempNumTwo = randomNumber();
			}
		}
		while (tempNumTwo == prevNumTwo || tempNumTwo == prevNumOne) {
			if (op == 4) {
				tempNumTwo = randomNumber(false, true, 2);
			}
			else if (op == 5 && localOp == 4) {
				tempNumTwo = randomNumber(false, true, 2);
			}
			else {
				tempNumTwo = randomNumber();
			}
		}
	}

	// Checking to see which number is on top
	if (tempNumOne < tempNumTwo) {
		numOne = tempNumTwo;
		numTwo = tempNumOne;
	}
	else {
		numOne = tempNumOne;
		numTwo = tempNumTwo;
	}

	// Save the variables, set a flag if we're using a temporary operator
	if (op != 5) {
		useTempOp = false;
		if (op == 4) {
			numOne = numOne * numTwo;
		}
		answer = generateAnswer();
		tempOp = op;
	}
	else {
		useTempOp = true;
		tempOp = localOp;
		if (localOp == 4) {
			numOne = numOne * numTwo;
		}
		answer = generateAnswer();
		op = 5;
	}

	// store the previous variables for later use
	prevNumOne = numOne;
	prevNumTwo = numTwo;
}

bool question::checkAnswer(int testValue) {
	// Checks the answer against the currently stored
	// question
	// Requrements: 140, 190
	return testValue == answer;
}

void question::setLevel(int tempLevel) {
	// Changes the level of the questions generated
	// Requrements: 260, 270, 300
	level = tempLevel;
}

void question::setOp(int localOp) {
	// Changes the operator used
	// Requrements: N/A
	op = localOp;
}

int question::getOp() {
	// Returns the operator used for generating the question
	// Includes checking to see if we're using a temporarily stored op
	// Requriements: N/a
	if (useTempOp) {
		return tempOp;
	}
	else {
		return op;
	}
}

int question::getNumOne() {
	// Returns the first number of the question
	// Requirements: 110
	return numOne;
}

int question::getNumTwo() {
	// Returns the second number of the question
	// Requirements: 110
	return numTwo; 
}