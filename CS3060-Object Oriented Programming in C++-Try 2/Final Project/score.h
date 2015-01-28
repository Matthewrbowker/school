// FILE: score.h
// AUTHOR: Matthew Bowker
// COURSE: CS3060-001 FINAL PROJECT

using namespace std;
using namespace std;

// this is where the score values for a single game will be stored.

class score {
private:
	bool acesU;          // Has the Aces box been used
	bool acesZ;          // Has the Aces box been zeroed
	int aces;            // Aces score
	bool twosU;          // Has the twos box been used
	bool twosZ;          // Has the twos box been zeroed
	int twos;            // Twos score
	bool threesU;        // Has the threes box been used
	bool threesZ;        // Has the threes box been zeroed
	int threes;          // Threes score
	bool foursU;         // Has the fours box been used
	bool foursZ;         // Has the fours box been zeroed
	int fours;           // Fours score
	bool fivesU;         // Has the fives box been used
	bool fivesZ;         // Has the fives box been zeroed
	int fives;           // Fives score
	bool sixesU;         // Has the sixes box been used
	bool sixesZ;         // Has the sixes box been zeroed
	int sixes;           // Sixes score
	bool bonusApplied;   // Whether a 35 point bonus was applied

	bool threeKindU;     // Has the three of a kind box been used
	bool threeKindZ;     // Has the three of a kind box been zeroed
	int threeKind;       // Three of a kind score
	bool fourKindU;      // Has the four of a kind box been used
	bool fourKindZ;      // Has the four of a kind box been zeroed
	int fourKind;        // Four of a kind score
	bool fullHouseU;     // Has the full house box been used
	bool fullHouseZ;     // Has the full house box been zeroed
	int fullHouse;       // Full house score
	bool smStraightU;    // Has the small straight box been used
	bool smStraightZ;    // Has the small straight box been zeroed
	int smStraight;      // Small straight score
	bool lgStraightU;    // Has the large straight box been used
	bool lgStraightZ;    // Has the large straight box been zeroed
	int lgStraight;      // Large straight score
	bool yahtzeeU;       // Has the yahtzee box been used
	bool yahtzeeZ;       // Has the yahtzee box been zeroed
	int yahtzee;         // Yahtzee score
	bool chanceU;        // Has the chance box been used
	bool chanceZ;        // Has the chance box been zeroed
	int chance;          // Chance score
	int numYahtzeeBonus; // Number of bonuses recieved for extra Yahtzees
	int upperScorePre;   // The upper score box before bonuses
	int upperScore;      // The upper score box
	int lowerScore;      // The lower score box
	int grand;           // The grand total

	// Helper function definitions for canDo();
	bool canDoAces();
	bool canDoTwos();
	bool canDoThrees();
	bool canDoFours();
	bool canDoFives();
	bool canDoSixes();
	bool canDoThreeKind();
	bool canDoFourKind();
	bool canDoFullHouse();
	bool canDoSmStraight();
	bool canDoLgStraight();
	bool canDoYahtzee();
	bool canDoChance();

	// Helper function definitions for zero();
	void zeroAces();
	void zeroTwos();
	void zeroThrees();
	void zeroFours();
	void zeroFives();
	void zeroSixes();
	void zeroThreeKind();
	void zeroFourKind();
	void zeroFullHouse();
	void zeroSmStraight();
	void zeroLgStraight();
	void zeroYahtzee();
	void zeroChance();

	// Helper function definitions for doScore();
	void setAces(int);
	void setTwos(int);
	void setThrees(int);
	void setFours(int);
	void setFives(int);
	void setSixes(int);
	void setThreeKind(int);
	void setFourKind(int);
	void setFullHouse(int);
	void setSmStraight(int);
	void setLgStraight(int);
	void setYahtzee(int);
	void setChance(int);
public:
	// Define constructor
	score();

	// Functions to allow access to the members
	bool canDo(int);
	bool isZeroed(int);
	int getScore(int);
	int getUpperScorePre();
	int getUpperScore();
	int getLowerScore();
	int getGrand();
	bool bonusAppliedBool();

	// Interaction functions to execute the score and calculate it.
	void doScore(int, int, bool);
	void calculateScore();
};

score::score() {
	// Constructor
	// Input: None
	// Output: "score" object

	// Intitialize the variables so we don't break anything.
	acesU = false;
	acesZ = false;
	aces = 0;
	twosU = false;
	twosZ = false;
	twos = 0;
	threesU = false;
	threesZ = false;
	threes = 0;
	foursU = false;
	foursZ = false;
	fours = 0;
	fivesU = false;
	fivesZ = false;
	fives = 0;
	sixesU = false;
	sixesZ = false;
	sixes = 0;
	upperScorePre = 0;
	bonusApplied = false;
	upperScore = 0;
	threeKindU = false;
	threeKindZ = false;
	threeKind = 0;
	fourKindU = false;
	fourKindZ = false;
	fourKind = 0;
	fullHouseU = false;
	fullHouseZ = false;
	fullHouse = 0;
	smStraightU = false;
	smStraightZ = false;
	smStraight = 0;
	lgStraightU = false;
	lgStraightZ = false;
	lgStraight = 0;
	yahtzeeU = false;
	yahtzeeZ = false;
	yahtzee = 0;
	chanceU = false;
	chanceZ = false;
	chance = 0;
	numYahtzeeBonus = 0;
	lowerScore = 0;
	grand = 0;

}

void score::zeroAces() {
	// Zeros the Aces box
	// Input: None
	// Output: None

	// Set the variables
	acesU = true;
	acesZ = true;
	aces = 0;
}

void score::zeroTwos() {
	// Zeros the Twos box
	// Input: None
	// Output: None

	// Set the variables
	twosU = true;
	twosZ = true;
	twos = 0;
}

void score::zeroThrees() {
	// Zeros the Threes box
	// Input: None
	// Output: None

	// Set the variables
	threesU = true;
	threesZ = true;
	threes = 0;
}

void score::zeroFours() {
	// Zeros the Fours box
	// Input: None
	// Output: None

	// Set the variables
	foursU = true;
	foursZ = true;
	fours = 0;
}

void score::zeroFives() {
	// Zeros the Fives box
	// Input: None
	// Output: None

	// Set the variables
	fivesU = true;
	fivesZ = true;
	fives = 0;
}

void score::zeroSixes() {
	// Zeros the Sixes box
	// Input: None
	// Output: None

	// Set the variables
	sixesU = true;
	sixesZ = true;
	sixes = 0;
}

void score::zeroThreeKind() {
	// Zeros the Three of a Kind box
	// Input: None
	// Output: None

	// Set the variables
	threeKindU = true;
	threeKindZ = true;
	threeKind = 0;
}

void score::zeroFourKind() {
	// Zeros the Four of a Kind box
	// Input: None
	// Output: None

	// Set the variables
	fourKindU = true;
	fourKindZ = true;
	fourKind = 0;
}

void score::zeroFullHouse() {
	// Zeros the Full House box
	// Input: None
	// Output: None

	// Set the variables
	fullHouseU = true;
	fullHouseZ = true;
	fullHouse = 0;
}

void score::zeroSmStraight() {
	// Zeros the Small Straight box
	// Input: None
	// Output: None

	// Set the variables
	smStraightU = true;
	smStraightZ = true;
	smStraight = 0;
}

void score::zeroLgStraight() {
	// Zeros the Large Straight box
	// Input: None
	// Output: None

	// Set the variables
	lgStraightU = true;
	lgStraightZ = true;
	lgStraight = 0;
}

void score::zeroYahtzee() {
	// Zeros the Yahtzee box
	// Input: None
	// Output: None

	// Set the variables
	yahtzeeU = true;
	yahtzeeZ = true;
	yahtzee = 0;
}

void score::zeroChance() {
	// Zeros the Chance box
	// Input: None
	// Output: None

	// Set the variables
	chanceU = true;
	chanceZ = true;
	chance = 0;
}

void score::setAces(int tempVal) {
	// Sets the Aces box
	// Input: Integer
	// Output: None

	// Set the variables
	aces = tempVal;
	acesU = true;
	acesZ = false;
}

void score::setTwos(int tempVal) {
	// Sets the Twos box
	// Input: Integer
	// Output: None

	// Set the variables
	twos = tempVal;
	twosU = true;
	twosZ = false;
}

void score::setThrees(int tempVal) {
	// Sets the Threes box
	// Input: Integer
	// Output: None

	// Set the variables
	threes = tempVal;
	threesU = true;
	threesZ = false;
}

void score::setFours(int tempVal) {
	// Sets the Fours box
	// Input: Integer
	// Output: None

	// Set the variables
	fours = tempVal;
	foursU = true;
	foursZ = false;
}

void score::setFives(int tempVal) {
	// Sets the Fives box
	// Input: Integer
	// Output: None

	// Set the variables
	fives = tempVal;
	fivesU = true;
	fivesZ = false;
}

void score::setSixes(int tempVal) {
	// Sets the Sixes box
	// Input: Integer
	// Output: None

	// Set the variables
	sixes = tempVal;
	sixesU = true;
	sixesZ = false;
}

void score::setThreeKind(int tempVal) {
	// Sets the Three of a Kind box
	// Input: Integer
	// Output: None

	// Set the variables
	threeKind = tempVal;
	threeKindU = true;
	threeKindZ = false;
}

void score::setFourKind(int tempVal) {
	// Sets the Four of a Kind box
	// Input: Integer
	// Output: None

	// Set the variables
	fourKind = tempVal;
	fourKindU = true;
	fourKindZ = false;
}

void score::setFullHouse(int tempVal) {
	// Sets the Full House box
	// Input: Integer
	// Output: None

	// Set the variables
	fullHouse = tempVal;
	fullHouseU = true;
	fullHouseZ = false;
}

void score::setSmStraight(int tempVal) {
	// Sets the Small Straight box
	// Input: Integer
	// Output: None

	// Set the variables
	smStraight = tempVal;
	smStraightU = true;
	smStraightZ = false;
}

void score::setLgStraight(int tempVal) {
	// Sets the Large Straight box
	// Input: Integer
	// Output: None

	// Set the variables
	lgStraight = tempVal;
	lgStraightU = true;
	lgStraightZ = false;
}

void score::setYahtzee(int tempVal) {
	// Sets the Yahtzee box
	// Input: Integer
	// Output: None

	// Set the variables
	yahtzee = tempVal;
	yahtzeeU = true;
	yahtzeeZ = false;
}

void score::setChance(int tempVal) {
	// Sets the Chance box
	// Input: Integer
	// Output: None

	// Set the variables
	chance = tempVal;
	chanceU = true;
	chanceZ = false;
}

bool score::canDoAces() {
	// Tells if we can use the Aces box
	// Input: None
	// Output: Bool

	// Return the variable
	return !acesU;
}

bool score::canDoTwos() {
	// Tells if we can use the Twos box
	// Input: None
	// Output: Bool

	// Return the variable
	return !twosU;
}

bool score::canDoThrees() {
	// Tells if we can use the Threes box
	// Input: None
	// Output: Bool

	// Return the variable
	return !threesU;
}

bool score::canDoFours() {
	// Tells if we can use the Fours box
	// Input: None
	// Output: Bool

	// Return the variable
	return !foursU;
}

bool score::canDoFives() {
	// Tells if we can use the Fives box
	// Input: None
	// Output: Bool

	// Return the variable
	return !fivesU;
}

bool score::canDoSixes() {
	// Tells if we can use the Sixes box
	// Input: None
	// Output: Bool

	// Return the variable
	return !sixesU;
}

bool score::canDoThreeKind() {
	// Tells if we can use the Three of a Kind box
	// Input: None
	// Output: Bool

	// Return the variable
	return !threeKindU;
}

bool score::canDoFourKind() {
	// Tells if we can use the Four of a Kind box
	// Input: None
	// Output: Bool

	// Return the variable
	return !fourKindU;
}

bool score::canDoFullHouse() {
	// Tells if we can use the Full House box
	// Input: None
	// Output: Bool

	// Return the variable
	return !fullHouseU;
}

bool score::canDoSmStraight() {
	// Tells if we can use the Small Straight box
	// Input: None
	// Output: Bool

	// Return the variable
	return !smStraightU;
}

bool score::canDoLgStraight() {
	// Tells if we can use the Large Straight box
	// Input: None
	// Output: Bool

	// Return the variable
	return !lgStraightU;
}

bool score::canDoYahtzee() {
	// Tells if we can use the Yahtzee box
	// Input: None
	// Output: Bool

	// Return the variable
	return !yahtzeeU;
}

bool score::canDoChance() {
	// Tells if we can use the Chance box
	// Input: None
	// Output: Bool

	// Return the variable
	return !chanceU;
}

bool score::isZeroed(int box) {
	// Tells us if the specified box is Zeroed or not.
	// Input: Integer
	// Output: Bool

	// Temporary holding variable for our return value
	bool retVal = false;

	// We are switching based on which box we're using, then 
	// checking if the variable is used and if it's zeroed
	switch (box) {
	case 1:
		retVal = (acesU && acesZ);
		break;
	case 2:
		retVal = (twosU && twosZ);
		break;
	case 3:
		retVal = (threesU && threesZ);
		break;
	case 4:
		retVal = (foursU && foursZ);
		break;
	case 5:
		retVal = (fivesU && fivesZ);
		break;
	case 6:
		retVal = (sixesU && sixesZ);
		break;
	case 7:
		retVal = (threeKindU && threeKindZ);
		break;
	case 8:
		retVal = (fourKindU && fourKindZ);
		break;
	case 9:
		retVal = (fullHouseU && fullHouseZ);
		break;
	case 10:
		retVal = (smStraightU && smStraightZ);
		break;
	case 11:
		retVal = (lgStraightU && lgStraightZ);
		break;
	case 12:
		retVal = (yahtzeeU && yahtzeeZ);
		break;
	case 13:
		retVal = (chanceU && chanceZ);
		break;
	default:
		false;
	}

	// Return our discovered value.
	return retVal;
}

bool score::canDo(int box) {
	// Public function to tell us if we can do a box.
	// Input: int
	// Output: Bool

	// Switch based on the box, then return the proper helper method (see above)
	switch (box) {
	case 1:
		return canDoAces();
		break;
	case 2:
		return canDoTwos();
		break;
	case 3:
		return canDoThrees();
		break;
	case 4:
		return canDoFours();
		break;
	case 5:
		return canDoFives();
		break;
	case 6:
		return canDoSixes();
		break;
	case 7:
		return canDoThreeKind();
		break;
	case 8:
		return canDoFourKind();
		break;
	case 9:
		return canDoFullHouse();
		break;
	case 10:
		return canDoSmStraight();
		break;
	case 11:
		return canDoLgStraight();
		break;
	case 12:
		return canDoYahtzee();
		break;
	case 13:
		return canDoChance();
		break;
	default:
		return false;
		break;
	}
}

int score::getScore(int box) {
	// Public function to tell us if we can do a box.
	// Input: Int
	// Output: Integer

	// Switch based on the box, then return the score
	switch (box) {
	case 1:
		return aces;
		break;
	case 2:
		return twos;
		break;
	case 3:
		return threes;
		break;
	case 4:
		return fours;
		break;
	case 5:
		return fives;
		break;
	case 6:
		return sixes;
		break;
	case 7:
		return threeKind;
		break;
	case 8:
		return fourKind;
		break;
	case 9:
		return fullHouse;
		break;
	case 10:
		return smStraight;
		break;
	case 11:
		return lgStraight;
		break;
	case 12:
		return yahtzee;
		break;
	case 13:
		return chance;
		break;
	default:
		return 999;
		break;
	}
}

void score::doScore(int box, int scoreVal, bool zero = false) {
	// Public function to tell us if we can do a box.
	// Input: Integer, Integer, Bool
	// Output: None

	if (zero) {
		// If we are zeroing a box, call the proper zeroing method.
		switch (box) {
		case 1:
			zeroAces();
			break;
		case 2:
			zeroTwos();
			break;
		case 3:
			zeroThrees();
			break;
		case 4:
			zeroFours();
			break;
		case 5:
			zeroFives();
			break;
		case 6:
			zeroSixes();
			break;
		case 7:
			zeroThreeKind();
			break;
		case 8:
			zeroFourKind();
			break;
		case 9:
			zeroFullHouse();
			break;
		case 10:
			zeroSmStraight();
			break;
		case 11:
			zeroLgStraight();
			break;
		case 12:
			zeroYahtzee();
			break;
		case 13:
			zeroChance();
			break;
		default:
			// Do nothing
			break;
		}
	}
	else {
		// Otherwise, call the proper scoring method.
		switch (box) {
		case 1:
			setAces(scoreVal);
			break;
		case 2:
			setTwos(scoreVal);
			break;
		case 3:
			setThrees(scoreVal);
			break;
		case 4:
			setFours(scoreVal);
			break;
		case 5:
			setFives(scoreVal);
			break;
		case 6:
			setSixes(scoreVal);
			break;
		case 7:
			setThreeKind(scoreVal);
			break;
		case 8:
			setFourKind(scoreVal);
			break;
		case 9:
			setFullHouse(scoreVal);
			break;
		case 10:
			setSmStraight(scoreVal);
			break;
		case 11:
			setLgStraight(scoreVal);
			break;
		case 12:
			setYahtzee(scoreVal);
			break;
		case 13:
			setChance(scoreVal);
			break;
		default:
			// Do nothing
			break;
		}
	}
}

void score::calculateScore() {
	// Method to calculate the scores
	// Must be called before outputing the scores
	// Input: None
	// Output: None

	// Start by adding upper score
	upperScorePre = aces + twos + threes + fours + fives + sixes;

	// Set the upper score to a holding variable
	upperScore = upperScorePre;

	// Apply bonus if earned
	if (upperScore > 63) {
		upperScore += 35;
	}

	// Calculate the lower score
	lowerScore = threeKind + fourKind + fullHouse + smStraight + lgStraight + yahtzee + chance;

	// Calculate the grand total
	grand = upperScore + lowerScore;
}

int score::getUpperScorePre() {
	// Accessor to the Upper Score (pre-bonus)
	// Input: None
	// Output: Integer

	// Return the variable
	return upperScorePre;
}

int score::getUpperScore() {
	// Accessor to the Upper Score
	// Input: None
	// Output: Integer

	// Return the variable
	return upperScore;
}

int score::getLowerScore() {
	// Accessor to the Lower Score
	// Input: None
	// Output: Integer

	// Return the variable
	return lowerScore;
}

int score::getGrand() {
	// Accessor to the Grand Score
	// Input: None
	// Output: Integer

	// Return the variable
	return grand;
}

bool score::bonusAppliedBool() {
	// Accessor to whether the bonus has been applied
	// Input: None
	// Output: Boolian

	// Calculate and return the bool
	if (upperScore > 63) {
		return true;
	}
	else return false;
}

// NOTE: There are several methods to handle file handling that exist here.
// They have been removed for the sake of clarity.