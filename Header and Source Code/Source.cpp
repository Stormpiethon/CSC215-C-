// Create a text adventure game simulation
// Add libraries
#include <iostream>
#include <string>
#include "GameIntro.h"
#include "GamePlay.h"
#include "ExitGame.h"
using namespace std;

// Create the function that every C++ program starts with
// Notice the parts of a function signature
// int main() is the function signature
// int is the return type (integer)
// main is the name of the function
// () is the parameter list. . . it is zero to many parameters
// {} is the function body and called the scope operators
int main()
{
	// Here is my list of variables to use as containers for the values gained from each individual function
	string userName;
	string stageOneItem;
	string stageTwoItem;
	int stageThreeItem{};
	string stageFourItem;
	string stageFiveItem;

	// Call the display introduction function
	display_title();


	userName = get_user_name();

	// Call the welcome user by name function
	welcome_user_by_name(userName);

	// Call the first stage function
	// In this scenario the player has to pick a direction to find clothes to wear once dead
	stageOneItem = stageOne();

	// Call the second stage function
	stageTwoItem = stageTwo();

	// call the third stage function
	stageThreeItem = stageThree();

	// call the fourth stage function
	stageFourItem = stageFour();

	// call the fifth stage function
	stageFiveItem = stageFive();


	// Call the final compilation function
	// The values shown to be passed in here are named differently when being used within the function itself
	funeralAttire(stageOneItem, stageTwoItem, stageThreeItem, stageFourItem, stageFiveItem);

	// Call the exit game function
	exit_game();
	return 0;
}
