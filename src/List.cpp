/*
 * List.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: raydelto
 */

#include "List.h"

List::List(): _first(NULL), _last(NULL)
{
	// TODO Auto-generated constructor stub

}

void List::add(Node *node)
{
	if(_first == NULL) //the list is empty
	{
		_first = node;
		_last = node;
	}else //The list is not empty
	{
		_last->_next = node;
		_last = node;
	}
}

List::~List()
{
	// TODO Auto-generated destructor stub
}

void List::remove(Node *node)
{
	//1-Verify whether the node to be deleted if the first
	if(_first == node)
	{
		_first = node -> _next;
		delete node;
	}
	//2-Look for the node that's previous to the one to be deleted
	else
	{
		Node* i = _first;
		Node* previous = NULL;
		while(i != NULL)
		{
			if(i-> _next == node)
			{
				previous = i;
				i = NULL;
			}else
			{
				i = i-> _next;
			}
		}
		//3-Make the previous node to point to the succeeding node of the one to be deleted
		previous -> _next = node->_next;
		//4- Delete the requested node
		delete node;
	}


}

Node *List::getFirst()
{
	return _first;
}
