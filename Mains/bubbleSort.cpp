#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec){
   unsigned int i, j;
   int temp;

   for (i = 1; i < myVec.size(); i++){
      for (j = 0; j < myVec.size() - i; j++){
         if (myVec.at(j) > myVec.at(j + 1)){
            temp = myVec.at(j);
            myVec.at(j) = myVec.at(j + 1);
            myVec.at(j + 1) = temp;
         }
      }
   }
   for (i = 0; i < myVec.size(); i++){
   cout << myVec.at(i) << " ";
   }
   cout << endl;
}

/* Define your function here */

int main() {
   vector<int> userVector;
   unsigned int i;
   int size;

   cin >> size;

   userVector.resize(size);

   for (i = 0; i < userVector.size(); i++){
      cin >> userVector.at(i);
   }

   SortVector(userVector);
   /* Type your code here */

   return 0;
}
