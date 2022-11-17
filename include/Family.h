#ifndef FAMILY_H
#define FAMILY_H

#include "Family.h"
#include "House.h"

#include <iostream>

using namespace std;

class Family
{
private:
	House *property;
	
public:

	//user-defined constructor
	Family(House*);
	
	Family& operator=(Family&);

	//get and set methods 
	void set_property(House*);
    House* get_property(void);
    
	//display method to view class atributes
	void display(void);
};
#endif
