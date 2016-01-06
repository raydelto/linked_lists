/*
 * List.h
 *
 *  Created on: Jan 5, 2016
 *      Author: kristianharn
 */

#ifndef LIST_H_
#define LIST_H_
#include "Node.h"
class List {
private:
	Node* _first;
	Node* _last;
public:
	void add(Node* node);
	List();
	virtual ~List();
	Node* getFirst();
};

#endif /* LIST_H_ */
