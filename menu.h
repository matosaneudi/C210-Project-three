#include <iostream>
#include <string> 
#include <fstream> 
#include <map>

using namespace std;
class Menu {
  //map<string, int> itemFreqMap; // initialize item frequencies
  public: 
    Menu();
    void option1();
    void option2(); 
    void option3();
    

  private:
    map<string, int> itemFreqMap; // initialize item frequencies
    //string items;
    int itemFreq;
    string currWord;
    string userItems;
};