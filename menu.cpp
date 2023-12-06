#include <iostream>
#include <string> 
#include <fstream> 
#include "menu.h"
#include <map>

using namespace std;

void Menu::option1() { 
  int itemFreq = 0;
	string currWord , userItems;
  ifstream inFile("CS210_Project_Three_Input_File.txt"); //opens the txt file or reading. 

  if (!inFile.is_open()){
    cout << "Error opening the file" << endl;
    // handle the error maybe this a try and catch statement. 
  }
  cout << "Please enter a produce item" << endl; 
  cin >> userItems; 
  // Possibly make function to lower case all input. 
  while (!inFile.eof()){
    inFile >> currWord; 
    if (!inFile.fail()) {
      if (currWord == userItems) {
        ++itemFreq; 
      }
    }
  }
  cout << "The frequency of the item entered is:  " << itemFreq << endl;
  inFile.close();
}

void Menu::option2() {
  int itemFreq = 0;
	string currWord , userItems;
  ifstream inFile("CS210_Project_Three_Input_File.txt"); //opens the txt file or reading. 

  if (!inFile.is_open()){
    cout << "Error opening the file" << endl;
    // handle the error maybe this a try and catch statement. 
  }
  map<string, int> itemFreqMap; //stores the frequencies.

  string purchasedItems; 

  while (inFile >> purchasedItems) { 

    if (itemFreqMap.find(purchasedItems) != itemFreqMap.end()) { // checks if the word is in the map.
      itemFreqMap[purchasedItems]++;
    }
    else {
      itemFreqMap[purchasedItems] = 1; // if the word was not in the map, initializes it with frequency of 1; 
    }
  }  
  for (auto &entry : itemFreqMap) { // prints the items and the frequencies. 
    cout << entry.first << " " << entry.second << endl; 
  }

  inFile.close(); //close the file. 
}

void Menu::option3() {
  int itemFreq = 0;
	string currWord , userItems;
  ifstream inFile("CS210_Project_Three_Input_File.txt"); //opens the txt file or reading. 

  if (!inFile.is_open()){
    cout << "Error opening the file" << endl;
    // handle the error maybe this a try and catch statement. 
  }
  map<string, int> itemFreqMap; //stores the frequencies.

  string purchasedItems; 

  while (inFile >> purchasedItems) { 

    if (itemFreqMap.find(purchasedItems) != itemFreqMap.end()) { // checks if the word is in the map.
      itemFreqMap[purchasedItems]++;
    }
    else {
      itemFreqMap[purchasedItems] = 1; // if the word was not in the map, initializes it with frequency of 1; 
    }
  }  
  for (auto &entry : itemFreqMap) { // prints the items and the frequencies. 
    cout << entry.first << " "; 
    for (int i = 0; i < entry.second; i++) { 
      cout << "*";
    }
  cout << endl;
  }

  inFile.close(); //close the file. 
}