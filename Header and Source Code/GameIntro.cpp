#include <iostream>
#include <string>
using namespace std;

// Display the title of the game
void display_title()
{
	cout << "\n\n\t ***WELCOME TO THE LAST 5 DAYS OF YOU LIFE! ***\n" << endl;
}

// Get user input for their name
string get_user_name()
{
	// Create a variable to hold the user's name
	// This variable is local to this function and could have the same name as the variable in main
	string userName;
	// Prompt user input of their name
	cout << "\nWhat is your character's name? " << endl;
	// get the user's name and put it into the userName variable
	getline(cin, userName);

	// return the value of the user input as the variable userName
	return userName;
}

// Welcome the user by name
void welcome_user_by_name(string name)
{
	// Welcome the user by their input name
	cout << "\nWelcome " << name << " . . . You are going to die in 5 days!" << endl;
	cout << "\nHopefully you have a nice suit to wear for your funeral! . . . Just kidding we know you don't." << endl;
	cout << "\nIn the next five days you will have 3 options per day of activities that you can participate in." << endl;
	cout << "\nEach activity will reward you with some type of item to have with you in your casket when you die." << endl;
	cout << "\nWe really want you to look as stylish as possible! Choose wisely." << endl;
}