#include "../include/House.h"
#include "../include/Mansion.h"

using namespace std;

//Item 4: Make sure that objects are initialized before they’re used.
Mansion::Mansion():
	House::House(),
	number_of_floors(0),
	has_pool(false)
	{
		cout << "Inside of mansion (derived class) constructor [default]\n";
	}

Mansion::Mansion(string adr, int nor, int s, int nof, bool hp):
		House::House(adr,nor,s),
		number_of_floors(nof),
		has_pool(hp)
	{
		 cout << "Inside of mansion (derived class) constructor [user-defined] \n";
	}
	
/*
Mansion::Mansion(const Mansion& m){
	
    address=m.address;
	number_of_rooms=m.number_of_rooms;
	surface=m.surface;
	
	number_of_floors=m.number_of_floors,
	has_pool=m.has_pool;
	
	cout << "Inside of mansion (derived class) copy-constructor [default]\n";
}
*/

Mansion &Mansion::operator=(const Mansion &m){
	House::operator=(m);
	number_of_floors=m.number_of_floors;
	has_pool=m.has_pool;
	cout<<"Inside of mansion copy assignment operator\n";
    return *this;
}

Mansion::~Mansion(){
        cout << "Inside of mansion (derived class) destructor [default]\n";
	}
	
void 	Mansion::set_number_of_floors(int nof) { number_of_floors = nof; }
int 	Mansion::get_number_of_floors() { return number_of_floors; }
void 	Mansion::set_has_pool(bool pool) { has_pool = pool; }
bool 	Mansion::get_has_pool() { return has_pool; }


void Mansion::display(){
	House::display();
    cout << "no. of floors: " << get_number_of_floors() << "\n";
	if(get_has_pool()) cout<< "The mansion has pool. \n";
		else cout<<"The mansion does not have a pool. \n";
}
