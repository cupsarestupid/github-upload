/*Write a c++ program that asks for the user's name and stores it in a variable.
Then use a loop structure to ask for 5 int values and store in an array.
Determine which number is the largest and display to the screen:

Hello UserName!

The largest value entered is: XX

UserName and XX should be replaced with your values stored in variables. */

#include <iostream>
#include <string>

using namespace std;

const int size = 5;

//Just testing out my struct skills to see if I still remember
struct UsersInfo
{
  string name;
  double values[size];
};

int main(){
  UsersInfo user;

  //gets name
  cout << "Please enter your name:\n";
  getline(cin, user.name);

  //gets array values
  for (int i = 0; i < size; i++){
    cout << "Enter Number " << i + 1 << " : ";
    cin >> user.values[i];
  }

  /*finds largest value and assigns to the first memory location. I think the more
  efficient way to do this would have been using a sort function and Then
  have the return value equal user.values[5], but I ran into some issues trying
  to return this.  Alternativly I probably could have also called on a file
  during the preprocessor phase, having it calculate the formula there, but that
  would just be going too deep for this intro assignment*/
  for (int i = 0; i < size; i++){
    if (user.values[0] < user.values[i]){
      user.values[0] = user.values[i];
    }
  }

  //outputs the requested assignment information
  cout << "\nHello " << user.name;
  cout << "\nThe largest value entered is: " << user.values[0];

  return 0;
}
