// FILE: globals.h
// AUTHOR: Matthew Bowker
// COURSE: CS3060-001 FINAL PROJECT

using namespace std;
using namespace std;

class globals {
	// Becuase global variables are Very Bad(R), this is a nice work-around
	// that allows for psudo-global variables
private:
	int numPlayers;
	int currentPlayer;
	int numRollsLeft;
public:
	int getNumPlayers();
	void setNumPlayers(int);
	int getCurrentPlayer();
	void setCurrentPlayer(int);
	void nextPlayer();
	bool canReRoll();
	void reRoll();
	void resetRolls();
};

int globals::getNumPlayers() {
	// Accessor to get the number of players
	// Input: None
	//Output: Int
	return numPlayers;
}

void globals::setNumPlayers(int tempPlayers) {
	// Mutator to set number of players
	// Input: Int
	// Output: None
	numPlayers = tempPlayers;
}

int globals::getCurrentPlayer() {
	// Returns which player is currently playing
	// Input: None
	// Output Int

	// Returns 1 to make everything work, room for future implementation
	return 1;
}

void globals::setCurrentPlayer(int tempPlayer) {
	//Sets the current player number
	// Input: Int
	// Output: None
	currentPlayer = tempPlayer;
}

bool globals::canReRoll() {
	// Tells us if the player can re-roll
	// Input: None
	// Output: Bool

	if (numRollsLeft < 1) {
		// Checks how many rolls are left, returns false if not enough
		return false;
	}
	// Otherwise, return true, user can reroll
	else return true;
}

void globals::reRoll() {
	// Used for when a player re-rolls dice, decrements the counter
	// Input: None
	// Output: None

	// Decrement the counter
	numRollsLeft--;
}

void globals::resetRolls() {
	// Resets the number of re-rolls to 2
	// Input: None
	// Output: None
	
	numRollsLeft = 2;
}