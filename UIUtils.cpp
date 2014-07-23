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
	int spacePerCol;

	spacePerCol = SCR_WIDTH / headers.size();

	for (vector<string>::size_type i = 0; i < headers.size(); i++)
	{
		m[headers[i]] = (spacePerCol - headers[i].length()) / 2;
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

void UIUtils::printHeader(hashmap headers)
{
	int totalLength = 0;

	for (const auto& item : headers)
	{
		string h = item.first;
		int pad = item.second;

		cout << string(pad, ' ') << h << string(pad, ' ');

		totalLength += pad * 2 + h.length();
	}

	// as some string produce odd paddings
	// there might not be enough padding on the right
	cout << string((totalLength < SCR_WIDTH) ? SCR_WIDTH - totalLength : 0, ' ');

	cout << string(SCR_WIDTH, '-') << endl;
}

void UIUtils::printHeader(structs::Company c)
{
	hashmap headers = printCenteredHeader(consts::companyHeaders);
	printHeader(headers);
}

void UIUtils::printHeader(structs::Employee e)
{
	hashmap headers = printCenteredHeader(consts::employeeHeaders);
	printHeader(headers);
}

void UIUtils::printRow(structs::Company c, bool header)
{}

void printRow(structs::Employee e, bool header)
{}

void UIUtils::printPadding()
{
	cout << string(SCR_WIDTH, '-') << endl;
}