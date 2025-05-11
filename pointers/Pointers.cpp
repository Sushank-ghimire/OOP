#include <iostream>
#include <string>

using namespace std;

int main() {
	string food = "Pizza"; // A food variable of type string

	cout << food << endl;  // Outputs the value of food (Pizza)
	cout << "Address of the string food : " << &food << endl;
	
	string *ptr = &food;
	
	cout << "Printing ptr : " << ptr << " Printing *ptr : " << *ptr << endl;
	cout << "Address of the *ptr : " << &(*ptr) << endl; // *ptr also points to the same string
	
	food[0] = 'Z'; // Can be changed the strings in c++ are mutable
	cout << food[0];
    return 0;
}








