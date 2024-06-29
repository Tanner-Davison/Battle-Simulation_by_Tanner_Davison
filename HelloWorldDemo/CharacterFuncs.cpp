#include <iostream>

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