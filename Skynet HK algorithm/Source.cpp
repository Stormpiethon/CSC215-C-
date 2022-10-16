// Skynet Hunter Killer algorithm for target acquisition
// include libraries
// iostream is for input and output to and from the console.
#include <iostream>

// Create our main function the entry point for every C++ program
int main()
{

	// Print out the title of the program
	std::cout << "\n\n\t *** Welcome to Skynet ***\n\n" << std::endl;
	// Print out instructions
	std::cout << " This is an automated program to find ground-based targets for the Hunter-Killer (HK) search system." << std::endl;
	std::cout << "\n The HK will be searching for enemies in a large area that has been divided into a grid with each section numbered." << std::endl;
	// The area will be a virtual 10 x 10 grid 
	// The target will be a random number from the grid

	// Seed a random number generator
	// This resets the seed so we always get a different random number sequence.
	srand(time(0));

	// Create the virtual grid of squares with a high and low number
	// The high number and low number are variables
	int searchGridHighNum = 100;
	int searchGridLowNum = 1;

	// Create a random location for the targe on our virtual target grid.
	// The size of the grid is 64 squares so we need a number between 1 and 64
	// The HK will not know this location, it will be hunting for it.
	int targetLocation = rand() % searchGridHighNum + searchGridLowNum;

	std::cout << "\n Skynet HK-Aerial Initializing Software . . . . .\n";

	// Create a variable to hold the number of target predictions the HK algorith makes before finding the target.
	int numPredictionsHK = 0;
	// Create a boolean variable to use in the simulation loop to determine if the target has been found.
	bool targetFound = false;

	// Start our main loop of the simulation
	while (targetFound == false)
	{



		// Software algorithm to predict the target location
		int targetLocationPrediction = ((searchGridHighNum - searchGridLowNum) / 2) + searchGridLowNum;
		// Check to see if the target location is higher or lower than the prediction
		std::cout << "\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		
		// Display the current search grid low and high numbers for the user.
		std::cout << "\n Current search grid lowest possible sector number: " << searchGridLowNum << std::endl;
		std::cout << "\n Current search grid highest possible sector number: " << searchGridHighNum << std::endl;
		std::cout << "\n\t HK-Aerial Radar Ping. " << targetLocationPrediction << std::endl;

		// Increase prediction count
		numPredictionsHK++;

		// Now we will evaluate the data from the radar ping.
		// If the target location prediction a.k.a. targetLocationPrediction
		// is higher than the actual target location a.k.a. targetLocation
		// then we need to increase the low number a.k.a. searchGridLowNum
		if (targetLocationPrediction > targetLocation)
		{
			// The target location prediction is higher than the actual target location.
			// So. . .decrease the high number of the search grid to reflect the numbers that can now be ruled out as possibilities.
			searchGridHighNum = targetLocationPrediction - 1;
			// Print out the new high number
			std::cout << "\n Target location prediction of " << targetLocationPrediction << " was higher than the actual location at " << targetLocation << std::endl;
			std::cout << "\n The new search grid high number is " << searchGridHighNum << std::endl;
			// Not how the search area has been reduced.
			std::cout << "\n The search area has been reduced.\n";
			std::cout << "\n Current search grid lowest possible sector number: " << searchGridLowNum << std::endl;
			std::cout << "\n Updated search grid highest possible sector number: " << searchGridHighNum << std::endl;

		}
		else if (targetLocationPrediction < targetLocation)
		{
			// The target location prediction is lower than the actual target location.
			// So. . .increase the low number of the search grid to reflect the numbers that can now be ruled out as possibilities.
			searchGridLowNum = targetLocationPrediction + 1;
			// Print out the new low number
			std::cout << "\n Target location prediction of " << targetLocationPrediction << " was lower than the actual location at " << targetLocation << std::endl;
			std::cout << "\n The new search grid low number is " << searchGridLowNum << std::endl;
			// Not how the search area has been reduced.
			std::cout << "\n The search area has been reduced.\n";
			std::cout << "\n Updated search grid lowest possible sector number: " << searchGridLowNum << std::endl;
			std::cout << "\n Current search grid highest possible sector number: " << searchGridHighNum << std::endl;

		}
		else if (targetLocationPrediction == targetLocation)
		{
			// The target location prediction now equals the actual target location
			// The HK has found the target.
			std::cout << "\n The actual location of the target was " << targetLocation << std::endl;
			std::cout << "\n Using our prediction algorithm, the HK was able to find the target in " << numPredictionsHK << " algorithm predictions " << std::endl;
			targetFound = true;
		}
		else
		{
			// Something has gone wrong with the software
			// Print out an error message.
			std::cout << "\n Error: Skynet HK-Aeria software has critically failed!" << std::endl;
			std::cout << "\n Please contact your local tech support administrator and prepare for termination." << std::endl;
			// Set the targetFound boolean to true to end the loop.
			targetFound = true;
		}

	}

	std::cout << "\n\n\t *** Skynet HK-Aerial has completed its search mission ***\n\n" << std::endl;
	system("pause");


	return 0;
}