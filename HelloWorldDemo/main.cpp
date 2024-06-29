#include <iostream>
#include "MathFuncs.h"
#include "CharacterFuncs.h"
#include <thread>
#include <string>

using namespace std;



int main()
{
	const int target = 100;
	int hitsallowed(10), hitdamage(10), hitsTaken(0), health(100), currentPoints(0);

	for (int i = 0; i < hitsallowed; i++) {
		health -= hitdamage;
		hitsTaken++;
		cout << "Damage Taken: " << hitsTaken << endl;;
		if (health <= 0)
		{
			health = boostHealth(health);
			currentPoints = boostPoints(currentPoints);
			break;
		}
		else if (health <= 100)
		{
			cout << "\nRemaining Health: " << health << endl;

		}
		else {
			cout << "\nstill in the game" << endl;
			cout << "hits taken : " << hitsTaken << endl;
			cout << "remaining health: " << health << endl;
		}
	}
	cout << "\n You died but... Health regeneration gave you: " << health << endl;
	cout << "Points collected from battle: " << currentPoints << endl;
	return 0;
}



