// Create a text adventure game simulation
// Add libraries
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
// This is declaring functions that will be used
// It shows their return type, and any parameters that we are passing in
void display_title();
string get_user_name();
void welcome_user_by_name(string name);
string stageOne();
string stageTwo();
string stageThree();
string stageFour();
string stageFive();
void funeralAttire();
void exit_game();


// Create the function that every C++ program starts with
// Notice the parts of a function signature
// int main() is the function signature
// int is the return type (integer)
// main is the name of the function
// () is the parameter list. . . it is zero to many parameters
// {} is the function body and called the scope operators
int main() 
{
	// Create a string variable to hold the user's name
	// This variable is local to main only
	// Other functions can have variables of the same name
	string userName;

	// Call the display introduction function
	display_title();

	// Call the function to get the user's name
	userName = get_user_name();

	// Call the welcome user by name function
	welcome_user_by_name(userName);

	// Call the first stage function
	// In this scenario the player has to pick a direction to find clothes to wear once dead
	stageOne();

	// Call the second stage function
	stageTwo();

	// call the third stage function
	stageThree();

	// call the fourth stage function
	stageFour();

	// call the fifth stage function
	stageFive();

	// Call the exit game function
	exit_game();
	return 0;
}

// Display the title of the game
void display_title()
{
	cout << "\n\n\t ***WELCOME TO THE LAST DAY OF YOU LIFE! ***\n" << endl;
}

// Get user input for their name
string get_user_name()
{
	// Create a variable to hold the user's name
	// This variable is local to this function and could have the same name as the variable in main
	string userGetName;
	cout << "\nWhat is your character's name? " << endl;
	// get the user's name and put it into the userName variable
	getline(cin, userGetName);
	
	// return the value of the user input as the variable userGetName
	return userGetName;
}

// Welcome the user by name
void welcome_user_by_name(string name)
{
	// Welcome the user by their input name
	cout << "\nWelcome " << name << " . . . You are going to die today" << endl;
	cout << "\nHopefully you have a nice suit to wear for your funeral!" << endl;
}

string stageOne(string stageOneChoice) {
	cout << "You need to find something to wear to your funeral, you are going to die!" << endl;
	cout << "What do you want to do for your first day?" << endl;
	cout << "" << endl;

	string stageOneChoice;
	getline(cin, stageOneChoice);

	if (stageOneChoice == "1")
	{
		cout << "TEXT" << endl;
		return 
	}
	else if (stageOneChoice == "2")
	{
		cout << "TEXT" << endl;
	}
	else if (stageOneChoice == "3")
	{
		cout << "TEXT" << endl;
	}
	else
	{
		cout << "You wasted the whole day and gained nothing" << endl;
	}

}

// Call the second stage function
string stageTwo() {
	cout << "TEXT" << endl;
}

// call the third stage function
string stageThree() {
	cout << "TEXT" << endl;
}

// call the fourth stage function
string stageFour() {
	cout << "TEXT" << endl;
}

// call the fifth stage function
string stageFive() {
	cout << "TEXT" << endl;
}

// Exit the game
void exit_game()
{
	// Exit the game text display
	cout << "\nThank you for trying not to die" << endl; 
	cout << "\nIt was never possible but it was fun to watch you try!" << endl;
}
