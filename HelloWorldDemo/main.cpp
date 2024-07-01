#include <iostream>
#include "Character/CharacterFuncs.h"
#include "Math/customMath.h"
#include "entity/EntityFunctions.h"
using namespace std;


void gameResults(int health, int enemyHealth, int stamina) {
	if (enemyHealth > 0 && enemyHealth <= health) {
		cout << "you did not kill the enemy but you escaped by the grace of your sword. \n Enemy Health Remaining: "
			<< enemyHealth << "\n Player Health Remaining : " << health << endl;
	}
	else if (health > enemyHealth) {
		cout << "Congrats! You won the battle!" << "\nRemaining Health : " << health << "\n Remaining Stamina : " << stamina << endl;
	}
	else {
		cout << "Youre a failure. You died in battle.";
	}
}

int main()
{

	const int target = 100;
	int Char1PowerLevel{ 9000 }, CharTwoPowerLevel{ 9000 };
	bool bEquallyMatched = customMath::isEqual(Char1PowerLevel, CharTwoPowerLevel);


	int hitsAllowed(10), hitdamage(10), hitsTaken(0), health(100), currentPoints(0), stamina(50);
	int enemyHealth(100);

	bool isDead = health > 20;
	bool attacking = true;
	do
	{
		cout << "do you want to attack?" << endl;
		char choice[4]{};
		int hitDamage[4]{ 10,20,30,50 };
		int hitChoice{};
		cin >> choice;
		playerStatus(health, stamina, hitsAllowed);
		if (string(choice) == "yes") {
			cout << "\nChoose Your Move : \n[\n 1 = Weak (Cost: 5 stamina),\n 2 = Medium (Cost: 10 stamina),\n 3 = Strong (Cost: 20 stamina),\n 4 = Godmode (cost: 30 stamina)  \n]" << endl;
			cin >> hitChoice;
			enemyHealth -= hitDamage[hitChoice - 1];

			if (hitChoice == 4) {
				stamina -= 25;
				hitsAllowed -= 1;
			}
			else if (hitChoice == 2) {
				stamina -= 10;
				hitsAllowed -= 1;
			}
			else if (hitChoice == 3) {
				stamina -= 20;
				hitsAllowed -= 1;
			}
			else if (hitChoice > 4) {
				cout << "INVALID CHOICE YOU DIED" << endl;
				break;
			}
			else {
				stamina -= 5;
				hitsAllowed -= 1;
			}

			playerStatus(health, stamina, hitsAllowed);

			cout << "\nFantastic Hit! " << endl;

			entityStatus(enemyHealth, 100);

			cout << "\nWould you like to atack again?" << endl;
		}
		else {
			playerStatus(health, stamina, hitsAllowed);
			entityStatus(enemyHealth, 100);
			break;
		}


	} while (moveAvailable(health, stamina, enemyHealth));

	gameResults(health, enemyHealth, stamina);



	const int rows = 3;
	const int cols = 4;


	int array[rows][cols] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
		cout << "---------" << endl;

	}
	for (int j = 0; j < cols; j++) {
		int columnSum = 0;
		for (int i = 0; i < rows; i++) {
			columnSum += array[i][j];
		}
		cout << columnSum << " ";
	}
	return 0;
}



