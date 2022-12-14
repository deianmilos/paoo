#ifndef HOUSE_H
#define HOUSE_H

#include "House.h"
#include <iostream>

using namespace std;

class House
{
private:
	string address;
	int number_of_rooms;
	int surface;
	
public:
	//default constructor
    House(void);
	
	//user-defined constructor
	House(string, int, int);
	
	//copy-constructor
	House(const House&);
	
	//copy assignment operator
	House& operator=(const House&);
	
	//default destructor
	~House(void);
	
	//get and set methods 
	void set_address(int);
    string get_address(void);
    void set_number_of_rooms(int);
    int get_number_of_rooms(void);
    void set_surface(int);
    int get_surface(void);
	
	//display method to view class atributes
	void display(void);
};
#endif
