#include "stdafx.h"

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "UserInterface.h"
#include "UIUtils.h"
#include "Employee.h"
#include "Company.h"
#include "Core.h"

using std::string;
using std::cout;
using std::cin;

using std::endl;

using std::this_thread::sleep_for;
using std::chrono::milliseconds;

UserInterface::UserInterface(Core core)
{
	this->core = core;
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

void UserInterface::waitForInput()
{
	cin.get();
}

void UserInterface::mainScreen()
{
	// show all existing companies
	cout << string(SCR_WIDTH, '-') << endl;

	utils.printCenter("HELLO, WELCOME TO KompaniManager");
}

void UserInterface::employeeScreen()
{
	structs::Employee e;
	e.details.name = "Paul";
	e.details.surname = "Imbra";

	core.employees.add(e);

	cout << string(SCR_WIDTH, '-') << endl;
}

void UserInterface::personScreen()
{}

void UserInterface::companyScreen()
{}