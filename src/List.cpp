/*
 * List.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: raydelto
 */

#include "List.h"
using namespace std;

List::List(): _first(NULL), _last(NULL)
{
	// TODO Auto-generated constructor stub

}

void List::add(const std::string& name)
{

	Node* newNode = new Node(name);

	if(_first == NULL) //the list is empty
	{
		_first = newNode;
		_last = newNode;
	}else //The list is not empty
	{
		_last->_next = newNode;
		_last = newNode;
	}
}

void List::printList() {
	Node* tp = _first;
	while (tp != NULL) {
		cout << *tp << endl;
		tp = tp -> _next;
	}
}

void List::deleteNode(const string& name) {
	//case 1 - empty list
	if(_first == NULL) {
		cout << "Item cannot be deleted from an empty linked list." << endl;
	} else {
		Node* curr = _first;
		Node* trail = NULL;

		//Traverse list to find item to delete
		while(curr != NULL) {
			if (curr ->_name == name){
				break;
			} else {
				trail = curr;
				curr = curr->_next;
			}
		}

		//case 2 - Item with name not found in list
		if (curr == NULL){
			cout << "Item with matching name not found" << endl;
		} else {
			// case 3 - delete from head item
			if(_first == curr) {
				_first = _first -> _next;
			} else {
				//case 4 - delete beyond head
				trail->_next = curr->_next;
			}

			delete curr;

		}
	}
}

List::~List()
{
	// TODO Auto-generated destructor stub
}

Node *List::getFirst()
{
	return _first;
}


