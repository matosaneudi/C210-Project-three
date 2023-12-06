#include <iostream>
#include <string> 
#include <fstream> 
#include "menu.h"

using namespace std;

void Menu::option1(int itemFreq, string currWord, string userItems) { 
  
  ifstream inFile("CS210_Project_Three_Input_File.txt"); //opens the txt file or reading. 

  if (!inFile.is_open()){
    cout << "Error opening the file" << endl;
    // handle the error maybe this a try and catch statement. 
  }

  while (!inFile.eof()){
    inFile >> currWord; 
    if (!inFile.fail()) {
      if (currWord == userItems) {
        ++itemFreq; 
      }
    }
  }
  cout << "The frequency of the item entered is:  " << itemFreq << endl;

}

void option2(string item, int itemFreq) {

}

void option3(string item, int itemFreq) {
  
}