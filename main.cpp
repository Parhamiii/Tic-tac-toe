#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
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
int computerChoice(char board[3][3]){
    int x=0;
    bool flag= false;

    while (!flag){
        flag = true;
        srand(time(0));
        x=rand()%9+1;
        for(int i = 0 ; i < 3; i++){
            for(int j = 0; j < 3; j++){
      //TODO    inja y chizi bayad yadam bashe:
                switch (x) {
                    case 1 : board[0][0] == '_' ? flag = true : flag = false;
                    break;
                    case 2 : board[0][1]  == '_' ? flag = true : flag = false;
                        break;
                    case 3 : board[0][2]== '_' ? flag = true : flag = false;
                        break;
                    case 4 : board[1][0]== '_' ? flag = true : flag = false;
                        break;
                    case 5 : board[1][1]== '_' ? flag = true : flag = false;
                        break;
                    case 6 : board[1][2]== '_' ? flag = true : flag = false;
                        break;
                    case 7 : board[2][0]== '_' ? flag = true : flag = false;
                        break;
                    case 8 : board[2][1]== '_' ? flag = true : flag = false;
                        break;
                    case 9 : board[2][2]== '_' ? flag = true : flag = false;
                        break;
                }
                if (!flag)
                    break;
            }
            if (!flag)
                break;
        }
    }
    return x;
}

void play(char board[3][3]){
    int counter=0;
    while (counter!=4){
        int x=0;
        cin>>x;
        gameTurn(x, board, false);
        x=computerChoice(board);
        gameTurn(x, board, true);
        counter++;
        showBoard(board);
    }
}
int main() {
   char board[3][3]= { {'_','_','_'},{'_','_','_'},{'_','_','_'} };

    play(board);
return 0;
}
