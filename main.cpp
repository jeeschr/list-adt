#include "List.h"

int main(){
	
	List myList;

	cout <<"There are "<< myList.getLength() << " items in the list." << endl;
	bool test;
	cout << "Trying to remove item that doesn't exist from list." << endl;
	myList.remove(3, test);

	cout << "\nTesting insertion of integer 1 at position 1 in list." <<endl;
	myList.insert(1,1,test);
	cout << "This is the output upon retrieval of that item: ";
	myList.retrieve(1,test);

	cout <<"\nTesting what happens if user inserts after list is full." <<endl;
	myList.insert(2,2,test);
	myList.insert(3,3,test);
	myList.insert(4,4,test);
	myList.insert(5,5,test);
	myList.insert(7,2,test);
}