using namespace std;

// File that will handle all of our file operations
// *.ytz

class fileInterface {
private:
	string fileName;
	globals * gPtr;
	diceCup * dcPtr;
	scoreCard * scPtr;
	bool process(int, string[]);
	int stringToInt(string);
	bool intToBool(int);
public:
	fileInterface(globals*, diceCup*, scoreCard*);
	bool openFile(string);
	bool saveFile(string);

};

bool fileInterface::process(int lineNum, string array[]) {
	if (lineNum == 0) {
		if (stringToInt(array[0]) != 1) { return false; }
	}
	else if (lineNum == 1) {
		gPtr->setNumPlayers(stringToInt(array[0]));
		gPtr->setCurrentPlayer(stringToInt(array[1]));
	}
	else if (lineNum > 1 && lineNum < 8) {
		// Insert Values here
		scPtr->setAces(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setTwos(lineNum - 1, intToBool(stringToInt(array[3])), intToBool(stringToInt(array[4])), stringToInt(array[5]));
		/*scPtr->setThrees(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setFours(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setFives(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setSixes(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setThreeKind(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setFourKind(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setFullHouse(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setSmStraight(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setLgStraight(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setYahtzee(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
		scPtr->setChance(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));*/
		//scPtr->setAces(lineNum - 1, intToBool(stringToInt(array[0])), intToBool(stringToInt(array[1])), stringToInt(array[2]));
	}
	else if (lineNum == 8) {
		// Insert dice
	}
	else {
		return false;
	}

	return true;
}

int fileInterface::stringToInt(string str) {
	int retVal;

	istringstream(str) >> retVal;

	return retVal;
}

bool fileInterface::intToBool(int in) {
	return (in != 0);
}

fileInterface::fileInterface(globals *g, diceCup* dc, scoreCard* sc) {
	gPtr = g;
	dcPtr = dc;
	scPtr = sc;
}

bool fileInterface::openFile(string tempFileName) {
	ifstream fileRead;
	string tempString;
	int arrayVal = 0;
	string storeArray[40];
	int line = 0;
	string word;
	istringstream sst;

	fileRead.open(tempFileName);

	if (fileRead.is_open()) {
		while (!fileRead.eof()) {
			getline(fileRead, tempString);
			sst.str(tempString);
			while (sst >> word) {
				storeArray[arrayVal] = word;
				arrayVal++;
			}
			sst.clear();
			if (!process(line, storeArray)) {
				return false;
				break;
			}
			line++;
			arrayVal = 0;
			sst.str("");
		}
		return true;
	}
	else {
		return false;
	}
}

bool fileInterface::saveFile(string tempFileName) {
	cout << intToBool(stringToInt("123")) << endl;
	return true;
}