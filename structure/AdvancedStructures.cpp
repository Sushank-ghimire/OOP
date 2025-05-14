#include <iostream>
#include <string>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

struct Employees {
	// Personal Data
	Date joinDate;
	string name;
	int age;
	string gender;
	string email;

	// Company Data
	int employeeID;
	string Designation;
	string Department;
	Date DOB;

	// Work Details
	int salary;
	int workHours;
	int overTime;

	// Function to get employee details
	void getEmployeeDetails() {
		cout << "Enter Employee ID (int): ";
		cin >> employeeID;

		cin.ignore(); // clear newline from buffer
		cout << "Enter Name: ";
		getline(cin, name);

		cout << "Enter Age (int) : ";
		cin >> age;

		cin.ignore();
		cout << "Enter Gender ('male', 'female'): ";
		getline(cin, gender);

		cout << "Enter Email: ";
		getline(cin, email);

		cout << "Enter Designation: ";
		getline(cin, Designation);

		cout << "Enter Department: ";
		getline(cin, Department);

		cout << "Enter Salary: ";
		cin >> salary;

		cout << "Enter Work Hours per Week: ";
		cin >> workHours;

		cout << "Enter Overtime Hours: ";
		cin >> overTime;

		cout << "Enter Date of Birth (YYYY MM DD): ";
		cin >> DOB.year >> DOB.month >> DOB.day;

		cout << "Enter Join Date (YYYY MM DD): ";
		cin >> joinDate.year >> joinDate.month >> joinDate.day;
	}


	// Function to print employee details
	void printEmployeeDetails() {
		cout << "Employee ID: " << employeeID << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Email: " << email << endl;
		cout << "Designation: " << Designation << endl;
		cout << "Department: " << Department << endl;
		cout << "Salary: " << salary << endl;
		cout << "Work Hours: " << workHours << endl;
		cout << "Overtime: " << overTime << endl;
		cout << "Date of Birth: " << DOB.year << "-" << DOB.month << "-" << DOB.day << endl;
		cout << "Join Date: " << joinDate.year << "-" << joinDate.month << "-" << joinDate.day << endl;
	}

};


int main() {
	int n;
	cout << "Enter the numbers of employee : ";
	cin >> n;

	Employees E[n];

	// Loop To get Details of the n employee
	for(int i=0; i<n; i++) {
		cout << "Enter details for the " << i+1 << " Employee : " << endl;
		E[i].getEmployeeDetails();
		cout << endl;
	}

	// Loop for printing the details of the employees
	for(int i=0; i<n; i++) {
		cout << "Detail of " << i+1 << " Employee : " << endl;
		E[i].printEmployeeDetails();
		cout << endl;
	}
	return 0;
}

