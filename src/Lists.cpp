//============================================================================
// Name        : Lists.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "List.h"
using namespace std;

int main() {

	List* items = new List();

	string name;

	 while(true) {
		 cout << "Enter items or q to quit." << endl;
		 cin >> name;
		 if(name == "q")
			 break;
		 items -> add(name);

	 }

	 items ->printList();

	 while(true) {
	 		 cout << "Enter the name of item to delete or q to quit." << endl;
	 		 cin >> name;
	 		 if(name == "q")
	 			 break;
	 		 items -> deleteNode(name);
	 		 items ->printList();
	 	 }

	return 0;
}
