#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector <int> userNums;
   int sizeVector;
   int middleItem;

   cin >> sizeVector;

   while (sizeVector > 0){
      userNums.push_back(sizeVector);
      cin >> sizeVector;
   }

   if (userNums.size() > 10){
         cout << "Too many inputs" << endl;
   }
   else{
      middleItem = (userNums.size() / 2);
      cout << userNums.at(middleItem) << endl;
   }


   /* Type your code here. */

   return 0;
}
