#pragma once

// order of params [health, boostedHealth (default: 15);
int boostHealth(int, int = 15);


// oder of params [currentPoints, pointBoost, multiplyBool (default: false), multiplier (default: 2)];  
int boostPoints(int, int = 15, bool = false, int = 2);

void playerStatus(int, int, int);

// takes in health, stamina, enemy health
bool moveAvailable(int, int, int);