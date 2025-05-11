#include <iostream>
#include <string>

using namespace std;

class User {
  private: // Private Attribute or a variable Cannot be accessed out of the Class
    int userPhone;
    string userName;
  public: // Accessable to all the Global scope
    string username;
    string email;
};

int main() {

  	User Sushank;
  	Sushank.email = "ghimiresushank08@gmail.com";
  	Sushank.username = "Sushank-ghimire";
  	cout << endl;

  	cout << Sushank.email << " " << Sushank.username;
  	cout << endl;

    //  cout << Sushank.userPhone << endl; Cannot be accessed as it's a private variable (Throws an Error)
	return 0;

}
