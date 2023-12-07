#include <iostream>
#include <string> 
#include <fstream> 
#include "menu.h"


using namespace std; //testing123
void printMenu() {
	cout << "==============================================" << endl;
	cout << "            Please select a option            " << endl; 
	cout << "==============================================" << endl;
	cout << "1) Check the frequency of one item." << endl; 
	cout << "2) Check the frequency of all items purchased." << endl;
	cout << "3) Generate a histogram of all items purchased." << endl;
	cout << "4) Quits the program." << endl;
}
int main() { 
	int userInput; 
	Menu obj; 
	
	// printMenu();
	// cin >> userInput; 
	// do (userInput !='4'){
	do {
	 	//cout; 
		printMenu();		
		cin >> userInput; 
		switch (userInput) {
			case 1: 
			obj.option1();
			break;

			case 2: 
			obj.option2();
			break;
			
			case 3: 
			obj.option3();
			break; 
			
			case 4: 
			cout << "Exiting the program" << endl;
			break;

			default: 
			// FIX ME check if the default statment can be used as a error control.
			cout << "Please make a valid selection" << endl; 
			// printMenu();
			break;
		}
	} 
	while (userInput != '4');



	// return 0; 
};


