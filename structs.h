#pragma once

#include <vector>

using std::string;
using std::vector;

namespace structs
{
	struct Address
	{
		int houseNumber;
		string streetName;
		string postcode;
		string city;
		string country;
	};

	struct Person
	{
		string name;
		string surname;
		Address address;
	};

	struct Company
	{
		string name;
		Address address;
	};

	struct Employee
	{
		Person details;
		Company employer;
	};
}
