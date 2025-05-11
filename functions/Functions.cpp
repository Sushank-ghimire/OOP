#include <iostream>
#include <string>

using namespace std;

void myFunc() {
	cout << "This is my function" << endl;
}

void printName(string name = "Sushank", string country = "Nepal") {
	cout << name << " is from " << country << endl;
}

float calculateIntrest(float p = 2, float t = 3, float r = 5) {
	return (p*t*r)/100;
}

int main() {
	myFunc();
	printName("Sushank ghimire");
	printName();
	
	float si = calculateIntrest(50000);
	cout << "Value of the SI is : " << si;
    return 0;
}
