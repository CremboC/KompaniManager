#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

#pragma once
class UIUtils
{
private:
	// padding index for the lefthand side
	const static int LEFT = 0;

	// padding index for the righthand side
	const static int RIGHT = 1;

	// returns padding from both side depending string length
	static vector<int> paddingForCenter(string str)
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

public:

	// prints text in the center of the console
	static void printCentered(string str)
	{
		std::vector<int> padding = paddingForCenter(str);

		cout << string(padding[LEFT], ' ')
			<< str
			<< string(padding[RIGHT], ' ') << endl;
	}

	static void printRow(structs::Company);
	static void printRow(structs::Employee);

	static void printPadding()
	{
		cout << string(SCR_WIDTH, '-') << endl;
	}
};