#pragma once
#include <iostream>

int higherOfTwoInts(int param1, int param2) {
	if (param1 > param2) {
		return param1;
	}
	else {
		return param2;
	}
}
int higherOfThreeInts(const int x, const int y, const int z)
{
	return higherOfTwoInts(x, higherOfTwoInts(y, z));
}
