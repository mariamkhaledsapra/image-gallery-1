#include <iostream>
using namespace std;

class List
{
	struct Node
	{
		int data;
		Node *next;
		Node *prev;
	};
	Node *last;
	Node *cursor;

public:
	List(int data)
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->prev = 0;
		newNode->next = 0;
		last = newNode;
		cursor = newNode;
	}
	void add(int data)
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->prev = last;
		last->next = newNode;
		newNode->next = 0;
		last = newNode;
		cursor = newNode;
	}
	Node *getPrev()
	{
		cursor = cursor->prev;
		return cursor;
	}
	Node *getNext()
	{
		cursor = cursor->next;
		return cursor;
	}
	int getData()
	{
		return cursor->data;
	}
};

int main()
{
	List list = List(5);
	list.add(7);
	list.add(9);
	list.getPrev();
	cout << list.getPrev()->data << endl;
	list.add(11);
	cout << list.getData() << endl;
	list.getPrev();
	cout << list.getNext()->data << endl;
	return 0;
}