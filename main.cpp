#include <iostream>
#include <string> 
#include <fstream> 
#include "menu.h"


using namespace std; //testing123
void printMenu() {
	cout << "Please select a option" << endl; 
	cout << "1: Check the frequency of one item." << endl; 
	cout << "2: Check the frequency of all items purchased." << endl;
	cout << "3: Generate a histogram of all items purchased." << endl;
	cout << "4: Quits the program." << endl;
}
int main() { 
	int userInput; 
	Menu obj; 
	printMenu();
	//FIX ME get user input 
	cin >> userInput; 
	if (userInput !='4'){
			
		switch (userInput) { 
			case 1: {
			int itemFreq = 0;
			string currWord , userItems;
			obj.option1(itemFreq, currWord, userItems);
			// FIX ME call menu function one 
		}
			break;

			case 2: 
			// FIX ME call menu function two 
			break;

			case 3: 
			// FIX ME call menu function three 
			break; 

			case 4: 
			cout << "Exiting the program" << endl;
			break;

			default: 
			// FIX ME check if the default statment can be used as a 
			break;



		}
	}



	return 0; 
};


