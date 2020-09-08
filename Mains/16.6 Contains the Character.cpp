#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector <string> wordVector;
   char finderChar;
   int sizeVector;
   unsigned int i;

   cin >> sizeVector;

   wordVector.resize(sizeVector);

   for (i = 0; i < wordVector.size(); ++i){
      cin >> wordVector.at(i);
   }

   cin >> finderChar;

   for (i = 0; i < wordVector.size(); ++i){
      if (wordVector.at(i).find(finderChar) != string::npos){
         cout << wordVector.at(i) << endl;
      }
   }

   /* Type your code here. */

   return 0;
}
