#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::string;

struct football{ 
    int playerNumber=0;
    float playerTopSpeed=0;
    string pos = "none"; //variable for storing enum input later
};

enum teamPosition {g='g', d='d', w='w', s='s', m='m' }; //declares and intialises enums

int main()
{
    football player1; //declare player1 struct
    football player2; //declare player2 struct
    teamPosition player1Pos=g; //default variable for enum declaration
    teamPosition player2Pos=g;
    char posInput; //container for user input for position char
    


    cout << "Football team census. Please Enter your team details\n";
    cout << " ****************************************************\n";

    for (int i = 1; i < 3; i++) { //1 iteration of loop enters details of player1, second of player 2
        if (i == 1) { //first iteration of loop for player1 details
            cout << "\nPlayer 1, Enter your team number: "; cin >> player1.playerNumber;
            cout << "\nEnter your top speed: "; cin >> player1.playerTopSpeed;
            cout << "\nEnter the first letter of your position in the team (g, d, w, s, m): "; cin >> posInput; //char input for storing player position before converting

            p1PosInput = tolower(posInput);//all inputs are made lowercase so user mayt enter capital letters

            teamPosition pos = static_cast<teamPosition>(posInput);//changes char of p1PosInput to enum int

            switch (player1Pos) //converts the enum entry into the string for the structure, allowing storage in structure, prepped for output
            {
            case g:
                player1.pos = "Goalie";
                break;
            case d:
                player1.pos = "Defender";
                break;
            case w:
                player1.pos = "Winger";
                break;
            case s:
                player1.pos = "Striker";
                break;
            case m:
                player1.pos = "Midfielder";
                break;
            default:
                "Letter does not correspond";
                break;
            }//switch
        }//if

        else if (i == 2) {
            cout << "\nPlayer 2, Enter your team number: "; cin >> player2.playerNumber;
            cout << "\nEnter your top speed: "; cin >> player2.playerTopSpeed;
            cout << "\nEnter the first letter of your position in the team (g, d, w, s, m): "; cin >> posInput;//char input for storing player position before converting

            posInput = tolower(posInput);//all inputs are made lowercase so user mayt enter capital letters

            teamPosition player2Pos = static_cast<teamPosition>(posInput);//changes char of p2PosInput to enum int

            switch (player2Pos)//converts the enum entry into the string for the structure, allowing storage in structure, prepped for output
            {
            case g:
                player2.pos = "Goalie";
                break;
            case d:
                player2.pos = "Defender";
                break;
            case w:
                player2.pos = "Winger";
                break;
            case s:
                player2.pos = "Striker";
                break;
            case m:
                player2.pos = "Midfielder";
                break;
            default:
                "Letter does not correspond";
                break;
            }//switch
        }//if
        }//for

    //final Output
    cout << "\nPlayer details form:\n";
    cout << "*********************\n";
    cout << "\n Player1's details\n Team Number is " << player1.playerNumber << ".\n Their top speed is " << player1.playerTopSpeed << "KM/H\n Their Position is " << player1.pos;
        cout << "\n\n Player2's details\n Team Number is " << player2.playerNumber << ".\n Their top speed is " << player2.playerTopSpeed << "KM/H\n Their Position is " << player2.pos;
}


    

