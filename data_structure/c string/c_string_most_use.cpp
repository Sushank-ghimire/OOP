#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sentence[] = "Learn C++ with ChatGPT!";
    
    cout << "Length: " << strlen(sentence) << endl;

    char* found = strchr(sentence, '+');
    if (found)
        cout << "First '+' found at position: " << (found - sentence) << endl;

    char* sub = strstr(sentence, "Chat");
    if (sub)
        cout << "Substring 'Chat' found at: " << (sub - sentence) << endl;

    return 0;
}

