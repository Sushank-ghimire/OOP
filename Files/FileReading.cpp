#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string myText;
	
	// Read from the text file
	ifstream myFile("datafile.dat");
	
	if(!myFile) {
		cout << "Failed to read the file datafile.dat" << endl;
		return 1;
	}
	
	while(getline(myFile, myText)) {
		cout << myText;
	}
	
	myFile.close();
	return 0;
}
