/*
 * Node.h
 *
 *  Created on: Jan 5, 2016
 *      Author: raydelto
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
#include <iostream>

class Node {

	friend std::ostream& operator<<(std::ostream& os, const Node& n);

private:
	std::string _name;
	Node* _next;
public:
	Node(std::string name = "none");
	virtual ~Node();
	std::string getName();
    Node *getNext();
	friend class List;
};

#endif /* NODE_H_ */
