using namespace std;

class progress {
private:
	bool active;         // Whether this class is active
	int numTrue;         // Number of true answers
	int numFalse;        // Number of false answers
	string studentName;  // Student's name
public:
	progress();
	void answerTrue();
	void answerFalse();
	void resetStats();
	int getNumTrue();
	int getNumFalse();
	string getStudentName();
	void setStudentName(string);
	bool getActive();
	void activate();
};

progress::progress() {
	// Constructor: Sets the variables
	// Requrements: N/A
	numTrue = 0;
	numFalse = 0;
	studentName = "";
	active = false;
}
void progress::answerTrue() {
	// Increments the internal true counter
	// Requrements: 210
	numTrue++;
}

void progress::answerFalse() {
	// Increments the internal false counter
	// Requrements: 190, 210
	numFalse++;
}

void progress::resetStats(){
	// Reset the stats for the new user
	// Requrements: 250, 330
	numTrue = 0;
	numFalse = 0;
	studentName = "";
	
}

int progress::getNumTrue(){
	// Returns the number of answers that the user has
	// answered right
	// Requirements: 220, 340
	return numTrue;
}
int progress::getNumFalse() {
	// Returns the number of answers that the user has
	// answered wrong
	// Requirements: 220, 340
	return numFalse;
}

string progress::getStudentName() {
	// Returns the student's name
	// Requirements: N/A
	return studentName;
}

void progress::setStudentName(string tempName) {
	// Sets the student's name
	// Requirements: N/A
	studentName = tempName;
}

bool progress::getActive() {
	// Returns whether the class is active
	// Requriements: N/A
	return active;
}

void progress::activate() {
	// Activates this class, should be called after values are set
	// Requirements: N/A
	active = true;
}