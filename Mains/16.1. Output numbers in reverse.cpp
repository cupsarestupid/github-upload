#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers
   vector<int> copyInts;
   int sizeVector;
   unsigned int i;

   cin >> sizeVector;
   userInts.resize(sizeVector);

   for (i = 0; i < userInts.size(); ++i){
      cin >> userInts.at(i);
   }
   for (i = userInts.size()-1; i > 0; --i){
      cout << userInts.at(i) << " ";
   }
   cout << userInts.at(i) << " " << endl;

   /* Type your code here. */

   return 0;
}
