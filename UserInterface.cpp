#include "stdafx.h"

#include <iostream>
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
	utils.printPadding();

	utils.printCentered("HELLO, WELCOME TO KompaniManager");

	utils.printHeader(structs::Company{});

	companyVector comps = core.companies.all();

	for (companyVector::size_type i = 0; i < comps.size(); i++)
	{
		utils.printRow(comps[i], (i == 0) ? true : false);
		cout << comps[i].name << endl;
	}
}

void UserInterface::employeeScreen()
{
	structs::Employee e;
	e.details.name = "Paul";
	e.details.surname = "Imbra";

	core.employees.add(e);

	utils.printPadding();
}

void UserInterface::personScreen()
{}

void UserInterface::companyScreen()
{}