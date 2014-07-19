#include <string>

using std::string;

struct sAddress
{
	int houseNumber;
	string streetName;
	string postcode;
	string country;
};

struct sCompany
{
	string name;
	sAddress address;
};

struct sPerson
{
	string name;
	string surname;
	sAddress address;
};

struct sEmployee
{
	sPerson details;
	sCompany employer;
};
