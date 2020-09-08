#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

char PrintMenu (string usrStr);
int GetNumOfNonWSCharacters(const string usrStr);
int GetNumOfWords(const string usrStr);
int FindText(string usrFind, string usrStr);
void ReplaceExclamation(string &usrStr);
char ShortenSpace();

int main() {
   string inputStr;
   char usrChr;

   cout << "Enter a sample text:" << endl;

   getline(cin, inputStr);

   cout << endl << "You entered: " << inputStr << endl;

   while (usrChr != 'q' || usrChr != 'Q'){
    usrChr = PrintMenu(inputStr);
      if (usrChr == 'q' || usrChr == 'Q') {
        return 0;
      }
    }

  }
char PrintMenu (string usrStr){
    int nonWSChr, numWords;
    char usrChr;
    string finder;
      while (usrChr != 'q' || usrChr != 'Q'){
        cout << endl;
        cout << "MENU" << endl;
        cout << "c - Number of non-whitespace characters" << endl;
        cout << "w - Number of words" << endl;
        cout << "f - Find text" << endl;
        cout << "r - Replace all !'s" << endl;
        cout << "s - Shorten spaces" << endl;
        cout << "q - Quit" << endl;
        cout << endl << "Choose an option:";
        cin >> usrChr;
        cout << endl;
        switch(usrChr){
          case 'c':
           case 'C':
                nonWSChr = GetNumOfNonWSCharacters(usrStr);
                cout << "Number of non-whitespace characters: " << nonWSChr << endl;
                return usrChr;
                break;
           case 'w':
           case 'W':
              numWords = GetNumOfWords(usrStr);
              cout << "Number of words: " << numWords << endl;
              return usrChr;
              break;
           case 'f':
           case 'F':
              cin.ignore();
              cout << "Enter a word or Phrase to be found:";
              getline(cin, finder);
              cout << endl << "\"" << finder << "\"" << " instances: " << FindText(finder, usrStr);
              return usrChr;
              break;
           case 'r':
           case 'R':
              ReplaceExclamation(usrStr);
              cout << "Edited text: " << usrStr;
              return usrChr;
              break;
           case 's':
           case 'S':
            //ShortenSpace();
           case 'q':
           case 'Q':
                return usrChr;
                break;
            default:
                cout << "Invalid input." << endl;
                break;
             }
           }
  }
string NonWhiteCharacters(string usrStr){
    string tmpStr;
    unsigned int i;

    for (i = 0; i < usrStr.size(); i++){
        if (usrStr.at(i) != '\t' || usrStr.at(i) != '\n' || usrStr.at(i)){
            tmpStr.at(i) = usrStr.at(i);
          }
        else{
          i += 1;
        }
      }
      return tmpStr;
}
int GetNumOfNonWSCharacters(const string usrStr){
  string tmpStr;
  unsigned int i;
  int j;
      tmpStr = NonWhiteCharacters(tmpStr);
     //no \t or \n
     for (i = 0, j = 0; i < tmpStr.size(); i++){
        if (tmpStr.at(i) != '\t' || tmpStr.at(i) != '\n' || tmpStr.at(i)){
           j++;
        }
     }
     return j;
   }
int GetNumOfWords(const string usrStr){
     unsigned int i;
     int j;

     for (i = 1, j= 0; i < usrStr.size() - 1; i++){
       if (((usrStr.at(i) == '\t') || (usrStr.at(i) =='\n') || (usrStr.at(i) == ' ')) && ((usrStr.at(i - 1) != '\t') || (usrStr.at(i - 1) !='\n') || (usrStr.at(i - 1) != ' '))){
         j++;
       }
       else{
         i +=1;
       }
     }
     return j ;
   }
int FindText(string usrFind, string usrStr){
      unsigned int i, j;


      for (i = 0, j = 0; i < usrStr.size(); i++){
          if (usrStr.find(usrFind) != string::npos){
            j++;
          }
          else{
            i +=1;
          }
      return j;
       }
   }
void ReplaceExclamation(string &usrStr){
  unsigned int i;

  for (i = 0; i < usrStr.size(); i++){
    if (usrStr.at(i) == '!'){
      usrStr.at(i) = '.';
    }
    return;
  }
}
