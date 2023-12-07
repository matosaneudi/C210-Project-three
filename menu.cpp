#include <iostream>
#include <string> 
#include <fstream> 
#include "menu.h"
#include <map>
#include <iomanip>

using namespace std;
Menu::Menu() {
  string purchasedItems;   
  ifstream inFile("CS210_Project_Three_Input_File.txt"); //opens the txt file or reading. 

  if (!inFile.is_open()){
    cout << "Error opening the file" << endl;
    // handle the error maybe this a try and catch statement. 
  }
  while (inFile >> purchasedItems) { 

    if (itemFreqMap.find(purchasedItems) != itemFreqMap.end()) { // checks if the word is in the map.
      itemFreqMap[purchasedItems]++;
    }
    else {
      itemFreqMap[purchasedItems] = 1; // if the word was not in the map, initializes it with frequency of 1; 
    }
  }  
  inFile.close();
}

void Menu::option1() { 
	string userItems;
  int produce;
  cout << " Please enter produce item: " << endl;
  cin >> userItems; 
  
  if (itemFreqMap.find(userItems) != itemFreqMap.end()) {
    produce = itemFreqMap[userItems];
  }
  else {
    produce = 0; 
  }
  cout << "==============================================" << endl;
  cout << "The frequency of the item entered is:  " << produce << endl;
	//cout << "==============================================" << endl;  
  
}

void Menu::option2() {
  for (auto &entry : itemFreqMap) { // prints the items and the frequencies. 
    cout << entry.first << " " << entry.second << endl; 
  }
}

void Menu::option3() {
  for (auto &entry : itemFreqMap) { // prints the items and the frequencies. 
    cout << entry.first << " "; 
    for (int i = 0; i < entry.second; i++) { 
      cout << "*";
    }
  cout << endl;
  }
}