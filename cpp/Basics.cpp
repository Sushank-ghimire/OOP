#include <iostream> // Required for input and output operations

using namespace std;

int main() {
  // Output Giving Syntax using cout and insertion operator (<<)
  cout << "Object Oriented Programming with cpp" << endl;

  int num = 775;
  // Prints the result of num + 3, which is 778
  cout << num + 3 << endl;

  // Taking Input From the User
  int a;
  cout << "Enter a number : "; // Prompts the user
  cin >> a; // Takes input from the user using extraction operator (>>)

  // Displays the number entered by the user
  cout << "The number you entered is : " << a << endl;

  return 0; // Indicates successful program termination
}
