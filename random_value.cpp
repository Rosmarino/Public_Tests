#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomizer(int n)
{
	srand(time(0));
	int random =  (rand() % 20);
	return random;
}

int main ()
{
	int random = 0, input = 0;
	char playAgain = 'y';
	cout << "THE RANDOM GAME\n";
	while (playAgain == 'y') // While the players wants to keep playing
	{
		bool guessed = 0; //While the player hasn't guessed the number
		int triesLeft = 3;
		cout << "Guess a random value between 0 and 20\n" << "You have 3 tries\n" << "Ready or not, here it goes!\n";
		random =  randomizer (random); // The random number is generated
		while (!guessed && triesLeft)
		{
			cout << "Insert your guess:\n";
			cin >> input;
			triesLeft--;
			if (input == random) // Guessed right
			{
				cout << "Congratulation! You guessed the right number! Here's a free heart for you. <3\n";
				guessed = true;
			}
			else if (triesLeft) // Guessed wrong
			{
				if (input > random) //Inserted a bigger value
					cout << "The lucky number is smaller.\n";
				else
					cout << "The lucky number is bigger.\n";
			}
		}
		if (triesLeft == 0 && !guessed)
			cout << "GAME OVER\nThe number was " << random << endl;
		cout << "Do you still want to play? y / n\n\n";
		cin >> playAgain;
		while (playAgain != 'y' && playAgain != 'n')
		{
			cout << "Type 'y' to play again, 'n' to stop playing.\n\n";
			cin >> playAgain;
		}
	}
	return 0;
}
