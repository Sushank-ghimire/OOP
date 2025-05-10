#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct {
  	string name;
  	int roll;
  	string section;
  	int age;
} Students, stu;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
	car MyCar;
	MyCar.brand = "BMW";
	MyCar.model = "X5";
	MyCar.year = 3000;
	cout << "Enter name of student : ";
	cin >> stu.name;
	cout << "Enter age of student : ";
	cin >> stu.age;
	cout << "Enter roll of student : ";
	cin >> stu.roll;
	cout << "Enter the section of student : ";
	cin >> stu.section;

	cout << setw(20) << "Name" << setw(20) << "Age" << setw(20) << "Roll" << setw(20) << "Section" << endl;
	cout << setw(20) << stu.name << setw(20) << stu.age << setw(20) << stu.roll << setw(20) << stu.section << endl;
	return 0;
}





