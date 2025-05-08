#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers : ";
	cin >> a >> b;

	//	Taking the operand input
	char operand;
	cout << "Enter the operation to perform : ";
	cin >> operand;
	if(operand == '+') {
		cout << "The sum is : " << a+b << endl;
	} else if(operand == '-') {
		cout << "The subtraction is : " << a-b << endl;
	} else if(operand == '*') {
		cout << "The multiplication is : " << a*b << endl;
	} else if(operand == '/') {
		//	Typecasting of the integer to a floating point value
		cout << "The division is : " << float(a)/float(b) << endl;
	} else {
		cout << "Invalid operation found." << endl;
	}
  	return 0;
}
