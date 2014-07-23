#pragma once

#include <vector>
#include <iostream>
#include <unordered_map>

using std::string;
using std::vector;
using std::cout;
using std::endl;

using std::unordered_map;

class UIUtils
{
private:
	typedef unordered_map<string, int> hashmap;

	// padding index for the lefthand side
	const static unsigned short int LEFT = 0;

	// padding index for the righthand side
	const static unsigned short int RIGHT = 1;

	unsigned int printedLines;

	// returns padding from both side depending string length
	vector<int> paddingForCenter(string str);

	hashmap printCenteredHeader(vector<string> headers);

	vector<int> centredInColumn(string columnName, string text);

	void printHeader(hashmap);

	string x(int t, char c) { return string(t, c); };

public:

	// prints text in the center of the console
	void printCentered(string str);

	void printHeader(vector<string>);

	void printRow(structs::Company);

	void printRow(structs::Employee);

	void printPadding(bool bottom = false);

	unsigned int getPrintedLines()
	{
		return printedLines;
	}

	void resetPrintedLines()
	{
		printedLines = 0;
	}
};