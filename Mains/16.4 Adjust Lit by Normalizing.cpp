#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector <int> userNums;
   int sizeVector;
   unsigned int i;
   int adjustment;

   cin >> sizeVector;

   userNums.resize(sizeVector);

   for (i = 0; i < userNums.size(); ++i){
      cin >> userNums.at(i);
   }
   adjustment = userNums.back();
   for (i = 0; i < userNums.size(); ++i){
      if (userNums.at(i) < adjustment){
         adjustment = userNums.at(i);
      }
   }
   for (i = 0; i < userNums.size(); ++i){
      cout << userNums.at(i) - adjustment << " ";
   }
   cout << endl;
   /* Type your code here. */

   return 0;
}
