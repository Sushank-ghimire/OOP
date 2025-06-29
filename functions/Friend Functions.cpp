#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    // Declare friend function
    friend void printLength(Box box);
};

// Friend function definition
void printLength(Box box) {
    cout << "Length of box: " << box.length << endl;
}

int main() {
    Box b(10);
    printLength(b);
    return 0;
}

