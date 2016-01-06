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

List* list;

void listItems();


void initialize(){
	list = new List();
}

void remove()
{
	listItems();
	short index;
	cout << "Please remove the index of the item you'll like to delete: ";
	cin >> index;
	Node* node = list->getFirst();
	for(int i = 1 ; i < index; i++)
	{
		node = node ->getNext();
	}
	string name = node ->getName();
	list->remove(node);
	cout << "Successfully removed the item " << name << "\n\n\n";

}

void add()
{
	string name;
	cout << "Please type the name of the item you'll like to add: ";
	cin >> name;
	Node* node = new Node(name);
	list -> add(node);
	cout << "Successfuly added the item " << name << " to the list.";
	cout << "\n\n";


}

void listItems()
{
	int counter = 1;
	Node* i = list->getFirst();
	while(i != NULL)
	{
		cout << counter << " - " << i -> getName() << endl;
		i = i ->getNext();
		counter++;
	}
	cout << "\n\n\n";

}


void displayOptions()
{
	short option;
	do{
		cout << "1- List items" << endl;
		cout << "2- Add Item" << endl;
		cout << "3- Remove Item" << endl;
		cout << "4- Exit" << endl;
		cout << "Choose an option => ";
		cin >> option;
		switch(option)
		{
		case 1:
			listItems();
			break;
		case 2:
			add();
			break;
		case 3:
			remove();
			break;
		case 4:
			cout << "Good bye" << endl;
			break;
		default:
			cout << "Please select an option between 1 and 4" << endl;

		}
	}while(option != 4);

}




int main()
{
	initialize();
	displayOptions();
	return 0;
}
