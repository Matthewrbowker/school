#ifndef QUESTION_H
#define QUESTION_H

#endif // QUESTION_H

class question {
	int answer;
	int level;
	int randomNumber();
public:
	void generateQuestion();
	bool checkAnswer(int);
	bool setLevel(int);
};

int question::randomNumber() {
	// Generate a random number based on the level
	return 0;
}

void question::generateQuestion() {
	// generate two random numbers using randomNumber()
	// Output the question
	int first;
	int second;

	first = randomNumber();
	second = randomNumber();

	if (second > first) {
		answer = second/first;
	}

	// Division: (first*second)/second <-- ensure ints;
}

bool question::checkAnswer(int guess) {
	// compare the guess with the answer stored in the function
	// return boolean depending on if the answer is right or wrong
	return false;
}

bool question::setLevel(int tempLevel) {
	// Change the user level, used by randomNumber
	return true;
}