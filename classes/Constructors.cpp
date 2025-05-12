#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Car {
  	// Private Access Specifier - Cannot be accessed out of the class
  	private:
  	// Protected Access Specifier - Can be accessed in the inherited class
  	protected:
  	// Public Access Specifier - Can be access from out of the class
	public:
    	string brand;
    	string model;
    	int year;
    	Car(string brand, string model, int year) {
    		this->brand = brand;
    		this->model = model;
    		this->year = year;
		}
};

// Constructor definition outside the class
//Car::Car(string x, string y, int z) {
//  this->brand = x;
//  this->model = y;
//  this->year = z;
//}

int main() {
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);


  	// Print values
  	cout << setw(20) << "Brand" << setw(20) << "Model" << setw(20) << "Year" << endl;
  	cout << setw(20) << carObj1.brand << setw(20) << carObj1.model << setw(20) << carObj1.year << endl;
  	cout << setw(20) << carObj2.brand << setw(20) << carObj2.model << setw(20) << carObj2.year << endl;
    return 0;
}
