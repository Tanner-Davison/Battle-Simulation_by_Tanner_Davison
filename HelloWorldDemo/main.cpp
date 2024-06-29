#include <iostream>
#include "Header1.H"
#include <thread>
#include <string>
using namespace std;


void hello()
{
	cout << "Hello World" << endl;
}

int addTogether(int Param1, int Param2)
{
	return (Param1 + Param2);
}
int greatestOfTwoInts(int Param1, int Param2);

int greaterOfThree(int x, int y, int z);

int main()
{
	/*const int target = 100;
	int hitsAllowed(10), hitDamage(10), hitsTaken(0), health(100);

	for (int i = 0; i < hitsAllowed; i++) {
		health -= hitDamage;
		hitsTaken++;
		cout << "stop hitting yourself" << endl;;
		if (health <= 0)
		{
			cout << "YOUR DEAD" << endl;
		}
	}
	if (health <= 0)
	{
		cout << "\nyou died" << endl;
	}
	else {
		cout << "\nstill in the game" << endl;
		cout << "hits Taken : " << hitsTaken << endl;
		cout << "Remaining Health: " << health << endl;
	}*/


	int greatest = greaterOfThree(100, 80, 1299);
	cout << greatest << endl;


	return 0;
}
int greaterOfThree(int x, int y, int z) {
	return greatestOfTwoInts(x, greatestOfTwoInts(y, z));
}

int greatestOfTwoInts(int Param1, int Param2) {
	if (Param1 > Param2) {
		return Param1;
	}
	else {
		return Param2;
	}
}

