#include <iostream>
#include <vector>

using namespace std;


/* A vector is a dynamic array in C++. Unlike normal arrays (int arr[100]), vectors can grow or shrink in size during runtime.
*/

int main() {
	
	
	vector<int> v;  // Empty vector of integers

	
	v.push_back(44);  // Add element at end
	v.push_back(10);
	v.push_back(333);
	
	cout << "Size of the vector v : " <<  v.size() << endl;
	
	cout << "Elements of the vector : " << endl;
	for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " \t" ;
    }
    cout << endl;
	
	return 0;
}
