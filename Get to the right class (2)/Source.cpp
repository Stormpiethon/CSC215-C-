/*

	Alexander Brittain
	alebritt@uat.edu
	CSC215 - 2022

*/
// Let's include our libraries
// This allow us to do input and output to the console.
#include <iostream>
// This allows us to use strings.
#include <string>
#include "Source.h"

// Prototype functions
void displayIntro();
void classroomDisp(std::string  classroom[20]);
void dispProfessors(std::string  professor[10]);
void pickRandom(std::string  professor[10], int guess);


// This is the main function where the program starts.
int main()
{
	displayIntro();

	bool playAgain = false;
	do
	{ 
	// Create an array called professor with 10 elements of type string.
	std::string professor[10];

	// init Assign values to the array.
	// You are adding data to each element of the array.
	professor[0] = "1 Professor Hinton";
	professor[1] = "2 Professor Clark";
	professor[2] = "3 Professor Brokaw";
	professor[3] = "4 Professor Glover";
	professor[4] = "5 Professor Crusoe";
	professor[5] = "6 Professor Coddington";
	professor[6] = "7 Professor Smith";
	professor[7] = "8 Professor Hromas";
	professor[8] = "9 Professor Peters";
	professor[9] = "10 Professor Understiller";
	// Now the array is full of data, with no empty elements.

	dispProfessors(professor);

	// Now I will make an array of 20 classrooms
	std::string classroom[20];

	// init Assign values to the array.
	// You are adding data to each element of the array.
	classroom[0] = "1. Lobotomy 101";
	classroom[1] = "2. Pork chops 202";
	classroom[2] = "3. English 101";
	classroom[3] = "4. English 102";
	classroom[4] = "5. Spanish 101";
	classroom[5] = "6. Geology 131";
	classroom[6] = "7. lasers 301";
	classroom[7] = "8. Astronomy 101";
	classroom[8] = "9. Astronomy 301";
	classroom[9] = "10. History 201";
	classroom[10] = "11. Python 335";
	classroom[11] = "12. C++ 215";
	classroom[12] = "13. Communications 204";
	classroom[13] = "14. Palm reading 101";
	classroom[14] = "15. Chair operation 350";
	classroom[15] = "16. Self destruction 101";
	classroom[16] = "17. Human migration 303";
	classroom[17] = "18. Machine learning 201";
	classroom[18] = "19. Psychic flatulence 225";
	classroom[19] = "20. Currency and trade 305";
	// Now the array is full of data with no empty elements.

	classroomDisp(classroom);

	// Now let's ask the user to pick a classroom they think a professor will teach in today.
	// Store the user's guess as an integer value
	std::cout << "\n\n Please enter the number of the classroom that will have a professor in it: ";
	int guess;
	std::cin >> guess;

	// Display the classroom that the user guessed.
	std::cout << "\n You guessed that classroom number " << classroom[guess - 1] << " will have a professor in it.\n\n";
	std::cout << "\n Let's see if you are correct!\n\n";

	// Wait for the user to press a key before continuing.
	std::cout << "\n Once you are ready for the prefessor to come into your classroom and \n";
	std::cout << "\n have the bell ring to let the students know that the professor are all in new classrooms. . .";
	system("pause");

	// Let's ring the bell
	std::cout << "\n\n\t\t *** BELL RINGS *** \n\n\a";
	// ********************************************************* REMOVE THIS RETURN IT IS ONLY FOR TESTING ****************************************


	pickRandom(professor, guess);

	// End the user experience
	std::cout << "\n\n\t\t *** Thanks for Visiting UAT! *** \n\n";

	// ask the user if they would like to play again
	std::cout << "\n Would you like to try taking more classes to escape? (y/n): ";
	// Get the user input
	// Create a string to hold the user choice to play again
	std::string playAgainChoice;
	// this is the line that actually get the player input
	// and then it stores it in the playAgainChoice string variable
	getline(std::cin, playAgainChoice);
	// now that we have the play again choice, we need to evaluate it
	// to see if the user wants to play again
	if (playAgainChoice == "y" || playAgainChoice == "Y" || playAgainChoice == "yes" || playAgainChoice == "Yes")
	{
		// the user wants to play again
		playAgain = true;
		std::cout << "\n Looks like you haven't given up. . . Yet!  >:)   \n" << std::endl;
	}
	else
	{
		// we assume the user does not want to play again
		playAgain == false;
		std::cout << "\n Looks like you are stuck in college FOREVER!! \n" << std::endl;
	}
	} while (playAgain == true);

	//  Exit the program here 
	return 0;
}

void pickRandom(std::string  professor[10], int guess)
{
	//Now lets randomly pick a professor
	//We will use the rand() function to generate a random number.
	//We will use the srand() function to seed the random number generator.
	//We will use the time() function to get the current time.
	//We will use the % operator to get a remainder.
	//We will use the + operator to add the two numbers together.
	//We will use the = operator to assign a value to a variable.
	//Generate a random number 0-9
	//Seed the random number generator
	srand(time(NULL));
	int randomProfessor = (rand() % 10);
	// Display the random number
	std::cout << "\n\n The professor who walks into your classroom is: " << professor[randomProfessor] << "\n\n";

	// Evaluate to see if the user guessed the correct professor!
	if (guess == randomProfessor + 1)
	{
		// User guesses correctly
		std::cout << "\n Congratulations! You correctly guessed which professor would visit your classroom\n\n";
	}
	else
	{
		// User guesses incorrectly
		std::cout << "\n Sorry... You guessed incorrectly which professor would visit your classroom.\n\n";
	}
}

void classroomDisp(std::string  classroom[20])
{
	// print out the contents of our array
	std::cout << "\n\nThe classrooms that are available today are: \n\n";
	for (int i = 0; i < 20; i++)
	{
		std::cout << classroom[i] << "\n";
	}
	std::cout << "\n End of List \n\n";

	std::cout << "\n Once you have looked at the list of classrooms. . . ";
	system("pause");
}

void dispProfessors(std::string  professor[10])
{
	// Print out the contents of our array
	std::cout << "\n The professors that will be teaching today in classrooms are: \n\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << professor[i] << "\n";
	}
	std::cout << "\n End of List\n\n";

	// Wait for the user to press a key before continuing.
	std::cout << "\n Once you have looked at the list. . . ";
	system("pause");
}

void displayIntro()
{
	// Display the title of the program
	std::cout << "\n\n\t\t *** Get to the right class ***\n\n";

	// Display the rules of the simulation
	std::cout << "\n you are stuck in a time singularity at UAT! The only chance for escape is to get an A!\n";
	std::cout << "\n The professors keep warping in and out of random classrooms where they will teach a class to raise your grade. \n";
	std::cout << "\n You start out with a C as your grade. Your grade will rise, or fall, as you either attend classes or sit in an empty room. \n";
	std::cout << "\n You will guess a classroom that you think a professor may warp into, so that you can attend a class. \n";
	std::cout << "\n If a professor shows up in the same classroom as the one you choose, your grade goes up one letter.\n";
	std::cout << "\n Otherwise, your grade goes down. Get an A to escape. Get an F and be stuck forever and ever. . . \n";
	// Start here


	// Display the header for our professors
	std::cout << "\n\n\t\t *** Meet your Professors! *** \n\n";
}

