#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int getRandomNumber() {
	srand(time(0));
	// Generate a random number between 0 and 100
	return rand() % 100;
}


int main() {
	int number = getRandomNumber(), n;
	
	do {
		cout << "Enter your number guess : " ;
		cin >> n;
		
		if(number > n) {
			cout << "The number is greater than your guess number." << endl;
		} else if (number < n) {
			cout << "The number is less than your guess number" << endl;
		} else if (number == n) {
			cout << "Congratulations you won the game !!" << endl << endl;
		}
		
	} while (n != number);
	
	return 0;
}
