#include <stdio.h>
using namespace std;

struct Node {
	int data;
	Node *next;
}

class LinkedList {
	Node* head;
	
	public:
	LinkedList() {
		head = NULL;
	}
	
	void insert(int val) {
		Node* new_node = new Node;
		new_node->data = val;
		new_node->next = NULL;
	}
	
	if(head == NULL) {
		head = new_node;
	}
	else {
		new_node->next = head;
		head = new_node;
	}
	
	bool search(int val) {
		Node* temp = head;
		while(temp != NULL)
		{
			if (temp->data == val) {
				return true;
			}
			temp = temp->next;
		}
      return false;
	}
	
	void display() {
		Node* temp = head;
		while(temp != NULL) {
			count << temp->data << " ";
			temp = temp->next;
		}
		count << endl;
	}
}
int main() {
    LinkedList l;
	
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	
	l.display();
}