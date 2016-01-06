/*
 * Node.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: kristianharn
 */

#include "Node.h"

Node::Node(string name): _name(name) , _next(NULL){

}



Node::~Node() {
	// TODO Auto-generated destructor stub
}

Node *Node::getNext()
{
    return _next;
}

string Node::getName()
{
	return _name;
}
