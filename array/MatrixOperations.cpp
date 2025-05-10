#include <iostream>

using namespace std;

int main() {
	int row, col;
	cout << "Enter the row and colum of the matrix : ";
	cin >> row >> col;

	int matrix1[row][col], matrix2[row][col], trans[col][row];

	cout << "Enter the elements of first matrix : " << row * col << endl;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cin >> matrix1[i][j];
		}
		cout << endl;
	}

	cout << "Enter the elements for second matrix : ";
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cin >> matrix2[i][j];
		}
		cout << endl;
	}

	int choice;

	int sum[row][col];
	int sub[row][col];

	do {
		cout << "1. Matrix Addition" << endl;
		cout << "2. Matrix Subtraction" << endl;
		cout << "3. Matrix Transpose of first matrix " << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice : ";
		cin >> choice;
    switch (choice)
    {
    case 1:
    	if(row != col) {
    		cout << "Addition should be in equal matrix." << endl;
		}
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				sum[i][j] = matrix1[i][j]+matrix2[i][j];
			}
		}
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				cout << sum[i][j];
				cout << "\t";
			}
			cout << endl;
		}
		cout << endl;
      	break;
      	
    case 2:
    	if(row != col) {
    		cout << "Subtraction should be in equal matrix." << endl;
		}
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				sub[i][j] = matrix1[i][j] - matrix2[i][j];
			}
		}
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				cout << sub[i][j];
				cout << "\t";
			}
			cout << endl;
		}
		cout << endl;
    	break;
    
    case 3:
    	for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				trans[j][i] = matrix1[i][j];
			}
		}
		cout << endl;
    	break;
    case 4:
    	cout << "Exit success." << endl;
    	break;
    default:
      	cout << "Invalid Choice" << endl;
    }
	} while(choice != 4);
	return 0;
}
