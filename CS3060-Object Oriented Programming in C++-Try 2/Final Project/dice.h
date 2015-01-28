// FILE: dice.h
// AUTHOR: Matthew Bowker
// COURSE: CS3060-001 FINAL PROJECT

using namespace std;
using namespace std;

class dice {
private:
	int val;        // The value of the dice
public:
	dice();
	int getVal();
	void setVal(int);
};

dice::dice() {
	// Setting the value of the dice for the first time
	// Input: None
	// Output: Dice object
	val = 0;
}

int dice::getVal() {
	// Accessor for getting the dice value
	// Input: None
	// Output: Integer
	return val;
}

void dice::setVal(int tempVal) {
	// Mutator for setting the dice value
	// Input: Int
	// Output: None
	val = tempVal;
}