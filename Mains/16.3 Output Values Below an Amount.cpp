#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector <int> userNums;
   int sizeVector;
   unsigned int i;

   cin >> sizeVector;

   userNums.resize(sizeVector + 1);

   for (i = 0; i < userNums.size(); ++i){
      cin >> userNums.at(i);
   }

   for (i = 0; i < userNums.size(); ++i){
      if (userNums.at(i) <userNums.back()){
         cout << userNums.at(i) << " ";
      }
   }
   //cout << userNums.back();
   cout << endl;
   /* Type your code here. */

   return 0;
}
