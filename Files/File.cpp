/*
C++ uses three main classes from <fstream>:
Class	      Purpose
ifstream	  Input file stream (read)
ofstream	  Output file stream (write)
fstream	    Input and output (read/write)
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	ofstream myFile("datafile.dat", ios::binary);

	if (!myFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    } else {
    	cout << "Success for file opening!" << endl;
	}

	// Writing to the file
	myFile << "Files can be tricky, but it is fun enough! \n";
	
	// To prevent the memory space or clear the memory space took by file
	myFile.close();
	return 0;
}






