#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Enter the numbers of Student : " ;
	cin >> n;
	
	int arr[n], avg, sum = 0, min, max;
	for(int i=0; i<n; i++) {
		cout << "Enter marks for " << i+1 << " Student : ";
		cin >> arr[i];
		sum += arr[i];
	}
	min = arr[0];
	max = arr[0];
	for(int i = 0; i<n-1; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
		if(min > arr[i]) {
			min = arr[i];
		}
	}
	cout << endl;
	cout << "The total sum of marks is : " << sum << endl;
	cout << "The max number is : " << max << endl;
	cout << "The min number is : " << min << endl;
	cout << "The average marks of student is : " << sum/n << endl;
    return 0;
}
