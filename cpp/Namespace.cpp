#include <iostream>
#include <string>

using namespace std;

// Defining a namespace named 'varfirst'
namespace varfirst {
	string name = "Sushank"; // 'name' is declared inside varfirst namespace
}

// Defining another namespace named 'varsecond'
namespace varsecond {
	string last_name = "Ghimire"; // 'last_name' is declared inside varsecond namespace
}

int main() {
	// Local variable with the same name as in varfirst namespace
	string name = "Sushank Ghimire";
	cout << name << endl; // Refers to the local variable, not the one in varfirst

	// Accessing variables inside specific namespaces
	cout << varfirst::name << endl;       // Refers to 'name' in varfirst namespace
	cout << varsecond::last_name << endl; // Refers to 'last_name' in varsecond namespace

	return 0;
}
