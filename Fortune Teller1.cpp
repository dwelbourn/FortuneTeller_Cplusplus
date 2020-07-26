/* Programmer: Drew Welbourn
Program: Fortune Teller
Purpose: Debunk Dionne Warwick*/

#include <iostream>
#include <cstdlib>

void horror(int);
void comedy(int);
void fortuneCookie(int);

using namespace std;

int main()
{

	int lnum;
	char topic, h, c, f, yes, Yes, answer2;
	

	cout << "We are going to play a game." << endl;

	cout << "Please tell me what is your lucky number?\n";
	cin >> lnum;
	cout << "\n";
	
	do
	{
		cout << "What type of fortune whould you like?" << endl;
		cout << "Enter \"h\" for horror, \"c\" for comedy or \"f\" for fortune cookie: ";
		cin >> topic;
		cout << "\n";

		// function selection
		
			if (topic == 'h')
				horror(lnum);
			else if (topic == 'c')
				comedy(lnum);
			else if (topic == 'f')
				fortuneCookie(lnum);
			else
			{
				cout << "You are going to die......" << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n....soon" << endl;
			}

			cout << "\n";
		

			cout << "Do you want to play again?: ";
		    cin >> answer2;

		
	}

	while (answer2 == 'y' || answer2 == 'Y');

	return 0;

	

	// functions for fortune selection

}
void horror(int lnum)
{
	int x;
	srand(lnum);
	x = rand() % 5 + 1; // Scales srand down to 1-5

	// Fortune Scenarios

	switch (x)
	{
	case 1:
		cout << "You realize you are at Crystal Lake." << endl;
		break;
	case 2:
		cout << "Alien Impregnates You." << endl;
		break;
	case 3:
		cout << "Freddy hugs you; you aren't in a dream." << endl;
		break;
	case 4:
		cout << "Teletubbies Come to Your House For Dinner." << endl;
		break;
	case 5:
		cout << "Donald Trump is elected President." << endl;
		break;


	}



}

void comedy(int lnum)
{
	int x;
	srand(lnum);
	x = rand() % 5 + 1; // Scales srand down to 1-5

	// Fortune Scenarios

	switch (x)
	{
	case 1:
		cout << "Donald Trump is elected president!" << endl;
		break;
	case 2:
		cout << "After deep thought you realize your favorite thing about Harry Potter movies is the casting." << endl;
		break;
	case 3:
		cout << "The world is invaded by Cybermen and you learn your mother is so inferior that when the Cybermen try to upgrade her they have to settle for Windows 3.1." << endl;
		break;
	case 4:
		cout << "You become a banker and later lose interest." << endl;
		break;
	case 5:
		cout << "You need to upgrade your phone and you buy an iPhone because you can't find the Droid you are looking for." << endl;
		break;


	}



}

void fortuneCookie(int lnum)
{
	int x;
	srand(lnum);
	x = rand() % 5 + 1; // Scales srand down to 1-5

	// Fortune Scenarios

	switch (x)
	{
	case 1:
		cout << "If you think you are going to sum up your whole life in this little program you are crazy." << endl;
		break;
	case 2:
		cout << "Someone has googled you recently." << endl;
		break;
	case 3:
		cout << "You will soon be very disappointed." << endl;
		break;
	case 4:
		cout << "The end is near and it's all your fault." << endl;
		break;
	case 5:
		cout << "Turn over to learn Chinese." << endl;
		break;


	}



}