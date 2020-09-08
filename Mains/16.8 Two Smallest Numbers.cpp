#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector <int> userNums;
   int sizeVector;
   unsigned int i;
   int secondSmallest;
   int smallest;

   cin >> sizeVector;

   userNums.resize(sizeVector);

   for (i = 0; i < userNums.size(); ++i){
      cin >> userNums.at(i);
   }
   smallest = userNums.at(1);
   for (i = 0; i < userNums.size(); ++i){
      if (smallest > userNums.at(i)){
         smallest = userNums.at(i);
      }
   }
   secondSmallest = userNums.at(1);
   for (i = 0; i < userNums.size(); ++i){
      if (secondSmallest > userNums.at(i) && smallest < userNums.at(i)){
         secondSmallest = userNums.at(i);
      }
   }


   cout << smallest << " " << secondSmallest << endl;
   /* Type your code here. */

   return 0;
}
