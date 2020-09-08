#include <iostream>
#include <iomanip>

using namespace std;

const int size = 3;

double calculateAverage(double[], int);
void sortedOrder(string[], double[], int);

int main(){
  string name;
  string assignments[size];
  double grades[size];
  double gradeAverage;

  cout << "Enter student first and last name: ";
  getline(cin, name);
  cout << "\n";

  for (int i = 0; i < size; i++){
    cout << "Enter the name of assignment " << i + 1 << ": ";
    getline(cin, assignments[i]);
  }
  cout << "\n";
  for (int i = 0; i < size; i++){
    cout << "Enter the grade for " << assignments[i] << ": ";
    cin >> grades[i];
  }
  cout << "\n";

  gradeAverage = calculateAverage(grades, size);

  cout << "The average for " << name << " is " << setprecision(1) << fixed << gradeAverage << endl;

  cout << "\nHere are your grades in order:"<< endl;

  sortedOrder(assignments, grades, size);

  cout << "\nThank you!";

  return 0;
}

double calculateAverage(double values[], int size){
  double total = 0;
  double average;

  for (int i = 0; i < size; i++){
    total += values[i];
  }
  average = (total/size);

  return average;
}
void sortedOrder(string work[], double values[], int size){
  bool swap;
  string tempWork;
  double tempValues;

  do{
    swap = false;
    for (int i = 0; i < (size - 1); i++){
      if (values[i] > values[i + 1]){
        tempWork = work[i];
        tempValues = values[i];
        work[i] = work[i + 1];
        values[i] = values[i + 1];
        work[i + 1] = tempWork;
        values[i + 1] = tempValues;
        swap = true;
      }
    }
  }while (swap);
  for (int i = 0; i < size; i++){
    cout << right << setw(30) << work[i] << ": " << values[i] << endl;
  }
  return;
}
