#include <iostream>
using namespace std;

int main() {
   //int input;
   //int quarters;
   int dollars, quarters, dimes, nickels, pennies, input;

   cin >> input;

   dollars = input / 100;
   quarters = input % 100 / 25;
   dimes = input % 100 % 25 / 10;
   nickels = input % 100 % 25 % 10 /5;
   pennies = input % 100 % 25 % 10 % 5;

   if (dollars > 0){
      if (dollars > 1){
         cout << dollars << " Dollars" << endl;
      }
      else{
         cout << dollars << " Dollar" << endl;
      }
   }
   if (quarters > 0){
      if (quarters > 1){
         cout << quarters << " Quarters" << endl;
      }
      else{
         cout << quarters << " Quarter" << endl;
      }
   }
   if (dimes > 0){
      if (dimes > 1){
         cout << dimes << " Dimes" << endl;
      }
      else{
         cout << dimes << " Dime" << endl;
      }
   }
   if (nickels > 0){
      cout << nickels << " Nickel" << endl;
   }
   if (pennies > 0){
      if (pennies > 1){
         cout << pennies << " Pennies" << endl;
      }
      else{
         cout << pennies << " Penny" << endl;
      }
   }
   if (input == 0){
      cout << "No change" << endl;
   }

   /* Type your code here. */

   return 0;
}
