#include <iostream>
using namespace std;

//prototype functions
void welcome();
void drawHangMan();
int play();
void displayAnswer();
void invertHangMan();
void walkMan();
//global variables
int guesses = 3;
char input;

int main()
{
	welcome();

	for (guesses; guesses > 3; guesses--) {
		drawHangMan();
		cout << "Guess the missing letter in Yo_bee : ";
		cin >> input;
	}

	if (input == 'o') {
		walkMan();
	}
	else


}

//welcome message, displays only intially
void welcome() {
	cout << "Welcome to play hangman. This game is to check your spelling skill" << endl;
	cout << "-------------------------------------------------------------------" << endl;
}

//Hang man to display during game, unchanged while player still has guesses and hasn't one
void drawHangMan() {
	cout << "   ____" << endl;
	cout << "  |    |" << endl;
	cout << "  |    o" << endl;
	cout << "  |   \\|/" << endl;
	cout << "  |    |" << endl;
	cout << "  |   / \\ " << endl;
	cout << "  |" << endl;
	cout << "  |" << endl;
	cout << "-----" << endl;
}

//mechanics 
int play() {
	return 0;
}

//displays answer after win or lose
void displayAnswer() {

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

//display if user wins
void walkMan() {
	cout << "Your guess is correct";
	cout << " o" << endl;
	cout << "\\|/" << endl;
	cout << " |" << endl;
	cout << "/ \\" << endl;
}
