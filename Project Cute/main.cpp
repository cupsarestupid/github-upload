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
char characterClassSelection(std::string);
/*std::string characterName();
int characterLevel();*/

int main(){
  //Attributes character;
  std::string name, gender;
  char classChoice, menuChoice;
  /*std::vector <std::string> optionalClasses = {Space Barbarian, Space Bard, Space Cleric, Space Druid, Space Fighter, Space Monk, Space Paladin, Space Ranger};
  std::vector <char>*/
  //char class;
  //short level;

  std::cout << "Enter chosen name:\n";
  getline(std::cin, name);

  std::cout << "Enter gender:\n";
  getline(std::cin, gender);

  while(true){
    classChoice = characterClassSelection(name);
    if(classChoice == 'J' || classChoice == 'j'){
      break;
    }
  }

  return 0;
}

char characterClassSelection(std::string name){
  char select;

  while(true){
    std::cout << "Select your class " << name << "\n";

    std::cout << "\nA) Space Barbarian\n";
    std::cout << "B) Space Bard\n";
    std::cout << "C) Space Cleric\n";
    std::cout << "D) Space Druid\n";
    std::cout << "E) Space Fighter\n";
    std::cout << "F) Space Monk\n";
    std::cout << "G) Space Paladin\n";
    std::cout << "H) Space Ranger\n";

    std::cout << "\nJ) Exit\n";

    std::cin >> select;
    switch(select){
      case 'A':
      case 'a':
        return select;
        break;
      case 'B':
      case 'b':
        return select;
        break;
      case 'C':
      case 'c':
        return select;
        break;
      case 'D':
      case 'd':
        return select;
        break;
      case 'E':
      case 'e':
        return select;
        break;
      case 'F':
      case 'f':
        return select;
        break;
      case 'G':
      case 'g':
        return select;
        break;
      case 'H':
      case 'h':
        return select;
        break;
      default :
        std::cout << "Invalid choice, make another selection";
      }
    }
  }
