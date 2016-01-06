//============================================================================
// Name        : exampleRay.cpp
// Author      : Kristian Harn
// Version     : Version 1.3
// Copyright   : C-Jan-06th-2016
// Description : Shopping List Program C++, Ansi-style
//============================================================================

//Clean Up - Attempting fix on an error regarding 2 or more words (example chili pepper) being entered into the system and the menu reading the extra input as a menu choice I believe)
//Using the resource @ https://cal-linux.com/tutorials/strings.html for more information regarding working with strings in c++

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
	std::string name;
	//This one here will take an array with all the characters of the string name, and will compare each one with a ' ' to watch for white spaces
	cout << "Please type the name of the item you'll like to add: ";
	cin >> name;
	char numberInName = name.length();

	//Working again, put a pause n console.log(name + numberInName) in order
	for (int i = 0;i<=numberInName ;i++) {
		if (isspace(name[i]) == true) {
			name.erase(i+1, i-1);
		}
		i++;
	}
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
