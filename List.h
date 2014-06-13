#ifndef LIST_H
#define LIST_H
#include "BasicADT.h"
using namespace std;
#include <iostream>


/*This class List inherits some basic list methods from class BasicADT.
Because BasicADT only has 2 pure virtual functions - these are implemented here, along with
the typical unsorted List methods.

This list is a fixed size array that holds integer numbers. main.cpp tests getLength, remove,
insert, and retrieve methods.

*/


//define max size of list
const int MAX_SIZE = 5;

class List: public BasicADT{
public:

	//default constructor
	List();

	//insert an item into the list if there is space
	//@pre 1 <=index<= getLength()+1
	//@post if insertion is successful, newitem in in index given and 
	//other items are renumbered as necessary, otherwise nothing happens
	void insert(int index, int newItem, bool& success);

	//remove an item from list at given index if possible
	//the other list items are reordered accordingly, otherwise nothing happens
	//@pre 1<= index <= getLength()
	void remove(int index, bool& success);

	//display the item at given position, else return error message
	void retrieve(int index, bool& success);

	//inherited methods

	//Determines if list is empty
	//@return True is list is empty, otherwise false
	virtual bool isEmpty() const;

	//Determine length of list
	//@return the number of items that are currently in the list
	virtual int getLength() const;

private:

	int items[MAX_SIZE];

	int currSize;

	//shifts position of list items as needed for adds and removes
	int moveItems(int index);

};
#endif
