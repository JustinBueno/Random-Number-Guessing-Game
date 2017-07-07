// Random Number Guessing Game
// Justin Mirabueno
// July 6, 2017
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>          // If you don't include this library an error will come up saying you didn't declare rand

using namespace std;

int main ()
{		
	int guess, randomNum;
	srand(time(0));
	randomNum = rand() % 100 + 1;
		cout << "I'm thinking of a number betweeen 0 and 100." << endl;
	do 
	{	cout << "Enter your guess?" << endl;
		cin >> guess;

		if (guess > randomNum)
			cout << "Too High. Try Again." << endl;
		else if (guess < randomNum)
			cout << "Too Low. Try Again." << endl;
			else
			cout << "Congratulations! You guessed my number!" << endl;
	}	while (guess != randomNum);
	return 0;
}
