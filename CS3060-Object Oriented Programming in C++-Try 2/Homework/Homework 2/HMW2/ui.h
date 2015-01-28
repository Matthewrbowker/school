#ifndef UI_H
#define UI_H

#endif // UI_H

using namespace std;

class ui{
public:
	void genHeader();
	void clearConsole();
};

void ui::genHeader() {
	cout << "Welcome to the Math CAI system." << endl;
	cout << "This program is developed by Matthew Bowker." << endl;
	cout << "If you have any problems with this program, ";
	cout << "contact your teacher." <<endl;
}

void ui::clearConsole() {

}