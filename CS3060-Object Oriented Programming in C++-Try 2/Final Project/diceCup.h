// FILE: diceCup.h
// AUTHOR: Matthew Bowker
// COURSE: CS3060-001 FINAL PROJECT

using namespace std;
using namespace std;

class diceCup {
private:
	dice dice1;               // Dice object of the first dice
	dice dice2;               // Dice object of the second dice
	dice dice3;               // Dice object of the third dice
	dice dice4;               // Dice object of the fourth dice
	dice dice5;               // Dice object of the fifth dice
	int serializeDice(int[]);
public:
	diceCup();
	void changeDice(int);
	void reroll(bool, bool, bool, bool, bool);
	int returnDice();
};

int diceCup::serializeDice(int diceVals[]) {
	// Convert an array into an integer for passing to the GUI object
	// Input: Integer Array
	// Output: Integer

	int retVal = 0;  // The value we're returning

	// Set the values properly
	retVal += (diceVals[0] * 10000);
	retVal += (diceVals[1] * 1000);
	retVal += (diceVals[2] * 100);
	retVal += (diceVals[3] * 10);
	retVal += (diceVals[4]);

	// Actually return the value	
	return retVal;
}

diceCup::diceCup() {
	// Initialize the diceCup Object
	// Input: None
	// Output: Dice Object

	// Seed the random function
	srand(time(NULL));

	// Give all of our dice an initial value
	reroll(true, true, true, true, true);
}

void diceCup::changeDice(int diceNum) {
	// Helper method to change a dice value

	// Generate a random value
	int random = 1 + rand() % 6;
	
	// Select the dice we have to change, and actually change it.
	switch (diceNum) {
	case 1:
		dice1.setVal(random);
		break;
	case 2:
		dice2.setVal(random);
		break;
	case 3:
		dice3.setVal(random);
		break;
	case 4:
		dice4.setVal(random);
		break;
	case 5:
		dice5.setVal(random);
		break;
	default:
		// Do nothing
		break;
	}
}

void diceCup::reroll(bool reroll1 = true, bool reroll2 = true, 
	bool reroll3 = true, bool reroll4 = true, bool reroll5 = true) {
	// Method to reroll dice
	// Input: 5 boolians as to which dice we reroll
	// Output: None

	if (reroll1) {
		// Reroll dice 1
		changeDice(1);
	}
	if (reroll2) {
		// Reroll dice 2
		changeDice(2);
	}
	if (reroll3) {
		// Reroll dice 3
		changeDice(3);
	}
	if (reroll4) {
		// Reroll dice 4
		changeDice(4);
	}
	if (reroll5) {
		// Reroll dice 5
		changeDice(5);
	}
}

int diceCup::returnDice() {
	// Passes the dice to ther fuctions
	// Input: None
	// Output: Serialized integer

	// Create an array
	int diceVals[] = { dice1.getVal(), dice2.getVal(), dice3.getVal(),
		dice4.getVal(), dice5.getVal() };

	// Serialize the array and return
	return serializeDice(diceVals);
}