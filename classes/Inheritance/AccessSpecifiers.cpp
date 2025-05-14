#include <iostream>
#include <string>

using namespace std;

// Base class
class Employee {
	protected:
		int salary;
};


// Derived Class
class Programmers : public Employee {
	protected:
		int bonus;
	public:
		void setSalary(int s) {
			salary = s;
		}
		
		int getSalary() {
			return this->salary;
		}
		
		int getBonusIncludedSalary() {
			return (this->salary + this->bonus);
		}
		
		int setBonus(int bon) {
			this->bonus = bon;
		}
};

int main() {
	
	Programmers sushank;
	
	sushank.setSalary(4000444);
	sushank.setBonus(4000);
	cout << "The salary of the programmer is : " << sushank.getSalary() << endl;
	cout << "The salary of the programmer with bonus is : " << sushank.getBonusIncludedSalary() << endl;
	
	return 0;
}
