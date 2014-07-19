#include "stdafx.h"

#include <iostream>

using std::string;

#pragma once
class UserInterface
{
private:

public:
	UserInterface();
	~UserInterface();
	void clear();

	void employeeScreen();
	void personScreen();
	void companyScreen();
};