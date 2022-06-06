#include <iostream>

using namespace std;

//classes
class Node //you can also use a struct
{
public:
	int value;
	Node* next; //allows access to next node
	Node* prev; //alows access to previos node
};

void printFwd(Node*head) { //allows us to travers nodes forward
	Node* traverse = head; //traversing starts at head

	while (traverse != nullptr) { //will iterate through each node until meets null
		cout << traverse->value << endl; //prints value of current node
		traverse = traverse->next; //moves to next node
	}
}

void printBack(Node* tail) { //allows us to travers nodes back
	Node* traverse = tail; //traversing starts at tail

	while (traverse != nullptr) { //will iterate through each node until meets null
		cout << traverse->value << endl; //prints value of current node
		traverse = traverse->prev; //moves to prev node
	}
}

int main()
{
	Node* head;
	Node* tail;

	//create new single node
	Node* node = new Node(); //declares node and gives memory space
	node->value = 4; //sets value
	node->next = nullptr; //doesn't point anywhere
	node->prev = nullptr;
	head = node;
	tail = node;

	//create another node to link
	node = new Node();
	node->value = 5;
	node->prev = tail;
	tail->next = node;
	tail = node; //the new node is the tail

	//3rd node, the same as 2nd node;
	node = new Node();
	node->value = 6;
	node->prev = tail;
	tail->next = node;
	tail = node; 

	printFwd(head);
	printBack(tail);
}
