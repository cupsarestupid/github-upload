#include <iostream>
using namespace std;

struct BirthMonthDay {
   int numMonths;
   int numDays;
};

BirthMonthDay SetBirth(int monthVal, int dayVal){
   BirthMonthDay  tempVal;

   tempVal.numMonths = monthVal;
   tempVal.numDays = dayVal;

   return tempVal;
}

int main() {
   BirthMonthDay myBirthday;
   int monthVal;
   int dayVal;

   cin >> monthVal >> dayVal;

   myBirthday = SetBirth(monthVal, dayVal);

   cout << "I was born on " << myBirthday.numMonths << "/" << myBirthday.numDays << "." << endl;

   return 0;
}
