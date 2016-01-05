/*
 * Node.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: raydelto
 */

#include "Node.h"
using namespace std;

Node::Node(string name): _name(name) , _next(NULL){

}

ostream& operator<<(ostream& os, const Node& n) {
	return os << "Item: " << n._name;
}

Node::~Node() {

}

Node *Node::getNext()
{
    return _next;
}

string Node::getName()
{
	return _name;
}


