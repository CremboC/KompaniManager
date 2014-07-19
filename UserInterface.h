#include <iostream>

#include "Core.h"
#include "UIUtils.h"

using std::string;

#pragma once
class UserInterface
{

private:
	Core core;
	UIUtils utils;

public:
	UserInterface(Core core);
	~UserInterface();

	void clear(); // clears the console

	int intInput(); // input wrapper for an int
	string strInput(); // input wrapper for a string

	void waitForInput(); // used to wait for any key to be pressed

	void mainScreen();
	void employeeScreen();
	void personScreen();
	void companyScreen();
};

