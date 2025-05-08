#include <iostream>
using namespace std;

// Example of identifiers: variable names like age, price, grade, etc.
// Identifiers must begin with a letter (A-Z or a-z) or an underscore (_) and can contain digits.

int main() {
    // Example of an integer
    int age = 21; // 'age' is an identifier; 21 is the value stored
    cout << "Age: " << age << endl;

    // Example of a double (decimal number)
    double price = 49.99; // 'price' is an identifier
    cout << "Price: " << price << endl;

    // Example of a character
    char grade = 'A'; // 'grade' is an identifier; single quotes are used for char
    cout << "Grade: " << grade << endl;

    // Example of a string
    string greeting = "Hello, world!"; // 'greeting' is an identifier
    cout << "Greeting: " << greeting << endl;

    // Example of a boolean
    bool isStudent = true; // 'isStudent' is an identifier; true or false values only
    cout << "Is student: " << isStudent << endl; // Output will be 1 for true

    // Constant variable: its value cannot be changed after initialization
    const double PI = 3.14159; // 'PI' is a constant identifier
    cout << "Constant PI: " << PI << endl;

    // Declaring multiple variables of the same type in one line
    int x = 5, y = 10, z = 15; // Multiple identifiers declared together
    cout << "x + y + z = " << x + y + z << endl;

    return 0;
}
