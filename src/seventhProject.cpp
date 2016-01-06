//============================================================================
// Name        : seventhProject.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-5-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "List.h"
using namespace std;

int main() {
	//True until the user requests the program to stop taking input using N
	char itemName;
	char cont = 'y';
	int count = 1;
	List* list = new List();
	do {
		#include "List.h"
		#include "Node.h"
		cout << "Enter your " << count << " item" << endl;
		cin >> itemName;
		Node* item+count = new Node(itemName);
		list->add(itemName);
		cout << "Still have more shopping to do? : (Y/N)"<< endl;
	} while (cont == 'y');
	Node* i = list->getFirst();
	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = i ->getNext();
	}

	return 0;
}



