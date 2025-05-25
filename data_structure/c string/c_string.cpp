#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char username[] = "admin";
    const char password[] = "1234";

    char inputUsername[20];
    char inputPassword[20];

    cout << "Enter username: ";
    cin >> inputUsername;

    cout << "Enter password: ";
    cin >> inputPassword;

    if (strcmp(username, inputUsername) == 0 && strcmp(password, inputPassword) == 0) {
        cout << "Login Successful!" << endl;
    } else {
        cout << "Invalid Credentials!" << endl;
    }

    return 0;
}

