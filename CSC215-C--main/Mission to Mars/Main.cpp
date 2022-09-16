// Include the libraries we need for this Mars simulation program
// This will allow us to display to the screen and get user input
#include <iostream>
// This library will allow us to work with strings
#include <string>

// Prototype functions here
// A function signature is the return type, name, and parameters
// This function return type is void, meaning it does not return anything
void DisplayTitle();

// Create a string variable to hold the user name
// Call the get user name function
// Store the returned value in a variable
std::string GetUserName();
// This function will find water on Mars. It is the first scenario.
// In the simulation it will return health points
int FindWater(int health);

// This is the main function of our program
// This is where the program will start
int main() //This line is the function signature
{ // This cope operator starts the function scope

	// This is the body of the function
	// This is where the code will be executed line by line
	 
	// Call the display title funtction
	DisplayTitle();
	std::string userName;
	userName = GetUserName();

	// Welcome the user by name
	std::cout << "\nWelcome Commander " << userName << "!\n" << std::endl;
	// Display a mission description
	std::cout << "You are the commander of a space ship that is on a mission to Mars.\n" << std::endl;

	// Create a health variable and set it to 100

	}
	// Need to return an int from the main function
	// because of our return type
	return 0;
} //This scope operator ends the function scope

// This is the function definition for the DisplayTitle function
void DisplayTitle()
{
	// This is the body of the function
	// This is where the code will be executed line by line
	// Display the title
	std::cout << "\n\n\n *** Mission to Mars ***\n";
	std::cout << "A Mars Simulation Program\n" << std::endl;
	
}
// This function gets the user name and returns it
std::string GetUserName()
{
	// Get the user's name
	// Create a variable to hold the user's name
	// The datatype of the variable is std::string
	// The variable name is userName
	std::string userName;
	// Display a prompt to the user
	std::cout << "Welcome aboard, Please enter your name: ";
	// get the user's name and store it in the variable userName
	std::getline(std::cin, userName);
	// Return the user's name
	return userName;
}

int FindWater(int health)
{
	// Display current health


	// first scenario - Finding water on Mars
	std::cout << "\nOn the way to Mars the-water maker in your spaceship broke.\n";
	std::cout << "\nYour crew had to use the backup water supply, and have run out of water!\n";
	std::cout << "\nYour first mission . . . To find water on Mars.\n";
	std::cout << "\nYour spaceship lands safely on Mars.\n";
	std::cout << "\nYou and your thirsty crew exit the space ship and begin to explore Mars.\n";
	std::cout << "\nTo the North you hear waves crashing on a beach shore.\n";
	std::cout << "\nTo the South you hear a growling sound.\n";
	// Create a variable to hold the user's choice
	// The dataype of the variable is std::string
	// The variable name is userChoice
	std::string userChoice;
	// Display a prompt to the user
	std::cout << "\nWhich direction do you want to explore? North or South (type in n or s):";
	// Get the user's choice and store it in the variable userChoice
	std::getline(std::cin, userChoice);
	// Evaluate the user's choice
	if (userChoice == "n")
	{
		// User chose the best way
		std::cout << "\nYou travel North and find a large lake with fresh drinkable water on Mars!\n";
		std::cout << "\nYou found a water source and your crew is happy\n";
		std::cout << "\nYour health has gone up 20 points from drinking fresh water\n";
		health = health + 20;
	}
	else if (userChoice == "s")
	{
		// User chose the wrong way
		std::cout << "\nYou travel South and run into an angry creature that attacks your crew\n";
		std::cout << "\nYou lose 25 points of health!\n";
		health = health - 25;
	}
	else
	{
		// catch all in case the user does not put in a valid choice
		std::cout << "\nYou did not enter a valid command for your crew\n";
		std::cout << "\nYou wander around in circles for a while and your crew gets even more dehydrated\n";
		std::cout << "\nYou lose 10 points of health!\n";
		health = health - 10;
	}

