#include <iostream>
using namespace std;

struct WidthFtIn {
   int feetVal;
   int inchesVal;
};

WidthFtIn ConvertToFeetAndInches(int totalInches) {
   WidthFtIn tempVal;

   tempVal.feetVal = totalInches / 12;
   tempVal.inchesVal = totalInches % 12;

   return tempVal;

}

int main() {
   WidthFtIn objectSize;
   int totalInches;
   cout << "Enter total inches" << endl;
   cin >> totalInches;

   objectSize = ConvertToFeetAndInches(totalInches);

   cout << objectSize.feetVal << " feet and " << objectSize.inchesVal << " inches" << endl;

   return 0;
}
