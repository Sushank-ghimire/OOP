#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicle {
	protected:
		string vehicleID;
		string brand;
		float rentalRate;
		bool isRented;
	public:
		Vehicle(string ID, string brand, float rentalRate, bool isRented) {
			this->vehicleID = ID;
			this->brand = brand;
			this->rentalRate = rentalRate;
			this->isRented = isRented;
		}
		
		void displayDetails() const {
			cout << "Vehicles Details is below : " << endl;
			cout << "Vehicles ID : " << this->vehicleID << endl;
			cout << "Brand : " << this->brand << endl;
			cout << "Rental Rate : Rs." << this->rentalRate << endl;
			cout << "Rented : " << (this->isRented ? "Yes" : "No") << endl;
		}
		
		virtual string getType() const = 0;
		void rent() {
			if(!this->isRented) {	
				this->isRented = !this->isRented;
				cout << "Successfully rented the vehicle." << endl;
			} else {
				cout << "Vehicle is already rented" << endl;
			}
		}
		
		void returnVehicle(float time) {
			if (this->isRented) {
				this->isRented = false;
				cout << "Your rented vehicle's payment is: Rs." << this->rentalRate * time << endl;
				cout << "Successfully returned the vehicle." << endl;
			} else {
				cout << "This vehicle was not rented." << endl;
			}
		}
		
		string getID() const { return vehicleID; }
		
    	bool getRentalStatus() const { return isRented; }
};

int main() {
	vector<Vehicle*> vehicles;
	
	
	return 0;
}
