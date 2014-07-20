#include "stdafx.h"

#include "UIUtils.h"

vector<int> UIUtils::paddingForCenter(string str)
{
	int left, right, diff;

	// index 0 is left-side, index 1 is right-side padding
	vector<int> padding(2);

	// space left for padding
	diff = SCR_WIDTH - str.length();

	right = left = diff / 2;

	padding[LEFT] = left;
	padding[RIGHT] = right;

	return padding;
}

UIUtils::hashmap UIUtils::printCenteredHeader(vector<string> headers)
{
	hashmap m;

	int seps, spaceLeft, perCol;

	seps = headers.size() + 1;
	spaceLeft = SCR_WIDTH - seps;
	perCol = spaceLeft / headers.size();

	for (vector<string>::size_type i = 0; i < headers.size(); i++)
	{
		m[headers[i]] = (perCol - headers[i].length()) / 2;
	}

	return m;
}

vector<int> UIUtils::centredInColumn(string columnName, string text)
{
	vector<int> r;
	return r;
}

void UIUtils::printCentered(string str)
{
	std::vector<int> padding = paddingForCenter(str);

	cout << string(padding[LEFT], ' ')
		<< str
		<< string(padding[RIGHT], ' ') << endl;
}

void UIUtils::printRow(structs::Company c, bool header)
{
	if (header)
	{
		cout << "|  "
			<< "name" << "  |  "
			<< "city" << "  |  "
			<< "country" << "  |  "
			<< "employees" << " |  "
			<< endl;

		cout << string(SCR_WIDTH, '-') << endl;
	}



	// cout << 
}

void printRow(structs::Employee e, bool header)
{

}

void UIUtils::printPadding()
{
	cout << string(SCR_WIDTH, '-') << endl;
}