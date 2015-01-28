scoreTEMP.h



	// Pass-ins for 
	void loadFileSetAces(bool, bool, int);
	void loadFileSetTwos(bool, bool, int);
	void loadFileSetThrees(bool, bool, int);
	void loadFileSetFours(bool, bool, int);
	void loadFileSetFives(bool, bool, int);
	void loadFileSetSixes(bool, bool, int);
	void loadFileSetThreeKind(bool, bool, int);
	void loadFileSetFourKind(bool, bool, int);
	void loadFileSetFullHouse(bool, bool, int);
	void loadFileSetSmStraight(bool, bool, int);
	void loadFileSetLgStraight(bool, bool, int);
	void loadFileSetYahtzee(bool, bool, int);
	void loadFileSetChance(bool, bool, int);

	

void score::loadFileSetAces(bool used, bool zero, int val) {
	acesU = used;
	acesZ = zero;
	aces = val;
}

void score::loadFileSetTwos(bool used, bool zero, int val) {
	twosU = used;
	twosZ = zero;
	twos = val;
}