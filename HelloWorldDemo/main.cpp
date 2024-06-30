#include <iostream>
#include "Character/CharacterFuncs.h"
#include "Math/customMath.h"
#include<array> 
#include <thread>
#include <string>

using namespace std;




int main()
{
	unsigned int demoArray[10], arrSize{};

	cout << "\ntotal size of Array: " << endl;

	const int target = 100;
	int Char1PowerLevel{ 9000 }, CharTwoPowerLevel{ 9000 };
	bool bEquallyMatched = customMath::isEqual(Char1PowerLevel, CharTwoPowerLevel);


	int hitsallowed(10), hitdamage(10), hitsTaken(0), health(100), currentPoints(0);
	bool isDead = health > 20;

	for (int i = 0; i < hitsallowed; i++) {
		health -= hitdamage;
		hitsTaken++;
		cout << "Damage Taken: " << hitsTaken << endl;;
		demoArray[i] = hitsTaken;

		if (bEquallyMatched) {
			cout << "The Fight ended in a tie\n And the crowd goes mad!" << endl;
		}

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
	for (auto x : demoArray) {
		cout << x << sizeof(demoArray) << endl;
	}
	cout << "\n You died but... Health regeneration gave you: " << health << endl;
	cout << "Points collected from battle: " << currentPoints << endl;
	return 0;
}



