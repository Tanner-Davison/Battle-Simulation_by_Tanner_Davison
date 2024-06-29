#pragma once
#include <iostream>

using std::cout;

namespace dummy
{
	void greeting()
	{
		std::cout << "Hello Dummies!!" << std::endl;
	}
}
namespace smarty
{
	void greeting()
	{
		std::cout << "How's it going smarties!?" << std::endl;
	}
}
namespace tanner
{
	void greeting()
	{
		std::cout << "The truth is within you pal." << std::endl;
	}
}

namespace customMath
{
	int greatestOfTwoInts(int Param1, int Param2) {
		if (Param1 > Param2) {
			return Param1;
		}
		else {
			return Param2;
		}
	}
	int greaterOfThree(int x, int y, int z) {
		return greatestOfTwoInts(x, greatestOfTwoInts(y, z));
	}

}