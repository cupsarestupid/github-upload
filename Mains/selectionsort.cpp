#include <iostream>
#include <cstdlib>

using namespace std;

const int size = 20;

int bubbleSort(double[], int);
int selectionSort(double[], int);

int main(){
  int exchanges;

  double accounts1[size] =
  {568845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012,
  5050552, 7825877,1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002,
  137681, 47983};

  double accounts2[size] =
  {568845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012,
  5050552, 7825877,1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002,
  137681, 47983};

  exchanges = bubbleSort(accounts1, size);
  //display exchanges for bubble sort
  cout << "\n" << exchanges << " exchanges were made by Bubble Sort." << endl;

  exchanges = selectionSort(accounts2, size);
  //display exchanges for selection sort
  cout << "\n" << exchanges << " exchanges were made by Selection Sort." << endl;

  return 0;
}

int bubbleSort(double values[], int size){
  bool swap;
  double temp;
  int exchanges = 0;

  do{
    swap = false;
    for (int count = 0; count < (size - 1); count++){
      if (values[count] > values[count + 1]){
        temp = values[count];
        values[count] = values[count + 1];
        values[count + 1] = temp;
        swap = true;
        exchanges++;
      }
    }
  }while (swap);
  return exchanges;
}

int selectionSort(double values[], int size){
  int startScan;
  int minIndex;
  int exchanges = 0;
  double minValue;

  for (startScan = 0; startScan < (size - 1); startScan++){
    minIndex = startScan;
    minValue = values[startScan];
    for (int index = startScan + 1; index < size; index++){
      if (values[index < minValue]){
        minValue = values[index];
        minIndex = index;
      }
    }
    values[minIndex] = values[startScan];
    values[startScan] = minValue;
    exchanges++;
  }
  return exchanges;
}
