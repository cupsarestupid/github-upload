/*The idea is like a DnD type thing but with a different concept, please read "Plan.txt"*/
#include <iostream>
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

  std::cout << "Enter chosen name:\n";
  getline(std::cin, name);

  std::cout << "Enter gender:\n";
  getline(std::cin, gender);


  while(true){
    classSelect = characterClassSelection(name, gender);
      break;
  }

  return 0;
}

char characterClassSelection(std::string name, std::string gender){
  char select;

  while(true){
    for (int i = 0; i < 10; i++){
      std::cout << "\n\n\n\n\n\n\n\n\n\n";
    }
    std::cout << "Ah yes, I can see that you are " << gender << "\n";
    std::cout << "Well then " << name << ", your class? \n";

    std::cout << "\nA) Space Barbarian\n";
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
        std::cout << "\nA Space Barbarian ...\n";
        return select;
        break;
      case 'B':
      case 'b':
        std::cout << "\nA Space Bard ...\n";
        return select;
        break;
      case 'C':
      case 'c':
        std::cout << "\nA Space Cleric ...\n";
        return select;
        break;
      case 'D':
      case 'd':
        std::cout << "\nA Space Druid ...\n";
        return select;
        break;
      case 'E':
      case 'e':
        std::cout << "\nA Space Fighter ...\n";
        return select;
        break;
      case 'F':
      case 'f':
        std::cout << "\nA Space Monk ...\n";
        return select;
        break;
      case 'G':
      case 'g':
        std::cout << "\nA Space Paladin ...\n";
        return select;
        break;
      case 'H':
      case 'h':
        std::cout << "\nA Space Ranger ...\n";
        return select;
        break;
      default :
        std::cout << "\nInvalid choice, make another selection";
      }
    }
  }
