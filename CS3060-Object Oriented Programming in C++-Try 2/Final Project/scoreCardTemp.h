

	void setAces(int, bool, bool, int);
	void setTwos(int, bool, bool, int);
	void setThrees(int, bool, bool, int);
	void setFours(int, bool, bool, int);
	void setFives(int, bool, bool, int);
	void setSixes(int, bool, bool, int);
	void setThreeKind(int, bool, bool, int);
	void setFourKind(int, bool, bool, int);
	void setFullHouse(int, bool, bool, int);
	void setSmStraight(int, bool, bool, int);
	void setLgStraight(int, bool, bool, int);
	void setYahtzee(int, bool, bool, int);
	void setChance(int, bool, bool, int);


void scoreCard::setAces(int player, bool used, bool zero, int score) {
	games[player - 1].loadFileSetAces(used, zero, score);
}

void scoreCard::setTwos(int player, bool used, bool zero, int score) {
	games[player - 1].loadFileSetTwos(used, zero, score);
}