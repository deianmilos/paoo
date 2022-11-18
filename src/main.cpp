#include <iostream>
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
//Item 14: Think carefully about copying behavior in resource-managing classes.
	return 0;
}