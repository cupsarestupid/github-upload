/*The idea is like a DnD type thing but with a different concept*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>

//Attributes to designate
struct Attributes{
  int strength;
  int constitution;
  int dexterity;
  int intelligence;
  int wisdom;
  int charisma;
};
//Sections of the program
//char caracterMenu();
char characterClassSelection(string);
/*string characterName();
int characterLevel();*/

int main(){
  //Attributes character;
  sting name;
  string gender;

  //char class;
  //short level;

  std::cout << "Enter chosen name:\n";
  getline(std::cin, name)

  std::cout << "Enter gender:\n";
  getline(std::cin, gender);



  return 0;
}
//Menu
char characterClassSelection(string name, string gender){
  char select;

  std::cout << "Select your class:\n";
  std::cout << "A) Space Barbarian\n";
  std::cout << "B) Space Bard\n";
  std::cout << "C) Space Cleric\n";
  std::cout << "D) Space Druid\n";
  std::cout << "E) Space Fighter\n";
  std::cout << "F) Space Monk\n";
  std::cout << "G) Space Paladin\n";
  std::cout << "H) Space Ranger\n";
  switch(select){
    case 'A':
    case 'a':

    case 'B':
    case 'b':

    case 'C':
    case 'c':

    case 'D':
    case 'd':

    case 'E':
    case 'e':

    case 'F':
    case 'f':

    case 'G':
    case 'g':

    case 'H':
    case 'h':

    default :
      std::cout << "Invalid choice, make another selection";
  }


  getline(std::cin, class);
}
