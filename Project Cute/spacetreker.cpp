/* spacetrecker The idea is like a DnD type thing but with a different concept, please read "Plan.txt"*/
#include <iostream>
#include <iomanip>
#include <string>
#include "Attributes.h"

class SpaceBarbarian{
  public:

};

class SpaceBard{
  public:

};

class SpaceCleric{
  public:

};

class SpaceDruid{
  public:


};

class SpaceFighter{
  public:

};

class SpaceMonk{
  public:

};

class SpacePaladin{
  public:

};

class SpaceRanger{
  public:

};

//Sections of the program
//char caracterMenu();
char characterClassSelection(std::string, std::string);
/*int characterLevel();*/

int main(){
  std::string name, gender;
  char classSelect, menuChoice;

  std::cout << std::right << std::setw(50) << "Enter chosen name:\n";
  std::cout << std::right << std::setw(48);
  getline(std::cin, name);

  std::cout << "Enter gender:\n";
  getline(std::cin, gender);
  system("clear");
  //std::cout << "\033[2J\033[1;1H";

  std::cout << "Ah yes, I can see that you are a " << gender << "\n";
  std::cout << "Well then " << name << ", your class? \n";

  while(true){
    classSelect = characterClassSelection(name, gender);
      break;
  }

  std::cout << "\nWhat say we roll some stats?";

  return 0;
}

char characterClassSelection(std::string name, std::string gender){
  char select;

  while(true){
    std::cout << "A) Space Barbarian\n";
    std::cout << "B) Space Bard\n";
    std::cout << "C) Space Cleric\n";
    std::cout << "D) Space Druid\n";
    std::cout << "E) Space Fighter\n";
    std::cout << "F) Space Monk\n";
    std::cout << "G) Space Paladin\n";
    std::cout << "H) Space Ranger\n";

    std::cout << "\nClass Choice : ";

    std::cin >> select;
    switch(select){
      case 'A':
      case 'a':
        system("clear");
        std::cout << "Ah...\nA Space Barbarian ...\n";
        return select;
        break;
      case 'B':
      case 'b':
        system("clear");
        std::cout << "Ah...\nA Space Bard ...\n";
        return select;
        break;
      case 'C':
      case 'c':
        system("clear");
        std::cout << "Ah...\nA Space Cleric ...\n";
        return select;
        break;
      case 'D':
      case 'd':
        system("clear");
        std::cout << "Ah...\nA Space Druid ...\n";
        return select;
        break;
      case 'E':
      case 'e':
        system("clear");
        std::cout << "Ah...\nA Space Fighter ...\n";
        return select;
        break;
      case 'F':
      case 'f':
        system("clear");
        std::cout << "Ah...\nA Space Monk ...\n";
        return select;
        break;
      case 'G':
      case 'g':
      system("clear");
        std::cout << "Ah...\nA Space Paladin ...\n";
        return select;
        break;
      case 'H':
      case 'h':
        system("clear");
        std::cout << "Ah...\nA Space Ranger ...\n";
        return select;
        break;
      default :
        system("clear");
        std::cout << "\nInvalid choice, make another selection\n";
      }
    }
  }
