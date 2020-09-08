//Project::Unknown
#include <iostream>
using namespace std;


wstring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char *pField = nullptr;

int Rotate(int px int, int py, int r){
  switch (r % 4)
  {
    case 0: return py * 4 + px;           // 0 degrees
    case 1: return 12 + py - (px * 4);    // 90 degrees
    case 2: return 15 - (py * 4) - px;    // 180 degrees
    case 3: return 3 - py + (px * 4);     // 270 degrees
  }
  return 0;
}

int main(){
    //create assets
    tetromino [0].append(L"..x.");
    tetromino [0].append(L"..x.");
    tetromino [0].append(L"..x.");
    tetromino [0].append(L"..x.");

    tetromino [1].append(L"..x.");
    tetromino [1].append(L".xx.");
    tetromino [1].append(L".x..");
    tetromino [1].append(L"....");

    tetromino [2].append(L".x..");
    tetromino [2].append(L".xx.");
    tetromino [2].append(L"..x.");
    tetromino [2].append(L"....");

    tetromino [3].append(L"....");
    tetromino [3].append(L".xx.");
    tetromino [3].append(L".xx.");
    tetromino [3].append(L"....");

    tetromino [4].append(L"..x.");
    tetromino [4].append(L".xx.");
    tetromino [4].append(L"..x.");
    tetromino [4].append(L"....");

    tetromino [5].append(L"....");
    tetromino [5].append(L".xx.");
    tetromino [5].append(L"..x.");
    tetromino [5].append(L"..x.");

    tetromino [6].append(L"....");
    tetromino [6].append(L".xx.");
    tetromino [6].append(L".x..");
    tetromino [6].append(L".x..");

    pField = new unsigned char [nFieldWidth*nFieldHeight]; //creates play field buffer
    for (int x = 0;  < nFieldWidth; x++){
      for (int y = 0; < nFieldHeight; y++){
        pField[y * nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;
      }
    }//Border Boundry

  return 0;
}
