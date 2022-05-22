#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int sum=0;
int* ptr; //pointer

void sumFunc();

int main()
{
   int arr[5]{1,2,3,4,5 }; 
    

    cout << "Enter array elements" << endl; //ask for user input
    for (int i = 0; i < 5; i++) //iterates through array for user input
    {

        cin >> arr[i]; //user input corrosponds with iteration of loop

        if (arr[i] < 0) { //if user entry is a negative
            arr[i] = 0; //resets value of entry
            i--; //resets iteration  so user can choose new number
            cout << "\nNumber is negative, please reenter a positive number\n";
        }
        
    }
    ptr = arr;//assigns array to pointer

    sumFunc();

}

void sumFunc() {
    for (int i = 0; i < 5; i++) {
        sum = sum + *(ptr + i); //sum is the previous sum + derefrenced pointer and the element in position [i] of array
    }
    cout << "\n "<< sum;//outputs sum
}
