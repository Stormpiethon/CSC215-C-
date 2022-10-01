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

// This is the main function where the program starts.
int main()
{
	// Display a title for the user
	std::cout << "\n\n\t\t *** Meet the Professor! *** \n\n";

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

	// Print out the contents of our array
	std::cout << "\n The possible professors that could visit your classroom are: \n\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << professor[i] << "\n";
	}
	std::cout << "\n End of List\n\n";

	// Wait for the user to press a key before continuing.
	std::cout << "\n Once you have looked at the list, ";
	system("pause");

	// Now let's ask the user to pick a professor.
	// Store the user's guess as an integer value
	std::cout << "\n\n Please enter the number of the pressor you guess will visit your classroom: ";
	int guess;
	std::cin >> guess;

	// Display the professor that the user guessed.
	std::cout << "\n You guessed that Prof. " << professor[guess - 1] << " will visit your classroom.\n\n";
	std::cout << "\n Let's see if you are correct!\n\n";

	// Wait for the user to press a key before continuing.
	std::cout << "\n Once you are ready for the prefessor to come into your classroom ";
	std::cout << "\nand have the bell ring to let the students know that the professor is here. . .";
	system("pause");

	// Let's ring the bell
	std::cout << "\n\n\t\t *** BELL RINGS *** \n\n\a";
	
	// Now lets randomly pick a professor
	// We will use the rand() function to generate a random number.
	// We will use the srand() function to seed the random number generator.
	// We will use the time() function to get the current time.
	// We will use the % operator to get a remainder.
	// We will use the + operator to add the two numbers together.
	// We will use the = operator to assign a value to a variable.
	// Generate a random number 0-9
	// Seed the random number generator
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

	// End the user experience
	std::cout << "\n\n\t\t *** Thanks for Visiting UAT! *** \n\n";

	//  Exit the program here 
	return 0;
}

