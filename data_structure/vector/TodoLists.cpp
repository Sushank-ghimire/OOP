#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	vector<string> todos;

	int choice;

	string todo;

	do {
		cout << "\n1. Add todo\n2. Show todos\n3. Remove Last todo\n4. Exit\nChoose: ";
		cout << "Enter your choice : ";
		cin >> choice;

		switch(choice) {
			case 1:
                cout << "Enter your todo : ";
                cin.ignore();
                getline(cin, todo);
                todos.push_back(todo);
                break;
            case 2:
            	if(todos.empty()) {
                	cout << "Add todo to see your todos here" << endl;
                	break;
				}
                cout << "Your Todos :\n";
                
                for (int i = 0; i < todos.size(); i++) {
                    cout << i + 1 << ". " << todos[i] << endl;
                }
                break;
            case 3:
                if (!todos.empty()) {
                    todos.pop_back();
                    cout << "Last todo removed." << endl;
                } else {
                    cout << "No todos to remove.\n";
                }
                break;
            case 4:
                cout << "Goodbye brother!\n";
                break;
            default:
                cout << "Invalid choice!\n";
		}
	} while (choice != 4);

	return 0;
}
