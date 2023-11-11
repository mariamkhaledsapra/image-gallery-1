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
	void initialize(int data)
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->prev = 0;
		newNode->next = 0;
		last = newNode;
		cursor = newNode;
	}
	int getData()
	{
		return cursor->data;
	}
};