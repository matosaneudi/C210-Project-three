#include <iostream>
#include <string> 
#include <fstream> 

using namespace std;
class Menu {
  public: 

    void option1();
    void option2(); 
    void option3(string items, int itemFreq);



  private:
    string items;
    int itemFreq;
    string currWord;
    string userItems;
};