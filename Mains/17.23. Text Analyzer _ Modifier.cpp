#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {
   unsigned int i, j;

   //no \t or \n
   for (i = 0, j = 0; i < usrStr.size(); i++){
      if (usrStr.at(i) != '\t' || usrStr.at(i) != '\n'){
         j++;
      }
   }

   return j;
   /* Type your code here. */
}

void OutputWithoutWhitespace(string usrStr){
   unsigned int i, size = usrStr.size();

      for (i = 0; i < size; i++){
         if (usrStr.at(i) != ' '){//|| usrStr.at(i) != '\n'){
            cout << usrStr.at(i);
         //cout << count << " " << i << endl;
      }
      else{
         continue;
      }
   }
   //string newStr;
   //no \t or \n

   /*for (i = 0; i < length; i++){
      if (usrStr.at(i) == '\t' || usrStr.at(i) == '\n'){
         usrStr.erase(i, 1);
         length--;
         i--;
      }
   }
   for (i = 0, j = 0; i < usrStr.size() - j; i++, j++){
      if (usrStr.at(i) == '\t' || usrStr.at(i) == '\n'){
         j += 1;
      }
      else if (usrStr.at(i) != '\t' || usrStr.at(i) != '\n'){
         newStr.push_back(usrStr.at(i));
      }
         if(usrStr.at(i) != '\t' || usrStr.at(i) != '\n')*/
}

int main() {
   string inputStr;

   cout << "Enter a sentence or phrase:" << endl ;

   getline(cin, inputStr);

   cout << endl << "You entered: " << inputStr << endl;

   cout << endl << "Number of characters: " << GetNumOfCharacters(inputStr) << endl;

   cout << "String with no whitespace: ";
   OutputWithoutWhitespace(inputStr);
   cout << endl;
   /* Type your code here. */

   return 0;
}
