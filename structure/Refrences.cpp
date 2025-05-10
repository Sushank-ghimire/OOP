#include <iostream>
#include <string>

using namespace std;

int main() {
	string food = "Pizza";
	string &meal = food;
  // Meal and Food Both are in a same address
	cout << "Meal : " << meal << " Address : " << &meal << endl;
	cout << "Food : " << food << " Address : " << &food << endl;

  // The change in Meal also reflect in the Food Variable
	meal = "Burger";
	cout << "Meal : " << meal << " Address : " << &meal << endl;
	cout << "Food : " << food << " Address : " << &food << endl;
	return 0;
}
