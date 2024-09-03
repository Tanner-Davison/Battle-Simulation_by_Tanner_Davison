#include <iostream>
using namespace std;

// default argument will be called if no arguments are passed;
int boostHealth(int currentHealth, int healthBoost = 15) {

	return currentHealth + healthBoost;
}
int boostPoints(int currentPoints, int pointBoost = 15, bool bMultiply = false, int multiplier = 2) {
	if (bMultiply) {
		return (currentPoints + pointBoost * multiplier);
	}
	else {
		return (currentPoints + pointBoost);
	}
}
void playerStatus(int health, int stamina, int hitsAllowed) {
	cout << "\nCurrent Player Status: \nHealth Remaining: " << health << "\nStamina Level: " << stamina << "\nMoves Left: " << hitsAllowed << endl;
}
bool moveAvailable(int health, int stamina, int enemyHealth) {
	if (health > 0 && stamina > 0 && enemyHealth > 0) {
		return true;
	}
	else {
		return false;
	}
}
