using namespace std;

class console {
private:
	void printDice(int);
public:
	void outputDice(int);
	void outputScorecard(scoreCard*);
	void pauseEnd();
};

void console::printDice(int diceNum) {
	switch (diceNum) {
	case 1:
		cout << "------------" << endl;
		cout << "|          |" << endl;
		cout << "|    *     |" << endl;
		cout << "|          |" << endl;
		cout << "------------" << endl;
		break;
	case 2:
		cout << "------------" << endl;
		cout << "|       *  |" << endl;
		cout << "|          |" << endl;
		cout << "| *        |" << endl;
		cout << "------------" << endl;
		break;
	case 3:
		cout << "------------" << endl;
		cout << "|       *  |" << endl;
		cout << "|    *     |" << endl;
		cout << "| *        |" << endl;
		cout << "------------" << endl;
		break;
	case 4:
		cout << "------------" << endl;
		cout << "| *     *  |" << endl;
		cout << "|          |" << endl;
		cout << "| *     *  |" << endl;
		cout << "------------" << endl;
		break;
	case 5:
		cout << "------------" << endl;
		cout << "| *     *  |" << endl;
		cout << "|    *     |" << endl;
		cout << "| *     *  |" << endl;
		cout << "------------" << endl;
		break;
	case 6:
		cout << "------------" << endl;
		cout << "| *     *  |" << endl;
		cout << "| *     *  |" << endl;
		cout << "| *     *  |" << endl;
		cout << "------------" << endl;
		break;
	default:
		cout << "------------" << endl;
		cout << "|          |" << endl;
		cout << "|          |" << endl;
		cout << "|          |" << endl;
		cout << "------------" << endl;
		cout << "An unknown dice occured!" << endl;
		break;
	}

}

void console::outputDice(int diceVal) {
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

	printDice(diceOne);
	printDice(diceTwo);
	printDice(diceThree);
	printDice(diceFour);
	printDice(diceVal);
}

void console::outputScorecard(scoreCard *sc) {
	cout << "Outputing ScoreCard Here." << endl;
}

void console::pauseEnd() {
	system("PAUSE");
}