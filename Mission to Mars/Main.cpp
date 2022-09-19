// Include the libraries we need for this Mars simulation program
// This will allow us to display to the screen and get user input
#include <iostream>
// This library will allow us to work with strings
#include <string>

// Prototype functions here
// A function signature is the return type, name, and parameters
// This function return type is void, meaning it does not return anything
void DisplayTitle();

// This function return type is string, meaning it returns a string
// Because it returns the userName
std::string GetUserName();

// This function will find water on Mars. It is the first scenario.
// In the simulation it will return health points
int FindWater(int health);
// This function will find shelter on Mars. It is the second scenario.
// In the simulation it will return health points
int FindShelter(int health);
// This function will determine what to do on the first night on Mars.
// In the simulation it will return health points
int Night1(int health);

// This is the main function of our program
// This is where the program will start
int main() //This line is the function signature
{ // This scope operator starts the function scope

	// This is the body of the function
	// This is where the code will be executed line by line
	 
	// Call the display title funtction
	DisplayTitle();

	// Create a string variable to hold the user name
	std::string userName;
	// Call the GetUserName function and store the returned value in a variable
	userName = GetUserName();

	// Welcome the user by name
	std::cout << "\nWelcome Commander " << userName << "!\n" << std::endl;
	// Display a mission description
	std::cout << "You are the commander of a space ship that is on a mission to Mars.\n" << std::endl;

	// Create a health variable and set it to 100
	int health = 100;
	// call the find water function and pass in the health variable
	health = FindWater(health);
	// Call the find shelter function and pass in the health variable
	health = FindShelter(health);
	// Call the night one function and pass in the health variable
	health = Night1(health);

	// Need to return an int from the main function
	// because of our return type
	return 0;
} // This scope operator ends the function scope

// This is the function definition for the DisplayTitle function
void DisplayTitle()
{ // This scope operator starts the function scope
	// This is the body of the function
	// This is where the code will be executed line by line
	// Display the title
	std::cout << "\n\n\n *** Mission to Mars ***\n";
	std::cout << "A Mars Simulation Program\n" << std::endl;
} // This scope operator ends the function scope

// This function gets the user name and returns it
std::string GetUserName()
{ // This scope operator starts the function scope
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
} // This scope operator ends the function scope

// This function will find water on Mars. It is the first scenario
// In the sim it will return health points
int FindWater(int health)
{
	// Display current health
	std::cout << "\nYour health is now " << health << " points.\n";

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
	// Display current health
	std::cout << "\nYour health is now " << health << " points.\n";
	// Return the user's health
	return health;
}

int FindShelter(int health)
{
	// Second scenario - finding shelter on Mars
	std::cout << "\nNext you and your crew need to seek out some form of shelter.\n";
	std::cout << "\nThe ship will not suffice for shelter for you and your crew.\n";
	std::cout << "\nYou see two possible places to check from where you are.\n";
	std::cout << "\nYou see a rocky canyon to the West.\n";
	std::cout << "\nYou also see a desert with what looks like a crater in the distance to the East.\n";

	// Create a variable to hold the user's choice
	// The dataype of the variable is std::string
	// The variable name is userChoice
	std::string userChoice;
	// Display a prompt to the user
	std::cout << "\nWhich direction do you want to explore? West or East? (type in w or e):";
	// Get the user's choice and store it in the variable userChoice
	std::getline(std::cin, userChoice);
	// Evaluate the user's choice
	if (userChoice == "w")
	{
		// User chose the best way
		std::cout << "\nYou travel West and start looking for a cave in the canyon\n";
		std::cout << "\nThe canyon is hard to traverse and you and your crew have to move slowly.\n";
		std::cout << "\nAfter searching for a while you don't find any caves\n";
		std::cout << "\nYour health has gone down 5 points from physical exertion\n";
		health = health -5;
	}
	else if (userChoice == "e")
	{
		// User chose the wrong way
		std::cout << "\nYou travel East into the desert towards the crater.\n";
		std::cout << "\nThe desert is extra tiring for you and the crew to travel.\n";
		std::cout << "\nYou arrive at the crater edge and don't see any shelter in sight.\n";
		std::cout << "\nYou lose 10 points of health from physical exertion\n";
		health = health - 10;
	}
	else
	{
		// catch all in case the user does not put in a valid choice
		std::cout << "\nYou did not enter a valid command for your crew\n";
		std::cout << "\nYou wander around in circles for a while and your crew gets even more dehydrated\n";
		std::cout << "\nYou lose 10 points of health!\n";
		health = health - 10;
	}
	// Display current health
	std::cout << "\nYour health is now " << health << " points.\n";
	// Return the user's health
	return health;
}

int Night1(int health)
{
	// Third scenario - The first night on mars
	std::cout << "\nAs the sun begins to set you and your crew have to decide wether to sleep outside or try\n";
	std::cout << "\nto return to the ship to sleep\n";
	std::cout << "\ntraveling back to the ship will be tiring and will mean back-tracking the next day.\n";
	std::cout << "\nSleeping outside will mean you can continue exploring the next day without wasting\n";
	std::cout << "\nvaluable, and limited, resources.\n";

	// Create a variable to hold the user's choice
	// The dataype of the variable is std::string
	// The variable name is userChoice
	std::string userChoice;
	// Display a prompt to the user
	std::cout << "\nWhich option do you want to take? Return to ship or Stay? (type in r or s):";
	// Get the user's choice and store it in the variable userChoice
	std::getline(std::cin, userChoice);
	// Evaluate the user's choice
	if (userChoice == "s")
	{
		// User chose the best way
		std::cout << "\nYou set up camp for the night near a small hill.\n";
		std::cout << "\nThe camp isn't as comfortable as the ship but you and the crew are happy to rest\n";
		std::cout << "\nYour health has gone down 5 points from less than ideal sleep\n";
		health = health - 5;
	}
	else if (userChoice == "r")
	{
		// User chose the wrong way
		std::cout << "\nYou and your crew travel back towards where the ship landed.\n";
		std::cout << "\nThe sun goes down while you are travelling and you have limited light source to guide you\n";
		std::cout << "\nYou and some members of your crew suffer minor injuries from falling in the darkness.\n";
		std::cout << "\nYou lose 10 points of health from physical damage\n";
		health = health - 10;
	}
	else
	{
		// catch all in case the user does not put in a valid choice
		std::cout << "\nYou did not enter a valid command for your crew\n";
		std::cout << "\nYou wander around in circles for a while and your crew gets even more dehydrated\n";
		std::cout << "\nYou lose 10 points of health!\n";
		health = health - 10;
	}
	// Display current health
	std::cout << "\nYour health is now " << health << " points.\n";
	// Return the user's health
	return health;
}


