#include <iostream>
#include <string>

using namespace std;

int main() {
	string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars[0] << endl;
	cout << cars[1] << endl;
	cout << cars[2] << endl;
	cout << cars[3] << endl;

	int nums[5] = {1, 2, 3, 4, 5};
	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
	cout << nums[3] << endl;
	cout << nums[4] << endl;

	cout << "Size of cars is : " << sizeof(cars) << " bytes" << endl;

  	string letters[2][4] = {
  		{ "A", "B", "C", "D" },
  		{ "E", "F", "G", "H" }
	};
	
	for(int i=0; i<2; i++) {
		for(int j=0; j<4; j++) {
			cout << "letters[" << i << "][" << j << "] = " << letters[i][j] << endl;
		}
		cout << endl;
	}

  	return 0;
}
