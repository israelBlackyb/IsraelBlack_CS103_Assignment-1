// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void square();
void triangle();
void rectangle(int height, int width);
int calculateScore(int score);

int score=0;

int main()
{
    cout << "Welcome to guess the shape\n";
    cout << "**************************\n\n";
    cout << "Select from the following options: \n";
    cour << ""
}

void square() {
   
    for (int row = 1; row <= 12; ++row)
    {
        for (int col = 1; col <= 12; ++col)
        {
            cout << "# ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void triangle() {
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
    cout << "\n\n";
}

void rectangle(int height, int width) {
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

int calculateScore(int score) {
    return score += 10;
}