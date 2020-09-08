#include <iostream>
using namespace std;

struct MonetaryChange {
   int quarters;
   int dimes;
   int nickels;
   int pennies;

};

MonetaryChange ComputeChange(int cents) {
   MonetaryChange change;

   change.quarters = cents / 25;
   change.dimes =  cents % 100 % 25 / 10;
   change.nickels = cents % 100 % 25 % 10 / 5;
   change.pennies = cents % 100 % 25 % 10 % 5;

   return change;
}

int main(int argc, char* argv[]) {
   int userCents;
   MonetaryChange change;

   cout << "Enter cents: " << endl;
   cin  >> userCents;

   change = ComputeChange(userCents);

   cout << "Quarters: " << change.quarters << endl;
   cout << "Dimes: " << change.dimes << endl;
   cout << "Nickels: " << change.nickels << endl;
   cout << "Pennies: " << change. pennies << endl;

   return 0;
}
