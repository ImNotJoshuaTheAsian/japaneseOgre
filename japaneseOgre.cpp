#include <iostream>
#include <cstdlib>

class Node
{
public:
    Node* next;
    int data;

    void append(Node* no){
    	next = no;
    }

    Node(int value){
    	data = value;
    	next = NULL;
    }
};

using namespace std;

class LinkedList{
public:
	Node* head;
	Node* tail;

	LinkedList(Node* no){
		head = no;
		tail = no;
	}

	void printList(){
		Node* it = head;
		while (it != NULL) {
			cout<<it->data<<endl;
			it = it->next;
		}
	}

	void append(Node* end){
		tail->append(end);
		tail = end;
	}

	void prepend(Node* first){
		first->append(head);
		head = first;
	}

};

int main() {
	Node* n = new Node(1);

	LinkedList* lList = new LinkedList(n);


	for (int i = 1; i < 3; i++) {
		n = new Node(1 + i);
		lList->append(n);

	}

	n = new Node(0);
	lList->prepend(n);

	for (int i = 0; i < 3; i++) {
		n = new Node(9 - i);
		lList->prepend(n);
	}

	lList->printList();

	return 0;

}
