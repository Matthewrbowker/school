#ifndef PROGRESS_H
#define PROGRESS_H

#endif // PROGRESS_H

class progress {
	int numTrue;
	int numFalse;
	int numQuestions;
public:
	progress();
	void answerTrue();
	void answerFalse();
	void generateStats();
	void resetStats();

};

progress::progress() {
	// Constructor - sets variables
	numQuestions = 0;
	numTrue = 0;
	numFalse = 0;
}

void progress::answerTrue() {
	// Function run if an answer is done correctly, increments the true counter
	this->numTrue++;
}

void progress::answerFalse() {
	// Function run if an answer is done incoreectly, increments the false counter
	this->numFalse++;
}

void progress::generateStats() {
	// Prints the statistics to the screen
}

void progress::resetStats() {
	// Resets the stats
}