//Binary and Linear Searches
#include <iostream>
#include <cstdlib>

using namespace std;
//function prototype
bool searchList(const double [], int, double);

int main() {
  int size = 10;
  double ticket[size] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777,
  79422, 85647, 93121};
  double winningNum;

  cout << "Please enter this week's 5-digit winning lottery nummber: ";
  cin >> winningNum;

  if(searchList(ticket, size, winningNum)){
    cout << "You have a winning ticket!\n";
  }
  else{
    cout << "I'm sorry, you didn't win this week. Let's try again next" << endl;
  }
  return 0;
}

bool searchList(const double list[], int numElems, double value){
  bool found = false;
  int first = 0;
  int middle;
  int last = numElems - 1;

  while(!found && first <= last){
    middle = (first + last)/2;
    if (list[middle] == value){
      found = true;
    }
    else if (list[middle] > value){
      last = middle - 1;
    }
    else{
      first = middle + 1;
    }
  }
  return found;
}
