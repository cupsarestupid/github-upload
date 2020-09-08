#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector <int> roster;
   vector <int> rating;
   unsigned int i;
   int Temp;
   char menuOption;

   for (i = 1; i <= 5; ++i){
      cout << "Enter player " << i << "'s jersey number:" << endl;
      cin >> Temp;
      if ((Temp >= 0) && (Temp <= 99)){
        roster.push_back(Temp);
      }
      cout << "Enter player " << i << "'s rating:" << endl;
      cin >> Temp;
      if ((Temp >= 0) && (Temp <=9)){
        rating.push_back(Temp);
      }
      cout << endl;
   }

   cout << "ROSTER" << endl;
   for (i = 0;i < 5; ++i){
      cout << "Player " << i + 1 << " -- Jersey number: " << roster.at(i) << ", Rating: " << rating.at(i) << endl;
   }

   while (menuOption != 'q' || menuOption != 'Q'){
      cout << endl;
      cout << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl << endl;

      cout << "Choose an option:" << endl;
      cin >> menuOption;

      switch(menuOption){
         case 'a':
         case 'A':
            cout << "Enter a new player's jersey number:" << endl;
            cin >> Temp;
            if ((Temp >= 0) && (Temp <= 99)){
               roster.push_back(Temp);
            }
            cout << "Enter the player's rating:" << endl;
            cin >> Temp;
            if ((Temp >= 0) && (Temp <=9)){
               rating.push_back(Temp);
            }
            break;

         case 'd':
         case 'D':
            cout << "Enter a jersey number:";
            cin >> Temp;
            for (i = 0; i < roster.size(); ++i){
               if (roster.at(i) == Temp){
                  roster.erase(roster.begin() + i);
                  rating.erase(rating.begin() + i);
                  break;
               }
            }
            break;

         case 'u':
         case 'U':
            cout << "Enter a jersey number:";
            cin >> Temp;
            for (i = 0; i < roster.size(); ++i){
               if (roster.at(i) == Temp){
                  cout << "Enter a new rating for players:";
                  cin >> Temp;
                  rating.at(i) = Temp;
                  break;
               }
            }
            break;

         case 'r':
         case 'R':
            cout << "Enter a rating:";
            cin >> Temp;
            cout << endl;
            cout << "ABOVE " << Temp << endl;
            for (i = 0; i < rating.size(); ++i){
               if (rating.at(i) > Temp){
                  cout << "Player " << i + 1 << " -- Jersey number: " << roster.at(i) << ", Rating: " << rating.at(i) << endl;
               }
            }
            break;

         case 'o':
         case 'O':
            cout << "ROSTER" << endl;
            for (i = 0; i < roster.size(); ++i){
               cout << "Player " << i + 1 << " -- Jersey number: " << roster.at(i) << ", Rating: " << rating.at(i) << endl;
            }
            break;

            case 'q':
            case 'Q':

               return 0;

          default:
             cout << "Invalid input." << endl;
             break;
         }
      }
   }
