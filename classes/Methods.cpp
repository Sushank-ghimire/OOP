#include <iostream>
#include <string>

using namespace std;

class User {
	private:
		string contact = "+9779813661063";
		string email = "ghimiresushank08@gmail.com";
	public:
		string username;

		void getUserDetails() {
//			Accessing the private attributes inside the Class
			cout << "Private details access inside the User : " << endl;
			cout << "Contact : " << contact << "  Email : " << email << endl;
			cout << "Public Username : " << username << endl;
		}
};

int main() {
	User sushank;
	sushank.username = "ghimiresushank";
	sushank.getUserDetails();
    return 0;
}
