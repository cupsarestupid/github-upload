#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PizzaInfo {
   string pizzaName;
   int numCalories;
};

int main() {
   vector<PizzaInfo> availablePizzas(2);

   availablePizzas.at(0).pizzaName = "Barbecue";
   availablePizzas.at(1).pizzaName = "Ham and Cheese";

   for (int i = 0; i < availablePizzas.size(); ++i){
      cin >> availablePizzas.at(i).numCalories;
      }/* Your code goes here */

   cout << "A " << availablePizzas.at(0).pizzaName << " slice contains " << availablePizzas.at(0).numCalories << " calories." << endl;
   cout << "A " << availablePizzas.at(1).pizzaName << " slice contains " << availablePizzas.at(1).numCalories << " calories." << endl;

   return 0;
}
