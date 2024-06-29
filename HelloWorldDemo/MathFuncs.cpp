#pragma once
#include <iostream>

int higherOfTwoInts(int Param1, int Param2) {
	if (Param1 > Param2) {
		return Param1;
	}
	else {
		return Param2;
	}
}
int higherOfThreeInts(int x, int y, int z) {
	return higherOfTwoInts(x, higherOfTwoInts(y, z));
}