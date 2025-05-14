/*
Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).
*/

#include <iostream>
#include <string>


using namespace std;

class MyClass {
	public:
		void myFunction() {
			cout << "A public method inside myClass";
		}
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};


int main() {
	
	// Public Methods are accessable outside from the MyGrandChild which is inherited class of the MyClass in two steps from MyClass -> Mychild -> MyGrandChild
	
  	MyGrandChild myObj;
  	myObj.myFunction();

	
	return 0;
}
