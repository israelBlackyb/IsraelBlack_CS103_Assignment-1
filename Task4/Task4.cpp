#include <iostream>
#include <string.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void wordGen();
void drawHangman();
void invertHangMan();
void walkMan();
char play();
void line(int dashes);

string word;

int main()
{
	wordGen();
	int dashes = 66;
	string answer;
	cout << "\nWelcome to play HangMan. This game is to check your spelling skill." << endl;
	line(dashes);
	cout << endl;
	drawHangman();
	cout << "\nGuess the missing letter in "<< word<< ": ";
	answer = play();
	}

void wordGen() {
	string  wordList[5] = { "yoob_e","bett_r","corn_r", "lett_r", "plan_t" };
	srand(time(NULL));
	int RandIndex = rand() % 6; 
	word = wordList[RandIndex];
	}
	else


void line(int dashes)
{
	for (int i = 0; i < dashes; i++)
	{
		cout << "-";
}
}

void drawHangman()
{
	cout << "   ___ " << endl;
	cout << "  |   |" << endl;
	cout << "  |   o" << endl;
	cout << "  |  \\|/" << endl;
	cout << "  |   |" << endl;
	cout << "  |  / \\" << endl;
	cout << "  |" << endl;
	cout << "  |" << endl;
	cout << "-----" << endl;
}

void invertHangMan()
{
	cout << "   ___ " << endl;
	cout << "  |   |" << endl;
	cout << "  |   " << endl;
	cout << "  |  \\ /" << endl;
	cout << "  |   |" << endl;
	cout << "  |  \\|/" << endl;
	cout << "  |   o" << endl;
	cout << "  |" << endl;
	cout << "-----" << endl;
}

void walkMan()
{
	cout << "     o" << endl;
	cout << "    \\|/" << endl;
	cout << "     |" << endl;
	cout << "    / \\" << endl;
}

//displays answer after win or lose
void displayAnswer() {

char play()
{
	char guessLetter, realLetter;
	realLetter = 'e';
	for (int i = 0; i < 3; i++)
	{
		cin >> guessLetter;
		if (guessLetter == realLetter)
		{
			cout << "\nYour guess is correct!" << endl;
			walkMan();
			break;
		}
		else
		{
			if (i < 2)
			{
				cout << "\nSorry, Try again..." << endl;
			}
			else
			{
				cout << "\nYour guess is wrong" << endl;
				invertHangMan();
			}
}

//display when user runs out of guesses
void invertHangMan() {
	cout << "   ____" << endl;
	cout << "  |    |" << endl;
	cout << "  |   /|\\" << endl;
	cout << "  |    |" << endl;
	cout << "  |   /|\\ " << endl;
	cout << "  |    o" << endl;
	cout << "  |" << endl;
	cout << "-----" << endl;
}
	return(guessLetter);
}
