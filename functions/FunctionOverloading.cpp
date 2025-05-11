/*
  ------------------------------------------------------------------------
  Title       : Universal Print Function using Function Overloading in C++
  Author      : Sushank Ghimire
  Description : This program demonstrates function overloading to print
                various types of data (int, float, string, char, double).
                Each overloaded function includes an optional flag to print
                a newline character.
  ------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

// Function to print an integer
void print(int num, bool isLine = true) {
	cout << num;
	if (isLine) {
		cout << endl;
	}
}

// Function to print a float
void print(float num, bool isLine = true) {
	cout << num;
	if (isLine) {
		cout << endl;
	}
}

// Function to print a string
void print(string data, bool isLine = true) {
	cout << data;
	if (isLine) {
		cout << endl;
	}
}

// Function to print a character
void print(char character, bool isLine = true) {
	cout << character;
	if (isLine) {
		cout << endl;
	}
}

// Function to print a double
void print(double num, bool isLine = true) {
	cout << num;
	if (isLine) {
		cout << endl;
	}
}

int main() {
	// Using different overloaded print functions
	print("Sushank Ghimire");   // prints string
	print(66);                  // prints integer
	print('A');                 // prints character
	print(7.055);               // prints double
	return 0;
}

