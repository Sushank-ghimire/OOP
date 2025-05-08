#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declaring a string variable
    string name = "Sushank Ghimire";
    cout << name << endl;

    // 2. Taking a string as input (single word)
    string username;
    cout << "Enter your username: ";
    cin >> username; // This reads only up to the first space
    cout << "Your username is: " << username << endl;

    // 3. Taking full line input (with spaces)
    cin.ignore(); // To clear newline from previous input
    string fullLine;
    cout << "Enter your full name: ";
    getline(cin, fullLine); // This reads the whole line
    cout << "Your full name is: " << fullLine << endl;

    // 4. String Concatenation
    string firstName = "Sushank ";
    string lastName = "Ghimire";
    string fullName = firstName + lastName;
    cout << "Concatenated full name: " << fullName << endl;

    // 5. Finding length of a string
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Length using .length(): " << txt.length() << endl;
    cout << "Length using .size(): " << txt.size() << endl; // Same as length()

    // 6. Accessing characters with .at()
    string myString = "Hello";
    cout << "String: " << myString << endl;
    cout << "First character: " << myString.at(0) << endl;
    cout << "Second character: " << myString.at(1) << endl;
    cout << "Last character: " << myString.at(myString.length() - 1) << endl;

    // 7. Modifying characters using .at()
    myString.at(0) = 'J';
    cout << "Modified string: " << myString << endl;

    // 8. Using .append() method
    string greeting = "Hello, ";
    greeting.append("world!");
    cout << "Appended string: " << greeting << endl;

    // 9. Using .compare() method
    string a = "apple";
    string b = "banana";
    int result = a.compare(b);
    cout << "Compare result (a vs b): " << result << endl; // negative if a < b

    // 10. Using .empty() method
    string emptyStr = "";
    cout << "Is the string empty? " << (emptyStr.empty() ? "Yes" : "No") << endl;

    // 11. Using .find() and .rfind()
    string sentence = "I love programming in C++";
    cout << "First occurrence of 'in': " << sentence.find("in") << endl;
    cout << "Last occurrence of 'in': " << sentence.rfind("in") << endl;

    // 12. Using .substr()
    string word = "Submarine";
    string sub = word.substr(0, 3); // Gets "Sub"
    cout << "Substring: " << sub << endl;

    // 13. Using .insert()
    string base = "Heo";
    base.insert(2, "ll"); // Inserts "ll" at index 2
    cout << "After insert: " << base << endl;

    // 14. Using .erase()
    string eraseTest = "EraseThisPart";
    eraseTest.erase(5, 4); // Removes 4 characters from index 5
    cout << "After erase: " << eraseTest << endl;

    // 15. Using .replace()
    string replaceTest = "I hate bugs.";
    replaceTest.replace(2, 4, "love"); // Replaces "hate" with "love"
    cout << "After replace: " << replaceTest << endl;

    // 16. Using .swap()
    string one = "apple";
    string two = "banana";
    one.swap(two);
    cout << "After swap - one: " << one << ", two: " << two << endl;

    return 0;
}
