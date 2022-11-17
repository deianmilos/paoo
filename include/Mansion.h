#ifndef MANSION_H
#define MANSION_H

#include "House.h"
#include "Mansion.h"
#include <iostream>

using namespace std;

class Mansion : public House
{
private:
	int number_of_floors;
	bool has_pool;

/*
Item 6: Explicitly disallow the use of compiler generated functions you do not want

	//default constructor
    Mansion(void);
	
	//the method delcared public and its implementation in Mansion.cpp file
	should be commented when declaring it private
*/
public:
	//default constructor
    Mansion(void);
	
	//user-defined constructor
	Mansion(string, int, int, int, bool);
	
	//default copy-constructor
	Mansion(const Mansion&);
	
	//copy assignment operator
	Mansion& operator=(const Mansion&);
	
	//default destructor
	~Mansion(void);
	
	//get and set methods 
	void set_number_of_floors(int);
    int get_number_of_floors(void);
	void set_has_pool(bool);
    bool get_has_pool(void);
	
	//display method to view class atributes
	void display(void);
};
#endif