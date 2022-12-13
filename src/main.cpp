#include <iostream>
#include <memory>
#include "../include/House.h"
#include "../include/Mansion.h"

using namespace std;
/*
	house parameters(	<string> address, 
						<int> number of rooms, 
						<int> surface in square meters)
						
	mansion parameters(	<string> address, 
						<int> number of rooms, 
						<int> surface in square meters
						<int> number of floors
						<bool> has pool)
*/

//for Item 13
House* createHouse(string address, int number_of_rooms, int surface){
	return (new House(address,number_of_rooms,surface));
}

//for Item 14
/*
	Avem o clasa Door, o usa odata ce este deschisa nu poate sa mai fie deschisa inca odata pana ce 
	aceasta nu este inchisa, astfel m-am gandit ca fucntiile lock si unlock sa corespunda de fapt la 
	open si close
*/
class Door{

};

void open(Door *d){
	cout<<"door opened"<<endl;
}
void close(Door *d){
	cout<<"door closed"<<endl;
}

class Open_bad{
	private:
		//shared_ptr<Door> doorPtr;
		Door *doorPtr;
	public:
		explicit Open_bad(Door *d): 
		//doorPtr(d, close)
		doorPtr(d)
		{ 
			//open(doorPtr.get()); 
			open(doorPtr);
		} // acquire resource
		~Open_bad() { close(doorPtr); } // release resource
};

class Open_good{
	private:
		shared_ptr<Door> doorPtr;
	public:
		explicit Open_good(Door *d): 
		doorPtr(d, close)
		{ 
			open(doorPtr.get()); 
		} // acquire resource
};


int main(){

//Item 4: Make sure that objects are initialized before they’re used
	//House user_defined_house("house_addr", 5, 120);
	//user_defined_house.display();
	//House default_house;
	//default_house.display();
	
	//Mansion user_defined_mansion("mansion_addr", 8, 220, 1, false);
	//user_defined_mansion.display();
	//Mansion default_mansion;
	//default_mansion.display();

//Item 5: Know what functions C++ silently writes and calls.
	//House house("addr_house", 5, 160);

	//House copy_constructed_house(house);
	//copy_constructed_house.display();

	//House assignment_operator_house;
	//assignment_operator_house = house;
	//assignment_operator_house.display();
	
	
	//Mansion mansion("addr_mansion", 7, 230, 2, true);

	//Mansion copy_constructed_mansion(mansion);
	//copy_constructed_mansion.display();

	//Mansion assignment_operator_mansion;
	//assignment_operator_mansion = mansion;
	//assignment_operator_mansion.display();

//Item 6: Explicitly disallow the use of compiler generated functions you do not want
	//in Mansion.h

//Item 10: Have assignment operators return a reference to *this.
	//House user_defined_house("house_addr", 5, 120);
	//House house_assignment_operator1, house_assignment_operator2;
	//house_assignment_operator1 = house_assignment_operator2 = user_defined_house;
	//user_defined_house.display();
	//house_assignment_operator1.display();
	//house_assignment_operator2.display();
	
//Item 11: Handle assignment to self in operator=.
	//House user_defined_house("house_addr", 5, 120);
	//House another_house;
	//another_house = user_defined_house;
	//user_defined_house = user_defined_house;

//Item 12: Copy all parts of an object.
	//Mansion mansion("addr_mansion", 7, 230, 2, true);
	//Mansion copy_all_parts__mansion = mansion;
	//mansion.display();
	//copy_all_parts__mansion.display();

//Item 13: Use objects to manage resources.

	//auto_ptr
	auto_ptr<House> initial_house_auto(createHouse("test_item13_auto",1,1));
	auto_ptr<House> another_house_auto(initial_house_auto);
	
	//cout<<initial_house_auto->get_address()<<endl; 
	/* 
		Daca decomentam linia de mai sus vom primi Segmentation fault
		cum initial_house_auto pointeaza spre obiectul returnat de createHouse(), in momentul in care
		creeam un nou obiect nou another_house_auto de tip auto_ptr si cu initial_house_auto ca parametru,
		initial_house_auto isi va pierde valoarea spre obiectul spre care pointa in favoarea pointer-ului
		another_house_auto care acum v-a pointa spre obiectul initial
		acum initial_house_auto pointeaza spre null
	*/

	initial_house_auto = another_house_auto;
	/* 
		aici am schimbat valorile pointerilor, acum initial_house pointeaza din nou spre
		obiectul initial, iar another house spre nimic,
		acest fapt se intampla datorilta faptului ca 2 auto_ptr NU POT POINTA SPRE ACELASI OBIECT
	*/

	cout<<initial_house_auto->get_address()<<endl;
	//de observat cum acum avem acces la campurile la care in cazul de mai sus nu aveam

	//shared_ptr
	shared_ptr<House> initial_house_shared(createHouse("test_item13_shared",1,1));
	cout<<initial_house_shared->get_address()<<endl;
	shared_ptr<House> another_house_shared(initial_house_shared);
	cout<<initial_house_shared->get_address()<<endl;
	/*
		Se observa cum aceasta data valoarea spre care pointeaza initial_house_shared nu este pierduta
		dupa ce apare inca un pointer another_house_shared care pointeaza exact spre acelasi obiect,
		comparativ cu auto_ptr-ul unde isi pierdea valoarea pentru ca 2 auto_ptr nu pot pointa
		spre acelasi obiect pe cand 2 shared_ptr pot.	
	*/
//Item 14: Think carefully about copying behavior in resource-managing classes.
	
	Door door;
	//detalii despre cum am gandit acest item la inceput de main

	//Open_bad door1(&door);
	//Open_bad door2(door1);
	//se va observa ca in urma celor doua linii de mai sus, o usa va fi deschisa o singura data
	//si inchisa de doua ori ceea ce este gresit.

	//Reference-count the underlying resource.
	Open_good door3(&door);
	Open_good door4(door3);
	//se obseva ca de aceasta data, o usa deschisa se va inchide o singura data
	return 0;
}