#include <string>
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
	const static int LEFT = 0;
	const static int RIGHT = 1;

	static void printCenter(string str)
	{
		std::vector<int> padding = paddingForCenter(str);

		cout << string(padding[LEFT], ' ')
			<< str
			<< string(padding[RIGHT], ' ') << endl;
	}
};