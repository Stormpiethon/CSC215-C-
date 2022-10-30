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
int stageThree();
string stageFour();
string stageFive();
void funeralAttire(string item1, string item2, int item3, string item4, string item5);
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

string stageOne() {
	// Create a scenario to describe the options that the user has to choose between for this stage
	cout << "\nWhat do you want to do for your first day?" << endl;
	cout << "\t\nHere are your options. . ." << endl;
	cout << "\nOPTION 1: You ask a random person for anything to wear that they could spare." << endl;
	cout << "\nOPTION 2: You wait it your room for something to happen." << endl;
	cout << "\nOPTION 3: You decide to become a rebel and attend a local punk-rock concert with your limited time left to live." << endl;
	cout << "\n\n You can type: 1, 2, or 3. Choose now silly rabbit: ";

	// Creat a variable to store the choice that the user made in the first stage
	string stageOneChoice;

	// Create a variable to store the name of the item gained by the stageOneChoice
	string stageOneItem;

	// Get the user's input and save it in the stageOneChoice variable
	getline(cin, stageOneChoice);

	if (stageOneChoice == "1")
	{
		cout << "\nThe randome person gives you a pair of dirty, very smelly pants." << endl;
		stageOneItem = "pair of dirty, smelly pants.";
	}
	else if (stageOneChoice == "2")
	{
		cout << "\nAn owl flys into your room with a bag hanging from its beak. It drops the bag to you and you open it to find a Wizard Hat!" << endl;
		stageOneItem = "wizard hat.";
	}
	else if (stageOneChoice == "3")
	{
		cout << "\nYou jump around at the rock concert and get your ass-kicked in the mosh pit. You awaken from your whoopin to find a pair of fingerless gloves " << endl;
		cout << "\non the ground by you. You take them as a souvenir" << endl;
		stageOneItem = "pair of fingerless gloves.";
	}
	else
	{
		cout << "\nYou chose poorly and wasted the whole day, and gained nothing to wear, except a regretful look in your eyes." << endl;
		stageOneItem = "regretful look in the eyes.";
	}
	
	return stageOneItem;
}

// Call the second stage function
string stageTwo() {
	cout << "\nWhat do you want to do on your second day?" << endl;
	cout << "\t\nHere are your options. . ." << endl;
	cout << "\nOPTION 1: You can sigh deeply and wander to the local coffee shop to harass the employees." << endl;
	cout << "\nOPTION 2: You can go steal a car from someone as you pretend to be a valet worker." << endl;
	cout << "\nOPTION 3: You can call your family to see if they have anything to give you in your final days." << endl;
	cout << "\n\n You can type: 1, 2, or 3. Choose now silly rabbit: ";

	// Create a string variable to store the value of the user's choice
	string stageTwoChoice;

	// Create a string variabel to store the value of the item the user gains
	string stageTwoItem;

	// Get the user's input for the stage and store it in a variable to use in our if, else loop
	getline(cin, stageTwoChoice);


	if (stageTwoChoice == "1")
	{
		cout << "\nWhile harassing employees at the local coffee shop you get searing hot coffee thrown in your face. You are now burned!" << endl;
		stageTwoItem = "horribly burnt face";
	}
	else if (stageTwoChoice == "2")
	{
		cout << "\nYou drive the vehicle that you stole around until it runs out of gas and you take the air freshener as a momento necklace" << endl;
		stageTwoItem = "green air freshener necklace.";
	}
	else if (stageTwoChoice == "3")
	{
		cout << "\nAfter you call your family, your closest relative shows up to give you a gift. They give you a pair of clown shoes." << endl;
		stageTwoItem = "pair of clown shoes";
	}
	else
	{
		cout << "\nYou chose poorly and wasted the whole day, and gained nothing to wear, except useless embarassment in your posture." << endl;
		stageTwoItem = "posture of embarassment";
	}
	return stageTwoItem;
}

// call the third stage function
int stageThree() {
	cout << "\nWhat do you want to do on your third day?" << endl;
	cout << "\nBefore you even get a chance to decide, a man knocks on your door and has an offer for you. . ." << endl;
	cout << "\nHe is giving out free door-to-door tattoos! But all he has the ink left to do is a tattoo of a number" << endl;
	cout << "\nThe location of the tattoo is going to be a surptise, but you get to choose between three numbers." << endl;
	cout << "\nOPTION 1: 100" << endl;
	cout << "\nOPTION 2: 13" << endl;
	cout << "\nOPTION 3: 777" << endl;
	cout << "\n\n You can type: 1, 2, or 3. Choose now silly rabbit.";

	string stageThreeChoice;

	// Create a string variabel to store the value of the item the user gains
	int stageThreeItem;

	// Get the user's input for the stage and store it in a variable to use in our if, else loop
	getline(cin, stageThreeChoice);


	if (stageThreeChoice == "1")
	{
		cout << "\nThe tattoo artist puts the number one hundred on your neck!" << endl;
		stageThreeItem = 100;
	}
	else if (stageThreeChoice == "2")
	{
		cout << "\nThe tattoo artist puts the number thirteen on your neck!" << endl;
		stageThreeItem = 13;
	}
	else if (stageThreeChoice == "3")
	{
		cout << "\nThe tattoo artist puts the number seven-hundred and seventy seven on your neck!" << endl;
		stageThreeItem = 777;
	}
	else
	{
		cout << "\nYou couldn't decide which one to choose so the artist chose for you. He tattoos a zero on your neck." << endl;
		stageThreeItem = 0;
	}
	return stageThreeItem;
}

// call the fourth stage function
string stageFour() {
	cout << "\nWhat do you want to do on your fourth day?" << endl;
	cout << "\t\nHere are your options. . ." << endl;
	cout << "\nOPTION 1: You can go and shout at the sky demanding answers from God." << endl;
	cout << "\nOPTION 2: You can go try to find someone to have intimate relations with before you die at the seedy part of town." << endl;
	cout << "\nOPTION 3: You can go get drunk as a skunk at the local irish bar." << endl;
	cout << "\n\n You can type: 1, 2, or 3. Choose now silly rabbit.";

	// Create a string variable to store the value of the user's choice
	string stageFourChoice;

	// Create a string variabel to store the value of the item the user gains
	string stageFourItem;

	// Get the user's input for the stage and store it in a variable to use in our if, else loop
	getline(cin, stageFourChoice);


	if (stageFourChoice == "1")
	{
		cout << "\nIn response for your demand for answers you are struck by a bolt of lightning and now your hair is permanently standing straight up." << endl;
		stageFourItem = "crazy electrocuted hairstle.";
	}
	else if (stageFourChoice == "2")
	{
		cout << "\nFor your adventure you get what you were looking for, but you have lipstick all over your own lips." << endl;
		stageFourItem = "crazy amount of purple lipstick on.";
	}
	else if (stageFourChoice == "3")
	{
		cout << "\nWaking up hung-over, you realize you have a black eye and you smell like whiskey." << endl;
		stageFourItem = "black eye and a whiskey aroma.";
	}
	else
	{
		cout << "\nYou wasted the whole day being confused and now you are missing chunks of your hair that you have pulled out in your mania." << endl;
		stageFourItem = "series of bald spots on your head.";
	}
	return stageFourItem;
}

// call the fifth stage function
string stageFive() {
	cout << "\nWhat do you want to do on your FINAL day?" << endl;
	cout << "\t\nHere are your options. . ." << endl;
	cout << "\nOPTION 1: You can call your childhood friend to say goodbye." << endl;
	cout << "\nOPTION 2: You can go try to kill someone else to make yourself feel better" << endl;
	cout << "\nOPTION 3: You can enjoy your favorite meal and watch the sun set." << endl;
	cout << "\n\n You can type: 1, 2, or 3. Choose now silly rabbit.";

	// Create a string variable to store the value of the user's choice
	string stageFiveChoice;

	// Create a string variabel to store the value of the item the user gains
	string stageFiveItem;

	// Get the user's input for the stage and store it in a variable to use in our if, else loop
	getline(cin, stageFiveChoice);


	if (stageFiveChoice == "1")
	{
		cout << "\nUpon calling your longest known friend you find that they have passed away. You have a heart attack." << endl;
		stageFiveItem = "heart attack.";
	}
	else if (stageFiveChoice == "2")
	{
		cout << "\nYou try to murder someone with a knife only to find out they are trained in nijitsu. You bleed to death from stab wounds." << endl;
		stageFiveItem = "large amount of knife wounds.";
	}
	else if (stageFiveChoice == "3")
	{
		cout << "\nYou enjoy a large and hearty meal by yourself. You then go for a long walk and watch the sun set from a local mountain." << endl;
		stageFiveItem = "long fall down a mountain.";
	}
	else
	{
		cout << "\nNot knowing what to do, and hoping to avoid your fate, you choose to do nothing and see what happens." << endl;
		stageFiveItem = "case of boredom.";
	}
	return stageFiveItem;
}

// Call the final funeral attire function that will compile all of the items gathered in the stages and put them into a text explaination of how you look in
// your casket. I am passing in 4 strings and 1 integer that have all been returned to the variables in the main function by the stage functions.
void funeralAttire(string item1, string item2, int item3, string item4, string item5)
{
	// Compile all of the gathered values from the different stages into a short summary of the way that the user is dressed for their funeral
	cout << "\nYou fall into a fitful sleep after your five days of galivanting about" << endl;
	cout << "\nYour spirit leaves your body. . . The next thing you know, you are a ghost floating above an open casket" << endl;
	cout << "\nYou see all of the people that you know gathered around the casket. Inside the ornate box, is you!" << endl;
	cout << "\nYou are dead. Peaceful and smiling. Wearing. . . very specific things that were said to be the way you were found." << endl;
	cout << "\nFrom your first day of searching for funeral attire you now wear a " << item1 << endl;
	cout << "\nFrom your second day of searching for something to wear when you are dead, you are adorned with a " << item2 << endl;
	cout << "\nOn your neck there is a tattoo of the number " << item3 << " no one really knows why or how you got this tattoo." << endl;
	cout << "\nAfter the fourth day of preparing yourself for death, evidence of your activities is shown through a " << item4 << endl;
	cout << "\nYou have passed away from a " << item5 << endl;
}

// Exit the game
void exit_game()
{
	// Exit the game text display
	cout << "\nThank you for trying to look cool when you die" << endl;
	cout << "\nIt was never possible. . . But it was fun to watch you try!" << endl;
}
