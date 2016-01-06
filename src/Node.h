/*
 * Node.h
 *
 *  Created on: Jan 5, 2016
 *      Author: kristianharn
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
using namespace std;

class Node {
private:
	string _name;
	Node* _next;
public:
	Node(string name);
	virtual ~Node();
	string getName();
    Node *getNext();
	friend class List;
};

#endif /* NODE_H_ */
