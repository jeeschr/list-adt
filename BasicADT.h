#ifndef BASICADT_H
#define BASICADT_H

class BasicADT{
public:

	virtual ~BasicADT(){
	}
	
	virtual bool isEmpty() const = 0;
	virtual int getLength() const = 0;

};

#endif