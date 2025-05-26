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
		
		virtual void displayDetails() const {
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
		
		virtual void returnVehicle(float time) {
			if (this->isRented) {
				this->isRented = false;
				cout << "Your rented vehicle's payment is: Rs." << this->rentalRate * time << endl;
				cout << "Successfully returned the vehicle." << endl;
			} else {
				cout << "This vehicle was not rented." << endl;
			}
		}
		
		virtual string getID() const { return vehicleID; }
		
    	virtual bool getRentalStatus() const { return isRented; }
    	
    	virtual ~Vehicle() {}
};


// Derived Class of the Vehicles

class Car : public Vehicle {
public:
    Car(string ID, string brand, float rate, bool isRented)
        : Vehicle(ID, brand, rate, isRented) {}

    string getType() const override { return "Car"; }

    void displayDetails() const override {
        cout << "Vehicle Type : Car" << endl;
        Vehicle::displayDetails();
    }
};



class Bike : public Vehicle {
public:
	Bike(string ID, string brand, float rate, bool isRented) : Vehicle(ID, brand, rate, isRented) {}
	string getType() const override { return "Bike"; }
	void displayDetails() const override {
		cout << "Vehicle Type : Bike " << endl;
		Vehicle::displayDetails();
	}
};


class Truck : public Vehicle {
public:
	Truck(string ID, string brand, float rate, bool isRented) : Vehicle(ID, brand, rate, isRented) {}
	string getType() const override { return "Truck"; }
	void displayDetails() const override {
		cout << "Vehicle Type : Truck " << endl;
		Vehicle::displayDetails();
	}
};


void listAllVehicles(const vector<Vehicle*>& vehicles) {
	for (int v=0; v<vehicles.size(); v++) {
        cout << "--------------------------" << endl;
        vehicles[v]->displayDetails();
    }
    cout << "--------------------------" << endl;
}

void rentVehicle(vector<Vehicle*>& vehicles) {
    string id;
    cout << "Enter Vehicle ID to rent: ";
    cin >> id;

    for (int i=0; i<vehicles.size(); i++) {
        if (vehicles[i]->getID() == id) {
            vehicles[i]->rent();
            return;
        }
    }

    cout << "Vehicle ID not found." << endl;
}


void returnVehicle(vector<Vehicle*>& vehicles) {
    string id;
    float time;
    cout << "Enter Vehicle ID to return: ";
    cin >> id;
    cout << "Enter total hours used: ";
    cin >> time;

    for (int i=0; i< vehicles.size(); i++) {
        if (vehicles[i]->getID() == id) {
            vehicles[i]->returnVehicle(time);
            return;
        }
    }

    cout << "Vehicle ID not found." << endl;
}


int main() {
	vector<Vehicle*> vehicles;
	
	// ----- Adding Dummy Vehicles -----
    vehicles.push_back(new Car("C001", "Toyota", 120.0f, false));
    vehicles.push_back(new Car("C002", "Honda", 100.0f, false));
    vehicles.push_back(new Car("C003", "Ford", 150.0f, true));
    vehicles.push_back(new Bike("B001", "Yamaha", 50.0f, false));
    vehicles.push_back(new Bike("B002", "RoyalEnfield", 80.0f, true));
    
    int choice;
    do {
        cout << "\n========== Vehicle Rental System ==========" << endl;
        cout << "1. List all vehicles" << endl;
        cout << "2. Rent a vehicle" << endl;
        cout << "3. Return a vehicle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                listAllVehicles(vehicles);
                break;
            case 2:
                rentVehicle(vehicles);
                break;
            case 3:
                returnVehicle(vehicles);
                break;
            case 4:
                cout << "Exiting system..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);
	
	
	return 0;
}
