#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outFS;

  outFS.open("myoutfile.txt");

  if (!outFS.is_open()){
  cout << "Could not open file myoutfile.txt." << endl;
  return 1;
  }

  outFS << "My first file out" << endl;
  outFS << "good luck 1 2 3" << endl;

  outFS.close();

  return 0;
}
