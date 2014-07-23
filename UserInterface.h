#pragma once

#include "Core.h"
#include "UIUtils.h"
#include "AbstractScreen.h"

using std::string;

class UserInterface
{
private:

	UIUtils *utils;
	AbstractScreen *currentScreen;

public:
	Core core;

	UserInterface(Core core);
	~UserInterface();

	bool running = true;

	void clear(); // clears the console

	int intInput(); // input wrapper for an int
	string strInput(); // input wrapper for a string

	char waitForInput(); // used to wait for any key to be pressed
	char waitForInput(string, bool = false); // wait for input with message printed

	virtual void render();

	void mainScreen();
	void employeeScreen();
	void personScreen();
	void companyScreen();
};
