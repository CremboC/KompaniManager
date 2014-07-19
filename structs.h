using std::string;

#pragma once
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

	struct Company
	{
		string name;
		Address address;
	};

	struct Person
	{
		string name;
		string surname;
		Address address;
	};

	struct Employee
	{
		Person details;
		Company employer;
	};
}
