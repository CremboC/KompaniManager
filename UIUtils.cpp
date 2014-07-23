#include "stdafx.h"

#include "UIUtils.h"

vector<int> UIUtils::paddingForCenter(string str)
{
	unsigned short int left, right, diff;

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
	unsigned short int spacePerCol;

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

void UIUtils::printHeader(hashmap headers)
{
	unsigned short int totalLength = 0;

	for (const auto& item : headers)
	{
		string h = item.first;
		int pad = item.second;

		cout << x(pad, ' ') << h << x(pad, ' ');

		totalLength += pad * 2 + h.length();
	}

	// as some string produce odd paddings
	// there might not be enough padding on the right
	cout << x((totalLength < SCR_WIDTH) ? SCR_WIDTH - totalLength : 0, ' ');

	cout << x(SCR_WIDTH, '-') << endl;

	printedLines++;
}

void UIUtils::printCentered(string str)
{
	std::vector<int> padding = paddingForCenter(str);

	cout << x(padding[LEFT], ' ')
		<< str
		<< x(padding[RIGHT], ' ') << endl;

	printedLines++;
}

void UIUtils::printHeader(vector<string> headersVector)
{
	vector<string>::iterator it;
	it = headersVector.begin();

	headersVector.insert(it, "#");

	hashmap headers = printCenteredHeader(headersVector);
	printHeader(headers);
}

void UIUtils::printRow(structs::Company c)
{
	//cout << "abc" * 5;
}

void printRow(structs::Employee e)
{}

void UIUtils::printPadding(bool bottom)
{
	cout << x(SCR_WIDTH, '-') << endl;

	if (bottom)
	{
	}
}