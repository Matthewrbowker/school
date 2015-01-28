// FILE: scoreCard.h
// AUTHOR: Matthew Bowker
// COURSE: CS3060-001 FINAL PROJECT

using namespace std;

// This is a scorecard object, it's going to hold for players and handle scoring logic.

class scoreCard {
private:
	score games[6]; // An array of six player score objects.

	// Helper array sort methods
	int sortWithoutDup(int, int, int, int, int);
	int sortItems(int, int, int, int, int);

	// Helper score methods
	int scoreAces(int, int, int, int, int);
	int scoreTwos(int, int, int, int, int);
	int scoreThrees(int, int, int, int, int);
	int scoreFours(int, int, int, int, int);
	int scoreFives(int, int, int, int, int);
	int scoreSixes(int, int, int, int, int);
	int scoreThreeKind(int, int, int, int, int);
	int scoreFourKind(int, int, int, int, int);
	int scoreFullHouse(int, int, int, int, int);
	int scoreSmStraight(int, int, int, int, int);
	int scoreLgStraight(int, int, int, int, int);
	int scoreYahtzee(int, int, int, int, int);
	int scoreChance(int, int, int, int, int);

	// Helper zero methods
	bool willZeroAces(int, int, int, int, int);
	bool willZeroTwos(int, int, int, int, int);
	bool willZeroThrees(int, int, int, int, int);
	bool willZeroFours(int, int, int, int, int);
	bool willZeroFives(int, int, int, int, int);
	bool willZeroSixes(int, int, int, int, int);
	bool willZeroThreeKind(int, int, int, int, int);
	bool willZeroFourKind(int, int, int, int, int);
	bool willZeroFullHouse(int, int, int, int, int);
	bool willZeroSmStraight(int, int, int, int, int);
	bool willZeroLgStraight(int, int, int, int, int);
	bool willZeroYahtzee(int, int, int, int, int);
	bool willZeroChance(int, int, int, int, int);
public:
	// Accessors to the score member functions
	bool isZeroed(int, int);
	bool canDo(int, int);
	string getScore(int, int);
	string getUpperScorePre(int);
	string getUpperScore(int);
	string getLowerScore(int);
	string getGrand(int);
	bool bonusApplied(int);

	// Public Access scoring methods
	void doScore(int, int, int, int, int, int, int, bool);
	bool willZero(int, int, int, int, int, int);
	void calculateScore();
};

int scoreCard::sortWithoutDup(int die1, int die2, int die3, int die4, 
	int die5) {
	// Helper method to sort the dice lowest to highest
	// Input: 5 dice integers
	// Output: Integer (condenced dice)

	int pass; // Which pass are we on?
	int i;    // Counter for our for loop
	int hold; // Holding variable so we don't loose the data.

	// Integer holding the dice
	int dice[5] = { die1, die2, die3, die4, die5 };

	for (pass = 1; pass <= 4; pass++) {
		// Pass through, making sure we get every one
		for (i = 0; i <= 3; i++) {
			// Step through checking for duplicates
			if (dice[i] > dice[i + 1])
			{
				// If we find a duplicate, swap the values
				hold = dice[i];
				dice[i] = dice[i + 1];
				dice[i + 1] = hold;
			}
		}
	}

	// Return a condenced version of the dice, as static arrays break stuff.
	return (dice[0] * 10000) + (dice[1] * 1000) + (dice[2] * 100) + 
	(dice[3] * 10) + dice[4];
}

int scoreCard::sortItems(int die1, int die2, int die3, int die4, int die5) {
	// Helper method to sort the dice lowest to highest and bounce duplicates 
	// to the back of the array.
	// Input: 5 dice integers
	// Output: Integer (condenced dice)
	int pass;  // Which pass we're on
	int hold;  // Holding variable
	int count; // loop counter for the removal loop

	// Integer holding the dice
	int dice[5] = { die1, die2, die3, die4, die5 };

	for (pass = 1; pass <= 4; pass++) {
		// Pass through, making sure we get every one
		for (int i = 0; i <= 3; i++) {
			// Step through checking for duplicates
			if (dice[i] > dice[i + 1])
			{
				// If we find a duplicate, swap the values
				hold = dice[i];
				dice[i] = dice[i + 1];
				dice[i + 1] = hold;
			}
		}
	}

	for (int secLoop = 0; secLoop < 4; secLoop++) {
		// Second loop for removing duplicates
		// We're actually going to bounce them to the back so we still have a 
		// valid array.
		if (dice[secLoop] == dice[secLoop + 1]) {
			// If the two values are equal
			// Set a flag where we are
			count = secLoop;
			// Store the value
			hold = dice[secLoop];
			while (count < 4) {
				// Move items up
				dice[count] = dice[count + 1];
				count++;
			}
			// Put the value back
			dice[4] = hold;
		}
	}

	// Return a condenced version of the dice, as static arrays break stuff.
	return (dice[0] * 10000) + (dice[1] * 1000) + (dice[2] * 100) + 
	(dice[3] * 10) + dice[4];
}

int scoreCard::scoreAces(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Aces box
	// Input: 5 dice Integer
	// Output: Integer

	// Temporary holding variable
	int tempVal = 0;

	// Add the values that qualify
	if (die1 == 1) {
		tempVal += die1;
	}
	if (die2 == 1) {
		tempVal += die2;
	}
	if (die3 == 1) {
		tempVal += die3;
	}
	if (die4 == 1) {
		tempVal += die4;
	}
	if (die5 == 1) {
		tempVal += die5;
	}

	// Return the calculated value
	return tempVal;
}

int scoreCard::scoreTwos(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Twos box
	// Input: 5 dice Integer
	// Output: Integer

	// Temporary holding variable
	int tempVal = 0;

	// Add the values that qualify
	int tempVal = 0;

	if (die1 == 2) {
		tempVal += die1;
	}
	if (die2 == 2) {
		tempVal += die2;
	}
	if (die3 == 2) {
		tempVal += die3;
	}
	if (die4 == 2) {
		tempVal += die4;
	}
	if (die5 == 2) {
		tempVal += die5;
	}

	// Return the calculated value
	return tempVal;
}

int scoreCard::scoreThrees(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Threes box
	// Input: 5 dice Integer
	// Output: Integer

	// Temporary holding variable
	int tempVal = 0;

	// Add the values that qualify
	if (die1 == 3) {
		tempVal += die1;
	}
	if (die2 == 3) {
		tempVal += die2;
	}
	if (die3 == 3) {
		tempVal += die3;
	}
	if (die4 == 3) {
		tempVal += die4;
	}
	if (die5 == 3) {
		tempVal += die5;
	}

	// Return the calculated value
	return tempVal;
}

int scoreCard::scoreFours(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Fours box
	// Input: 5 dice Integer
	// Output: Integer

	// Temporary holding variable
	int tempVal = 0;

	// Add the values that qualify
	int tempVal = 0;

	if (die1 == 4) {
		tempVal += die1;
	}
	if (die2 == 4) {
		tempVal += die2;
	}
	if (die3 == 4) {
		tempVal += die3;
	}
	if (die4 == 4) {
		tempVal += die4;
	}
	if (die5 == 4) {
		tempVal += die5;
	}

	// Return the calculated value
	return tempVal;
}

int scoreCard::scoreFives(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Fives box
	// Input: 5 dice Integer
	// Output: Integer

	// Temporary holding variable
	int tempVal = 0;

	// Add the values that qualify
	int tempVal = 0;

	if (die1 == 5) {
		tempVal += die1;
	}
	if (die2 == 5) {
		tempVal += die2;
	}
	if (die3 == 5) {
		tempVal += die3;
	}
	if (die4 == 5) {
		tempVal += die4;
	}
	if (die5 == 5) {
		tempVal += die5;
	}

	// Return the caluclated value
	return tempVal;
}

int scoreCard::scoreSixes(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Sixes box
	// Input: 5 dice Integer
	// Output: Integer

	// Temporary holding variable
	int tempVal = 0;

	// Add the values that qualify
	int tempVal = 0;

	if (die1 == 6) {
		tempVal += die1;
	}
	if (die2 == 6) {
		tempVal += die2;
	}
	if (die3 == 6) {
		tempVal += die3;
	}
	if (die4 == 6) {
		tempVal += die4;
	}
	if (die5 == 6) {
		tempVal += die5;
	}

	// Return the calculated value
	return tempVal;
}

int scoreCard::scoreThreeKind(int die1, int die2, int die3, int die4, 
	int die5) {
	//Method to properly score the Three of a Kind box
	// Input: 5 dice Integer
	// Output: Integer

	// Add the values and return
	return die1 + die2 + die3 + die4 + die5;
}

int scoreCard::scoreFourKind(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Four of a Kind box
	// Input: 5 dice Integer
	// Output: Integer

	// Add the values and return
	return die1 + die2 + die3 + die4 + die5;
}

int scoreCard::scoreFullHouse(int die1, int die2, int die3, int die4, 
	int die5) {
	//Method to properly score the Full House box
	// Input: 5 dice Integer
	// Output: Integer

	// Return the correct value
	return 25;
}

int scoreCard::scoreSmStraight(int die1, int die2, int die3, int die4, 
	int die5) {
	//Method to properly score the Small Straight box
	// Input: 5 dice Integer
	// Output: Integer

	// Return the correct value
	return 30;
}

int scoreCard::scoreLgStraight(int die1, int die2, int die3, int die4, i
	nt die5) {
	//Method to properly score the Large Straight box
	// Input: 5 dice Integer
	// Output: Integer

	// Return the correct value
	return 40;
}

int scoreCard::scoreYahtzee(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Yahtzee box
	// Input: 5 dice Integer
	// Output: Integer

	// Return the correct value
	return 50;
}

int scoreCard::scoreChance(int die1, int die2, int die3, int die4, int die5) {
	//Method to properly score the Chance box
	// Input: 5 dice Integer
	// Output: Integer

	// Return the correct value
	return die1 + die2 + die3 + die4 + die5;
}


bool scoreCard::willZeroAces(int die1, int die2, int die3, int die4, int die5) {
	// Method to calculate whether the Aces box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Holding variable
	bool retVal = true;
	
	if ((die1 == 1) || (die2 == 1) || (die3 == 1) || (die4 == 1) || 
		(die5 == 1)) {
		// Change the variable if one of the dice is an ace
		retVal = false;
	}

	// Return the calclulated value
	return retVal;
}

bool scoreCard::willZeroTwos(int die1, int die2, int die3, int die4, int die5) {
	// Method to calculate whether the Twos box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Holding variable
	bool retVal = true;

	if ((die1 == 2) || (die2 == 2) || (die3 == 2) || (die4 == 2) || 
		(die5 == 2)) {
		// Change the variable if one of the dice is a two
		retVal = false;
	}

	// Return the calclulated value
	return retVal;
}

bool scoreCard::willZeroThrees(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Threes box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Holding variable
	bool retVal = true;

	if ((die1 == 3) || (die2 == 3) || (die3 == 3) || (die4 == 3) || 
		(die5 == 3)) {
		// Change the variable if one of the dice is a three
		retVal = false;
	}

	// Return the calculated value
	return retVal;
}

bool scoreCard::willZeroFours(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Fours box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Holding variable
	bool retVal = true;

	if ((die1 == 4) || (die2 == 4) || (die3 == 4) || (die4 == 4) || 
		(die5 == 4)) {
		// Change the variable if one of the dice is a Four
		retVal = false;
	}

	// Return the calculated value
	return retVal;
}

bool scoreCard::willZeroFives(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Fives box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Holding variable
	bool retVal = true;

	if ((die1 == 5) || (die2 == 5) || (die3 == 5) || (die4 == 5) || 
		(die5 == 5)) {
		// Change the variable if one of the dice is a Five
		retVal = false;
	}

	// Return the calculated value
	return retVal;
}

bool scoreCard::willZeroSixes(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Sixes box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Holding variable
	bool retVal = true;

	if ((die1 == 6) || (die2 == 6) || (die3 == 6) || (die4 == 6) || 
		(die5 == 6)) {
		// Change the variable if one of the dice is a Six
		retVal = false;
	}

	// Return the calculated value
	return retVal;
}

bool scoreCard::willZeroThreeKind(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Three of a Kind box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Start by sorting the dice
	int diceVal = sortWithoutDup(die1, die2, die3, die4, die5);

	// Serialize the dice
	int diceOne;
	int diceTwo;
	int diceThree;
	int diceFour;

	diceOne = diceVal / 10000;
	diceVal = diceVal % 10000;
	diceTwo = diceVal / 1000;
	diceVal = diceVal % 1000;
	diceThree = diceVal / 100;
	diceVal = diceVal % 100;
	diceFour = diceVal / 10;
	diceVal = diceVal % 10;

	// Check for the right conditions and return
	if (diceOne == diceTwo && diceTwo == diceThree) {
		return false;
	}
	else if (diceTwo == diceThree && diceThree == diceFour) {
		return false;
	}
	else if (diceThree == diceFour && diceFour == diceVal) {
		return false;
	}
	else return true;
}

bool scoreCard::willZeroFourKind(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Four of a Kind box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Start by sorting the dice
	int diceVal = sortWithoutDup(die1, die2, die3, die4, die5);

	// Serialize the dice
	int diceOne;
	int diceTwo;
	int diceThree;
	int diceFour;

	diceOne = diceVal / 10000;
	diceVal = diceVal % 10000;
	diceTwo = diceVal / 1000;
	diceVal = diceVal % 1000;
	diceThree = diceVal / 100;
	diceVal = diceVal % 100;
	diceFour = diceVal / 10;
	diceVal = diceVal % 10;

	// Check for the right conditions and return
	if (diceOne == diceTwo && diceTwo == diceThree && diceThree == diceFour) {
		return false;
	}
	else if (diceTwo == diceThree && diceThree == diceFour && diceFour==diceVal) {
		return false;
	}
	else return true;
}

bool scoreCard::willZeroFullHouse(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Full House box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Start by sorting the dice
	int diceVal = sortWithoutDup(die1, die2, die3, die4, die5);

	// Serialize the dice
	int diceOne;
	int diceTwo;
	int diceThree;
	int diceFour;

	diceOne = diceVal / 10000;
	diceVal = diceVal % 10000;
	diceTwo = diceVal / 1000;
	diceVal = diceVal % 1000;
	diceThree = diceVal / 100;
	diceVal = diceVal % 100;
	diceFour = diceVal / 10;
	diceVal = diceVal % 10;

	// Check for the right conditions and return
	if (diceOne == diceTwo && diceTwo == diceThree &&diceFour == diceVal) {
		return false;
	}
	else if (diceOne == diceTwo && diceThree == diceFour &&diceFour == diceVal) {
		return false;
	}
	else return true;
}

bool scoreCard::willZeroSmStraight(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Small Straight box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Start by sorting the dice
	int diceVal = sortItems(die1, die2, die3, die4, die5);

	// Serialize the dice
	int diceOne;
	int diceTwo;
	int diceThree;
	int diceFour;

	diceOne = diceVal / 10000;
	diceVal = diceVal % 10000;
	diceTwo = diceVal / 1000;
	diceVal = diceVal % 1000;
	diceThree = diceVal / 100;
	diceVal = diceVal % 100;
	diceFour = diceVal / 10;
	diceVal = diceVal % 10;

	// Check for the right conditions and return
	if (diceOne == 1 && diceTwo == 2 && diceThree == 3 && diceFour == 4) {
		return false;
	}

	else if (diceOne == 2 && diceTwo == 3 && diceThree == 4 && diceFour == 5) {
		return false;
	}

	else if (diceOne == 3 && diceTwo == 4 && diceThree == 5 && diceFour == 6) {
		return false;
	}
	else {
		return true;
	}
}

bool scoreCard::willZeroLgStraight(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Large Straight box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Start by sorting the dice
	int diceVal = sortItems(die1, die2, die3, die4, die5);

	// Serialize the dice
	int diceOne;
	int diceTwo;
	int diceThree;
	int diceFour;

	diceOne = diceVal / 10000;
	diceVal = diceVal % 10000;
	diceTwo = diceVal / 1000;
	diceVal = diceVal % 1000;
	diceThree = diceVal / 100;
	diceVal = diceVal % 100;
	diceFour = diceVal / 10;
	diceVal = diceVal % 10;

	// Check for the right conditions and return
	if (diceOne == 1 && diceTwo == 2 && diceThree == 3 && 
		diceFour == 4 && diceVal == 5) {
		return false;
	}

	else if (diceOne == 2 && diceTwo == 3 && diceThree == 4 && 
		diceFour == 5 && diceVal == 6) {
		return false;
	}
	else {
		return true;
	}
}

bool scoreCard::willZeroYahtzee(int die1, int die2, int die3, int die4, 
	int die5) {
	// Method to calculate whether the Yahtzee box will zero
	// Input: 5 dice integer
	// Output: Bool

	// Check for the right conditions and return
	if ((die1 == die2) && (die2 == die3) && (die3 == die4) && (die4 == die5)) { 
		return false; 
	}
	else return true;
}

bool scoreCard::willZeroChance(int die1, int die2, int die3, int die4, int die5) {
	// Method to calculate whether the Chance box will zero
	// Input: 5 dice integer
	// Output: Bool

	// This method only exists because it would have bugged me otherwise.

	//Chance will never ZERO!!!!! Aaaaaaah!
	return false;
}

bool scoreCard::isZeroed(int player, int box) {
	// Passthrough method to check if a box is zeroed on a particular scorecard
	// Input: two integers
	// Output: bool

	// Run the method
	return games[player - 1].isZeroed(box);
}

bool scoreCard::canDo(int player, int box) {
	// Passthrough method to check if a box can be usedon a particular scorecard
	// Input: two integers
	// Output: bool

	// Run the method
	return games[player - 1].canDo(box);
}

bool scoreCard::willZero(int box, int die1, int die2, int die3, int die4, 
	int die5) {
	// Publically accessable method to tell if a box will zero

	// Temporary holding variable for the return value
	bool retVal;

	// Invoke the proper method and capture its return
	switch (box) {
	case 1:
		retVal = willZeroAces(die1, die2, die3, die4, die5);
		break;
	case 2:
		retVal = willZeroTwos(die1, die2, die3, die4, die5);
		break;
	case 3:
		retVal = willZeroThrees(die1, die2, die3, die4, die5);
		break;
	case 4:
		retVal = willZeroFours(die1, die2, die3, die4, die5);
		break;
	case 5:
		retVal = willZeroFives(die1, die2, die3, die4, die5);
		break;
	case 6:
		retVal = willZeroSixes(die1, die2, die3, die4, die5);
		break;
	case 7:
		retVal = willZeroThreeKind(die1, die2, die3, die4, die5);
		break;
	case 8:
		retVal = willZeroFourKind(die1, die2, die3, die4, die5);
		break;
	case 9:
		retVal = willZeroFullHouse(die1, die2, die3, die4, die5);
		break;
	case 10:
		retVal = willZeroSmStraight(die1, die2, die3, die4, die5);
		break;
	case 11:
		retVal = willZeroLgStraight(die1, die2, die3, die4, die5);
		break;
	case 12:
		retVal = willZeroYahtzee(die1, die2, die3, die4, die5);
		break;
	case 13:
		retVal = willZeroChance(die1, die2, die3, die4, die5);
		break;
	default:
		retVal = false;
	}

	// Return the captured value
	return retVal;
}

void scoreCard::doScore(int player, int box, int die1, int die2, int die3, 
	int die4, int die5, bool zero = false) {
	// Execute the score logic here.
	// Input: 7 integers, bool

	// Storage variable for the calculated value
	int tempVal = 0;

	// If the box is not zero, invoke scoring method needed.
	if (!zero) {
		switch (box) {
		case 1:
			// Aces
			tempVal = scoreAces(die1, die2, die3, die4, die5);
			break;
		case 2:
			tempVal = scoreTwos(die1, die2, die3, die4, die5);
			break;
		case 3:
			tempVal = scoreThrees(die1, die2, die3, die4, die5);
			break;
		case 4:
			tempVal = scoreFours(die1, die2, die3, die4, die5);
			break;
		case 5:
			tempVal = scoreFives(die1, die2, die3, die4, die5);
			break;
		case 6:
			tempVal = scoreSixes(die1, die2, die3, die4, die5);
			break;
		case 7:
			tempVal = scoreThreeKind(die1, die2, die3, die4, die5);
			break;
		case 8:
			tempVal = scoreFourKind(die1, die2, die3, die4, die5);
			break;
		case 9:
			tempVal = scoreFullHouse(die1, die2, die3, die4, die5);
			break;
		case 10:
			tempVal = scoreSmStraight(die1, die2, die3, die4, die5);
			break;
		case 11:
			tempVal = scoreLgStraight(die1, die2, die3, die4, die5);
			break;
		case 12:
			tempVal = scoreYahtzee(die1, die2, die3, die4, die5);
			break;
		case 13:
			tempVal = scoreChance(die1, die2, die3, die4, die5);
			break;
		default:
			break;
		}
	}

	// Pass the value through to the right scorecard
	games[player - 1].doScore(box, tempVal, zero);

}

string scoreCard::getScore(int playerNum, int box) {
	// Passthrough method to get a score number
	// Input: 2 ints
	// output: std::string

	//Grab the scores and convert to a string, then return
	ostringstream stream;
	stream << games[playerNum - 1].getScore(box);
	return stream.str();
}

string scoreCard::getUpperScorePre(int playerNum) {
	// Passthrough method to get an upper score (pre-bonus)
	// Input: Int
	// output: std::string

	//Grab the scores and convert to a string, then return
	ostringstream stream;
	stream << games[playerNum - 1].getUpperScorePre();
	return stream.str();
}

string scoreCard::getUpperScore(int playerNum) {
	// Passthrough method to get an upper score
	// Input: Int
	// output: std::string

	//Grab the scores and convert to a string, then return
	ostringstream stream;
	stream << games[playerNum - 1].getUpperScore();
	return stream.str();
}

string scoreCard::getLowerScore(int playerNum) {
	// Passthrough method to get a lower score
	// Input: Int
	// output: std::string

	//Grab the scores and convert to a string, then return
	ostringstream stream;
	stream << games[playerNum - 1].getLowerScore();
	return stream.str();
}

string scoreCard::getGrand(int playerNum) {
	// Passthrough method to get a grand total
	// Input: Int
	// output: std::string

	//Grab the scores and convert to a string, then return
	ostringstream stream;
	stream << games[playerNum - 1].getGrand();
	return stream.str();
}

bool scoreCard::bonusApplied(int playerNum) {
	// Passthrough method to tell if a bonus was applied
	// Input: Int
	// output: std::string

	//Pass through and return
	return games[playerNum - 1].bonusAppliedBool();
}

void scoreCard::calculateScore() {
	// Method to calculate all of the scores
	// Input: None
	// OUtput: None

	// Calculate all of the individual scores by calling
	// score::calculateScore
	games[0].calculateScore();
	games[1].calculateScore();
	games[2].calculateScore();
	games[3].calculateScore();
	games[4].calculateScore();
	games[5].calculateScore();
}