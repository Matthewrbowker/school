// FILE: Main.cpp
// AUTHOR: Matthew Bowker
// COURSE: CS3060-001 FINAL PROJECT

using namespace std;
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "globals.h"
#include "dice.h"
#include "diceCup.h"
#include "score.h"
#include "scoreCard.h"
//#include "fileInterface.h" // FILE IS USED FOR SAVING, BUT NOT COMPLETE
#include "scoreCardGUI.h"
#include "AboutBox.h"
#include "helpGUI.h"
#include "MyForm.h"

// SYSTEM GENERATED STUFF :D
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
int main(array<String^>^ args)
{
	// Create our objects
	globals g;
	diceCup dc;
	scoreCard sc;
	fileInterface fi(&g, &dc, &sc);

	// SYSTEM GENERATED STUFF :D
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the object and pass in pointers
	MyForm::MyForm form;
	form.pointerToGlobals(&g);
	form.pointerToDiceCup(&dc);
	form.pointerToScoreCard(&sc);
	form.pointerToFileInterface(&fi);

	// Run the form!
	Application::Run(%form);

	// Houston, we're done here!
	return 0;
}