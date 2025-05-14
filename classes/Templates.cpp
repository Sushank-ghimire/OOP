/*

What Are Templates in C++?
Templates in C++ allow you to write generic and reusable code. Instead of writing the same function or class for different data types (like int, float, double, etc.), you write it once as a template, and it works with any data type.

There are two main types of templates:

1. Function Templates

2. Class Templates


*/


#include <iostream>
#include <string>

using namespace std;

template <typename T> // T is a placeholder for any data type
T getMax(T a, T b) {
	return a > b ? a : b;
}


// Function with the Template
template <typename T>
void printer(T data, bool isNewLine = true) {
	cout << data;
	if(isNewLine) {
		cout << endl;
	}
}


// Class to Swap Variables
template <typename T1>
class Numbers {
	public:
		T1 x;
		T1 y;
		
		Numbers(T1 a, T1 b) {
			this->x = a;
			this->y = b;
		}
		
		void printNumbers() {
			cout << "The numbers (a, b) are : " << this->x << " " << this->y << endl;;
		}
		
		void swapNumbers() {
			T1 temp;
			temp = this->x;
			this->x = this->y;
			this->y = temp;
		}
};

int main() {
	
	cout << getMax(4, 7) << endl;        // int
    cout << getMax(3.5, 2.1) << endl;    // double
    cout << getMax('a', 'z') << endl << endl;    // char
    
    cout << "Printer function use : " << endl;
    printer("Sushank Ghimire");
    printer(450);
    printer(55.55);
    
    cout << "\nUsing Numbers class with int:\n";
	Numbers<int> num(10, 20);
	num.printNumbers();
	num.swapNumbers();
	cout << "After swap: " << endl;
	num.printNumbers();
	return 0;
}
