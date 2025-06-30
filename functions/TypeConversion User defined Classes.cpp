#include <iostream>
using namespace std;

class Distance2;  // Forward declaration

// Source Class: Meter & Centimeter
class Distance1 {
private:
    int meter;
    int centimeter;

public:
    Distance1(int m = 0, int cm = 0) {
        meter = m;
        centimeter = cm;
    }

    void display() {
        cout << "Distance in meters and centimeters: " << meter << "m " << centimeter << "cm" << endl;
    }
    
    int getMeter();
    
    int getCentimeter();

    // Conversion operator: Distance1 ? Distance2
    operator Distance2();
};


// Define helper getters in Distance1
int Distance1::getMeter() { return meter; }
int Distance1::getCentimeter() { return centimeter; }

// Target Class: Feet & Inches
class Distance2 {
private:
    int feet;
    int inch;

public:
    Distance2(int f = 0, int in = 0) {
        feet = f;
        inch = in;
    }

    // Constructor-based conversion: Distance2 ? Distance1
    Distance2(Distance1 d) {
        feet = d.getMeter() * 3.3;
        inch = d.getCentimeter() * 0.4;
    }

    void display() {
        cout << "Distance in feet and inches: " << feet << "ft " << inch << "in" << endl;
    }

    // Granting friend access for conversion operator
    friend class Distance1;
};


// Conversion operator definition
Distance1::operator Distance2() {
    int f = meter * 3.3;
    int in = centimeter * 0.4;
    return Distance2(f, in);
}

int main() {
    Distance1 d1(2, 50);  // 2 meters 50 cm
    d1.display();

    // Convert using conversion operator
    Distance2 d2(d1);
    d2.display();

    return 0;
}

