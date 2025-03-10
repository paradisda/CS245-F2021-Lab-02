/********************************************************************
 * AwardWinners.cpp :  
 * Program that randomly picks a movie for an award; makes use of 
 * string, vector, and random from the Standard Library.
 *
 * NOTE: This version of the program has numerous errors. 
 * Your job is to...
 *	1.) fix all bugs
 *	2.) commit your changes to your local Git repository
 *	3.) push your changes to your remote Git respository
 *	4.) submit a Pull Request to your instructor's Git project
 *
 ********************************************************************
 */

// Preprocessor directives
//CHANGE added <iostream>, <string>, and <vector>
#include "pch.h"
#include <iostream>
#include <random>
#include <String>
#include <vector>
//CHANGE added using vector, string, cout, and endl
using std::vector;
using std::string;
using std::cout;
using std::endl;



int main()
{
	// Create a vector of strings; add items using a list initializer
	//CHANGE changed String to string and added curl braces around the strings
	vector<string> movies = { "Godzilla vs Godzilla", "My Other Left Foot", "No Time to Sneeze", "Titanic 4: Citizens on Patrol" };

	// Add a 5th string to the end of the vector
	//CHANGE changed .add to .push_back
	movies.push_back("Thunder Force");

	// Announce the nominees
	//CHANGE  changed second >> to << insertion
	cout << "And the nominees for Best Picture are..." << endl;

	// Loop through the vector; print each vector element to console.
	//CHANGE added type (int) to i and changed .length to .size(), as well as .get to .at for movies
	for (int i = 0; i < movies.size(); i++)
	{
		cout << movies.at(i) << endl;
	}

	// Set up a random number generator seeder
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 0 to 4 (inclusive)
	std::uniform_int_distribution<int> rand_dist(0, 4);

	// Get the next random integer
	int pick_a_number = rand_dist(seed);

	// Get the item from the vector at the randomly-selected index
	//CHANGE changed String to string and .get to .at
	string winner = movies.at(pick_a_number);

	// Convert each charcter of the 'winner' string to UPPERCASE
	//CHANGE changed c to a reference that puts c toupper of what c is
	for (char &c : winner)
	{
		c = toupper(c);
	}

	// Print the UPPERCASE string
	cout << endl << "And the winner is..." << winner;

	return 0;
}

