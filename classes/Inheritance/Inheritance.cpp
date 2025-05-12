#include <iostream>
#include <string>

using namespace std;

class Employers {
public:
    virtual string getName() const {
        return "Employer";
    }

    void getEmployerName(string message = "") {
        cout << message << getName() << endl;
    }
};

class Manager : public Employers {
	public:
    	string getName() const override {
        	return "Manager";
    	}
};


int main() {
	Manager manager;
	
	manager.getEmployerName("I am manager : ");
	return 0;
}
