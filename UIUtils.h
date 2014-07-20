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
	const static int LEFT = 0;

	// padding index for the righthand side
	const static int RIGHT = 1;

	// returns padding from both side depending string length
	static vector<int> paddingForCenter(string str);

	static hashmap printCenteredHeader(vector<string> headers);

	static vector<int> centredInColumn(string columnName, string text);

public:

	// prints text in the center of the console
	static void printCentered(string str);

	static void printRow(structs::Company c, bool header = false);

	static void printRow(structs::Employee e, bool header = false);

	static void printPadding();
};