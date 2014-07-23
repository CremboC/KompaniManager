#include "stdafx.h"

#include <iostream>

#include "UserInterface.h"
#include "UIUtils.h"
#include "Employee.h"
#include "Company.h"
#include "Core.h"
#include "MenuScreen.h"

using std::string;
using std::cout;
using std::cin;

using std::endl;
UserInterface::UserInterface(Core core)
{
	this->core = core;
	this->utils = new UIUtils();

	mainScreen();
}

UserInterface::~UserInterface()
{}

void UserInterface::clear()
{
	system("cls");
}

int UserInterface::intInput()
{
	int input;
	cin >> input;

	return input;
}

string UserInterface::strInput()
{
	string input;
	cin >> input;

	return input;
}

char UserInterface::waitForInput()
{
	return cin.get();
}

char UserInterface::waitForInput(string msg, bool centered)
{
	if (centered)
		utils->printCentered(msg);
	else
		cout << msg << endl;

	return cin.get();
}

void UserInterface::mainScreen()
{
	if (currentScreen != nullptr)
	{
		delete currentScreen;
	}
	currentScreen = new MenuScreen(utils, this);
}

void UserInterface::employeeScreen()
{
	structs::Employee e;
	e.details.name = "Paul";
	e.details.surname = "Imbra";

	core.employees.add(e);

	utils->printPadding();
}

void UserInterface::personScreen()
{}

void UserInterface::companyScreen()
{}

void UserInterface::render()
{
	if (currentScreen == nullptr)
	{
		throw new exceptions::IllegalStateException("No screen is set.");
	}

	currentScreen->render();
}