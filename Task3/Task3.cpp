#include <iostream>

using std::cout;
using std::cin;

int A[3][3];
int B[3][3];
int C[3][3];
int result[3][3];
int i;
int j;
int multBy=3;


int main()
{
	//fill Matrix A
	cout << "Enter elements of array A:\n";
	for (i = 0; i < 3; i++) { //row
		for (j = 0; j < 3; j++) {//coloun
			cin >> A[i][j];

		}
		cout << "\n";
	}

	cout << "Contents of A are: \n";
	for (i = 0; i < 3; i++) {

		for (j = 0; j < 3; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}

	//Fill Matrix B
	cout << "\nEnter elements of array B:\n";
	for (i = 0; i < 3; i++) { //row
		for (j=0; j < 3; j++) {//coloumn
			cin >> B[i][j];

		}
		cout << "\n";
	}

	cout << "Contents of B are: \n";
	for (i = 0; i < 3; i++) {

		for (j = 0; j < 3; j++) {
			cout << B[i][j] << " ";
		}
		cout << "\n";
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	//Calculate Matrix C
	cout << "\nContents of C are: \n";
	for (i = 0; i < 3; i++) {

		for (j = 0; j < 3; j++) {
			cout << C[i][j] << " ";
		}
		cout << "\n";
	}

	//multiply Matrix C
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; i++) {
			result[i][j] += (C[i][j]) * 3;
			
		}
		
	}
	for (i = 0; i < 3; i++) {

		for (j = 0; j < 3; j++) {
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}

}