#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct Node {
	int data;
	Node *next;

};

struct Node* createNode(int data) {
	Node* newNode = (Node*) malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertAtFirst(Node **head, int data) {
	Node* newNode = createNode(data);
	newNode->next = *head;
	*head = newNode;
}

int main() {
	Node* head = NULL;

	insertAtFirst(&head, 10);
	insertAtFirst(&head, 20);
	insertAtFirst(&head, 30);
	insertAtFirst(&head, 40);

	Node *current = head;
	
	while(current != NULL) {
		cout << current->data << " -> ";
		current = current->next;
	}

	cout << "NULL" << endl;
    return 0;
}









