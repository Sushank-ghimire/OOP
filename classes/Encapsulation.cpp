/*
 Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class Bank {
	// Amount is Encapsulated for the Bank Class As it's not accessed out of the class Bank
	private:
		double amount = 0;
	public:
		// Methods to change the amount inside the class
		void deposite(double amount) {
			this->amount += amount;
		}

		void withdraw(double amount) {
			if(this->amount < amount) {
				this->getAmount("Insufficient balance to withdraw ");
				cout << "Your withdraw amount is : " << amount;
			} else {
				this->amount -= amount;
			}
		}

		void getAmount(string statement) {
			cout << statement << this->amount << endl;
		}

		// Constructor For Initial Amount Initialization
		Bank(double amount = 0) {
			this->amount = amount;
		}
};


int main() {


	Bank NicAsia(300);
	NicAsia.getAmount("Amount after first initialization : ");
	NicAsia.deposite(40000);
	NicAsia.getAmount("Amount after Deposite 40000 : ");
	NicAsia.withdraw(333);
	NicAsia.getAmount("Amount after withdraw 333 : ");
	NicAsia.withdraw(2333);
	NicAsia.getAmount("Amount after withdraw 2333 : ");
	NicAsia.withdraw(50000);


    return 0;
}
