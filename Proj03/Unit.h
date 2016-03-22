#ifndef UNIT_H
#define	UNIT_H

#include "Visitor.h"

class Unit {
public:
	//every unit has a print class inherited from here
	//virtual void print() = 0;
	
	//Accepts Visitors
	virtual void Accept(Visitor*) = 0;
};


#endif	/* UNIT_H */