#include "../include/House.h"

using namespace std;

//Item 4: Make sure that objects are initialized before they’re used.

House::House():
	address(),
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
	cout << "Inside of house (base class) copy-constructor [default]\n";
}

//Item 10: Have assignment operators return a reference to *this.
House& House::operator=(House &h) 
{
	address=h.get_address();
	number_of_rooms=h.get_number_of_rooms(),
	surface=h.get_surface();
	cout<<"Used user-defined assignment operator and returned refference to *this\n";
    return *this;
}


House::~House(){
		cout << "Inside of house (base class) destructor [default]\n";
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
