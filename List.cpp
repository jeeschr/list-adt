#include "List.h"
#include <iostream>

List::List(){
	currSize = 0;
}
void List::insert(int index, int newItem, bool& success){
	success = (index >= 1) && (index <=currSize+1) &&
		(currSize < MAX_SIZE);

	if(success){
		for(int position = currSize; position>= index; --position)
			items[moveItems(position+1)] = items[moveItems(position)];

		items[moveItems(index)] = newItem;
		++currSize;
	}
	else
		cout<<"The list is full." << endl;

}

void List::remove(int index, bool& success){
	success=(index >=1) && (index<=currSize);
	if(success){
		for(int position=index +1; position <=currSize; ++position)
			items[moveItems(position-1)] = items[moveItems(position)];
		--currSize;
	}
	else
		cout<<"There is no item there." << endl;
}

void List::retrieve(int index, bool& success){
	success=(index>= 1) && (index<=currSize);

	if(success)
		cout << items[moveItems(index)] <<endl;
	else
		cout<<"There is no item there." << endl;
}

int List::moveItems(int index){
	return index-1;
}


bool List::isEmpty() const{
	if(currSize==0)
		return true;
	else
		return false;
}

int List::getLength() const{
	return currSize;
}
