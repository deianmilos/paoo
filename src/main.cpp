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
	
	House h1("addres1", 5, 120);
	h1.display();
	House h2;
	h2.display();
	
	//Mansion m1("addres2", 7, 220, 3, true);
	//cout<<"\n";
	//m1.display();
	
	//Test t;
	//t.display();
	return 0;
}