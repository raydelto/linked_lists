/*
 * List.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: bnicholas
 */

#include "List.h"

List::List(): _first(NULL), _last(NULL) {

}

void List::add(Node *node) {

	if(_first == NULL) { //list is empty
		_first= node;
		_last = node;
	}else { //list is not empty
		_last-> _next = node;
		_last = node;
	}
}

List::~List() {

}

void List::remove(Node* node) {

	//1-verify weather the node to be deleted is the first
	if(_first == node){
		_first = node -> _next;
		delete node;
	}
	//2-look for node thats previous to the one to be deleted
	else {
		Node* i = _first;
		Node* previous = NULL;
		while(i != NULL) {
			if(i -> _next == node){
				previous = i;
				i = NULL;
			} else {
				i = i -> _next;
			}
		}
		//3-Make the previous node to point to the succeeding node of the one to be deleted
		previous -> _next = node -> _next;
		//4-delete the node
		delete node;
	}
}

Node *List::getFirst() {
	return _first;
}
