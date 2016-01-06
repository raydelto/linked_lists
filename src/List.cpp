/*
 * List.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: kristianharn
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

Node *List::getFirst()
{
	return _first;
}
