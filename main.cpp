#include "list.h"
#include <iostream>
using namespace std;

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