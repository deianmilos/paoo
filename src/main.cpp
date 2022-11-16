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
	
	House user_defined_house("house_addr", 5, 120);
	user_defined_house.display();
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
	//House assignment_operator_house = house;
	//assignment_operator_house.display();
	
	
	//Mansion mansion("addr_mansion", 7, 230, 2, true);
	//Mansion copy_constructed_mansion(mansion);
	//copy_constructed_mansion.display();
	//Mansion assignment_operator_mansion = mansion;
	//assignment_operator_mansion.display();
	
	House house_assignment_operator1, house_assignment_operator2;
	house_assignment_operator1 = house_assignment_operator2 = user_defined_house;
	house_assignment_operator1.display();
	house_assignment_operator2.display();
	
	return 0;
}