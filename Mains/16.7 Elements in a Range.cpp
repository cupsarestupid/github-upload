#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector <int> userNums;
   int sizeVector;
   unsigned int i;
   int upper;
   int lower;

   cin >> sizeVector;

   userNums.resize(sizeVector);

   for (i = 0; i < userNums.size(); ++i){
      cin >> userNums.at(i);
   }
   cin >> lower;
   cin >> upper;

   for (i = 0; i < userNums.size(); ++i){
      if (userNums.at(i) >= lower && userNums.at(i) <= upper){
         cout << userNums.at(i) << " ";
      }
   }
   cout << endl;

   /* Type your code here. */

   return 0;
}
