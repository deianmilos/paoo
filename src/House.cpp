#include "../include/House.h"

using namespace std;

//Item 4: Make sure that objects are initialized before they’re used.
House::House():
	address(""),
	number_of_rooms(0),
	surface(0)
	{
		cout << "Inside of house (base class) constructor [default]\n";
	}

House::House(string adr, int nor, int s):
		address(adr),
		number_of_rooms(nor),
		surface(s)
	{
		cout << "Inside of house (base class) constructor [user-defined]\n";
	}
	
House::House(const House& h){
    address=h.address;
	number_of_rooms=h.number_of_rooms;
	surface=h.surface;
	cout << "Inside of house copy-constructor\n";
}

House &House::operator=(const House& h) 
{
	if(this == &h){
		cout<<"Assigned object to itself\n";
		return *this;
	}
	address=h.address;
	number_of_rooms=h.number_of_rooms;
	surface=h.surface;
	cout<<"Inside of house copy assignment operator\n";
    return *this;
}

House::~House(){
		cout << "Inside of house destructor\n";
	}
	

void 	House::set_address(int ad) { address = ad; }
string 	House::get_address() { return address; }
void 	House::set_number_of_rooms(int num) { number_of_rooms = num; }
int 	House::get_number_of_rooms() { return number_of_rooms; }
void 	House::set_surface(int s) { surface = s; }
int 	House::get_surface() { return surface; }


void House::display(){
    cout << "address: " << get_address() << "\n";
    cout << "no. of rooms: " << get_number_of_rooms() << "\n";
    cout << "surface: " << get_surface() <<" m^2 \n";
}
