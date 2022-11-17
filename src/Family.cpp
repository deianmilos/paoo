#include "../include/Family.h"
#include "../include/House.h"

using namespace std;

Family::Family(House* property):
		property(property);
	{
		cout << "Inside of family class constructor [user-defined]\n";
	}
	
Family& Family::operator=(const Family& family){
	House *pOrig = property;
	property = new House(*family.property);
	delete pOrig;
	return *this;
}

void 	Family::set_property(House* p) { property = p; }
House* 	Family::get_property() { return property; }


void Family::display(){
	cout<<"the family";
    property->display();
}
