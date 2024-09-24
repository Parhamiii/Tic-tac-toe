#include <iostream>
#include <windows.h>
using namespace std;
void gameTurn(int x, char board[3][3], bool computerTurn){

    switch (x) {
        case 1 : board[0][0]=  computerTurn ? 'O' : 'X';
            break;
        case 2 : board[0][1]=  computerTurn ? 'O' : 'X';
            break;
        case 3 : board[0][2]=  computerTurn ? 'O' : 'X';
            break;
        case 4 : board[1][0]=  computerTurn ? 'O' : 'X';
            break;
        case 5 : board[1][1]=  computerTurn ? 'O' : 'X';
            break;
        case 6 : board[1][2]=  computerTurn ? 'O' : 'X';
            break;
        case 7 : board[2][0]=  computerTurn ? 'O' : 'X';
            break;
        case 8 : board[2][1]=  computerTurn ? 'O' : 'X';
            break;
        case 9 : board[2][2]=  computerTurn ? 'O' : 'X';
            break;
    }
}
void showBoard(char board[3][3]){
    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
   char board[3][3]= { {'_','_','_'},{'_','_','_'},{'_','_','_'} };
   char player1='X', player2='O';


return 0;
}
