#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define y 10;

using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};



void showmap (){
               system("cls");

                  cout << "\n\n\tTic Tac Toe\n\n";
                  cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
                  cout << endl;
                  cout << "     |     |     " << endl;
                  cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
                  cout << "_____|_____|_____" << endl;
                  cout << "     |     |     " << endl;
                  cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
                  cout << "_____|_____|_____" << endl;
                  cout << "     |     |     " << endl;
                  cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
                  cout << "     |     |     " << endl << endl;


}


 int verificamapa(int player,int mark,int choice){
        if ( square[choice]!=char(88) && square[choice]!=char(79) ){
            square[choice] = mark;
        }
     else
     {
         cout<<"Invalid move ";
         player--;
         _getch();
     }
        return player;

 }





int main() {

    int player = 1;
    int i;
    int choice;
    char mark;


    do
    {


       showmap();
      player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", enter a number:  ";

        cin >> choice;

        mark =(player == 1) ? 'X' : 'O';


         player=verificamapa(player,mark,choice);

        if (square[1] == square[2] && square[2] == square[3])
            i = 1;
        else if (square[4] == square[5] && square[5] == square[6])
            i = 1;
        else if (square[7] == square[8] && square[8] == square[9])
            i = 1;
        else if (square[1] == square[4] && square[4] == square[7])
            i = 1;
        else if (square[2] == square[5] && square[5] == square[8])
            i = 1;
        else if (square[3] == square[6] && square[6] == square[9])
            i = 1;
        else if (square[1] == square[5] && square[5] == square[9])
            i = 1;
        else if (square[3] == square[5] && square[5] == square[7])
            i = 1;
        else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
            i = 0;
        else
            i = -1;

        player++;

    }
    while(i == -1);
   showmap();

    if(i==1)
        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";
    _getch();
    return 0;
}
