#include <iostream>
#include <string> 
#include <fstream> 
#include "menu.h"


using namespace std; //testing123

int main() { 
	int userInput; 
	cout << "Please select a option" << endl; 
	//FIX ME get user input 
	cin >> userInput; 
	if (userInput !='4'){
			
		switch (userInput) { 
			case 1:
			Menu.option1(int itemFreq, string currWord, string userItems);
			// FIX ME call menu function one 
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


