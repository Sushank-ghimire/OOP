#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int safeStringToInt(const std::string& str) {
    std::istringstream iss(str);
    int value;
    iss >> value;
    return value;
}


struct Students {
	int studentId;
	int age;
	string name;
	string email;
	string department;
	string major;

	void registerStudent() {
		cout << "Enter the required details of the students : " << endl;
		cout << "Enter student ID (int) : ";
		cin >> studentId;
		cout << "Enter the name of the student : ";
		cin >> name;
		cout << "Enter the age of the student : ";
		cin >> age;
		cout << "Enter the email of the student : ";
		cin >> email;
		cout << "Enter the department of the student : ";
		cin >> department;
		cout << "Enter the major subject of the student : ";
		cin >> major;
		cout << endl;
	}
};


bool writeStudentDataToFile(const Students& s, const string& filename) {
    try {
    	ofstream studentDataFile;
		studentDataFile.open(filename.c_str(), ios::app);
        if (!studentDataFile) {
            throw 0;
        }

        studentDataFile << s.studentId << "," << s.age << "," << s.name << "," << s.email << "," << s.department << "," << s.major << "\n";
        studentDataFile.close();
        return true;
    } catch (int errorCode) {
        if (errorCode == 0) {
            cout << "Failed to register student data.\n";
        }
        return false;
    }
}


class StudentManagementSystem {
	public:
		void handleStudentRegistration(int n = 1) {
			if(n == 0 || n < 0) {
				cout << "Invalid input for the number of students registration." << endl;
				exit(1);
			}

			Students s[n];

			for (int i = 0; i < n; i++) {
        		cout << "\n--- Registering student " << (i + 1) << " ---\n";
        		s[i].registerStudent();
        		if (writeStudentDataToFile(s[i], "data.dat")) {
            		cout << "Student saved successfully.\n";
        		}
    		}
		}

		void searchStudentById() {
			int id;
        	cout << "Enter Student ID to search: ";
        	cin >> id;

        	ifstream file("data.dat");
        	if (!file) {
            	cout << "Could not open data file.\n";
            	return;
        	}

        	string line;
        	bool found = false;
        	while (getline(file, line)) {
        		stringstream ss(line);
        		Students s;
        		string token;
        		
        		getline(ss, token, ',');
        		s.age = safeStringToInt(token);
        		
        		getline(ss, token, ',');
        		s.studentId = safeStringToInt(token);

        		
        		getline(ss, s.name, ',');
            	getline(ss, s.email, ',');
            	getline(ss, s.department, ',');
            	getline(ss, s.major);
            	
            	if (s.studentId == id) {
                	cout << "\nStudent Found:\n";
                	cout << "ID: " << s.studentId << "\n";
                	cout << "Name: " << s.name << "\n";
                	cout << "Age: " << s.age << "\n";
                	cout << "Email: " << s.email << "\n";
                	cout << "Department: " << s.department << "\n";
                	cout << "Major: " << s.major << "\n";
                	found = true;
                	break;
            	}
			}
			if (!found) {
            	cout << "Student ID not found.\n";
        	}

        	file.close();
		}

		void deleteStudent() {
			int id;
        	cout << "Enter Student ID to delete: ";
        	cin >> id;

        	ifstream file("data.dat");
        	ofstream tempFile("temp.dat");
        	bool deleted = false;
        	
        	if (!file || !tempFile) {
            	cout << "File access error.\n";
            	return;
        	}
        	
        	string line;
        	while (getline(file, line)) {
            	stringstream ss(line);
            	string token;
            	getline(ss, token, ',');
            	int currentId = safeStringToInt(token);

            	if (currentId == id) {
                	deleted = true;
                	continue;
            	}

            	tempFile << line << "\n";
        	}
        	
        	file.close();
        	tempFile.close();
        	remove("data.dat");
        	rename("temp.dat", "data.dat");
        	
        	if (deleted) {
            	cout << "Student record deleted successfully.\n";
        	} else {
            	cout << "Student ID not found.\n";
        	}
		}
};

int main() {
    StudentManagementSystem sms;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Register Student\n";
        cout << "2. Search Student by ID\n";
        cout << "3. Delete Student Record\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            sms.handleStudentRegistration();
            break;
        case 2:
            sms.searchStudentById();
            break;
        case 3:
            sms.deleteStudent();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}

