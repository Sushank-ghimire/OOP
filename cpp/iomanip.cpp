#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double price = 123.456789;
    int number = 42;
    bool flag = true;

    // setw example
    cout << setw(10) << "Number" << setw(15) << "Price" << endl;
    cout << setw(10) << number << setw(15) << price << endl;

    // setprecision and fixed example
    cout << fixed << setprecision(2); // Force 2 decimal places
    cout << "Price (fixed, 2 digits): " << price << endl;

    // setfill and right
    cout << setfill('-') << setw(20) << right << "Right aligned" << endl;

    // left alignment
    cout << setfill(' ') << setw(20) << left << "Left aligned" << endl;

    // boolalpha example
    cout << boolalpha << "Boolean value: " << flag << endl;

  	return 0;
}
