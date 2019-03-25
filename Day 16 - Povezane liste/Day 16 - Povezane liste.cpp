#include "pch.h"
#include <iostream>

using namespace std;

struct Node {
	int value;  // vrijednost
	Node *next;  // pokazivac na sljedeci node
};

void insertElementFront(Node *&head, int value);
void insertElementEnd(Node *&head, int value);
void displayList(Node *temp);

int main()
{
	Node *head = nullptr;
	Node *tail = nullptr;

	insertElementEnd(head, 1);
	insertElementEnd(head, 2);
	insertElementEnd(head, 3);
	displayList(head);

}

void insertElementFront(Node *&head, int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void insertElementEnd(Node *&head, int value) {
	Node *n = new Node;
	n->value = value;
	n->next = nullptr;

	Node *temp = head;

	if (temp == nullptr) {
		temp = n;
		head = temp;
	}
	else {
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

void displayList(Node *temp) {
	if (temp == NULL) {
		cout << "Lista je prazna!" << endl;
	}
	else
	{
		while (temp != nullptr) {
			cout << temp->value << "\t";
			temp = temp->next;
		}
		cout << endl;
	}
}