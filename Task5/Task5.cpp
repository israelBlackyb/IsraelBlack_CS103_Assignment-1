#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;


void Square();
void Triangle();
void Rectangle(int height, int width);
int CalculateScore(int score);
void menu();
bool play();
void finalScore(int score);



int score = 0;
char userGuess;
bool nextTurn = true;
bool menuCont = true;

int main()
{
    
    cout << "Welcome to guess the shape\n";
    cout << "**************************\n\n";
    menu();
   
    }
//main

void Square() {

    for (int row = 1; row <= 12; ++row)
    {
        for (int col = 1; col <= 12; ++col)
        {
            cout << "# ";
        }
        cout << endl;
    }
    cout << "\nWhat is the shape?\Square (s)\nTriangle(t)\nReactangle(r)";

}

void Triangle() {
    for (int i = 1, k = 0; i <= 10; ++i, k = 0)
    {
        for (int j = 1; j <= 12 - i; j++)
        {
            cout << "  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    cout << "\nWhat is the shape?\nSquare (s)\nTriangle(t)\nReactangle(r)";
}

void Rectangle(int height, int width) {
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    cout << "\nWhat is the shape?\nSquare (s)\nTriangle(t)\nReactangle(r)";
}

int CalculateScore(int score) {
    return score += 10;
}

void menu() {
    char userOption;
    cout << "Select from the following options: \n";
    cout << "P. Play\nF. Final Score\nE. Exit\n";
    cin >> userOption;
    switch ((char)tolower(userOption))
    {
    case 'p':
       
        while (play() == true) {
            continue;
            cout << "Still going";
            
        }
       
    case 'f':

        finalScore(score);
        break;

    case 'e':
        exit;
        break;
    }
    ;
}

bool play() {
   
        srand(time(NULL));
        int RandIndex = (rand() % 3) + 1;

        switch (RandIndex)
        {
        case 1:
            Square();
            cin >> userGuess;

            if (userGuess == 's') {
                cout << "\nYou guessed right!\n";
                score = CalculateScore(score);
                return true;
            }

            else {
                
                return false;
            }

            break;
        case 2:
            Triangle();

            cin >> userGuess;

            if (userGuess == 't') {
                cout << "\nYou guessed right!\n";
                score = CalculateScore(score);
                return true;
            }

            else {
               
                return false;
            }
            break;

        case 3:
            Rectangle(7, 12);
            cin >> userGuess;

            if (userGuess == 'r') {
                
               score = CalculateScore(score);
                return true;
            }

            else {
               
                return false;
            }
            break;
        }
}
    

void finalScore(int score) {
    cout<< "\nScore: " << score <<"\n\n";
    menu();
}


