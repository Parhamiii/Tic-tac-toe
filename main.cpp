#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int counter=0;
bool winPlayer1=false;
bool winComputer=false;
bool equalGame = false;
void gameTurn(int x, char board[3][3], bool computerTurn){
    switch (x) {
        case 1 : board[0][0]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 2 : board[0][1]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 3 : board[0][2]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 4 : board[1][0]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 5 : board[1][1]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 6 : board[1][2]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 7 : board[2][0]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 8 : board[2][1]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        case 9 : board[2][2]=  computerTurn ? 'O' : 'X';
            counter++;
            break;
        default:
            cout<<"end game"<<endl;
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
    srand(time(0));
    while (!flag){
        flag = true;
        x=rand()%9+1;
        for(int i = 0 ; i < 3; i++){
            for(int j = 0; j < 3; j++){
                switch (x) {
                    case 1 : board[0][0] == '_' ? flag = true : flag = false;
                        break;
                    case 2 : board[0][1] == '_' ? flag = true : flag = false;
                        break;
                    case 3 : board[0][2] == '_' ? flag = true : flag = false;
                        break;
                    case 4 : board[1][0] == '_' ? flag = true : flag = false;
                        break;
                    case 5 : board[1][1] == '_' ? flag = true : flag = false;
                        break;
                    case 6 : board[1][2] == '_' ? flag = true : flag = false;
                        break;
                    case 7 : board[2][0] == '_' ? flag = true : flag = false;
                        break;
                    case 8 : board[2][1] == '_' ? flag = true : flag = false;
                        break;
                    case 9 : board[2][2] == '_' ? flag = true : flag = false;
                        break;
                    default:
                        cout<<"Number is not in the range"<<endl;
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
int playerChoice(char board[3][3]){
    int x=0;
    bool flag= false;

    while (!flag){
        flag = true;
        cin>>x;
        for(int i = 0 ; i < 3; i++){
            for(int j = 0; j < 3; j++){
                switch (x) {
                    case 1 : board[0][0] == '_' ? flag = true : flag = false;
                        break;
                    case 2 : board[0][1] == '_' ? flag = true : flag = false;
                        break;
                    case 3 : board[0][2] == '_' ? flag = true : flag = false;
                        break;
                    case 4 : board[1][0] == '_' ? flag = true : flag = false;
                        break;
                    case 5 : board[1][1] == '_' ? flag = true : flag = false;
                        break;
                    case 6 : board[1][2] == '_' ? flag = true : flag = false;
                        break;
                    case 7 : board[2][0] == '_' ? flag = true : flag = false;
                        break;
                    case 8 : board[2][1] == '_' ? flag = true : flag = false;
                        break;
                    case 9 : board[2][2] == '_' ? flag = true : flag = false;
                        break;
                    default:
                        cout<<"Number is not in the range"<<endl;
                }
                if (!flag)
                    break;
            }
            if (!flag)
                break;
        }
        if (!flag){
            cout<<"your Choice is selected before..."<<endl;
        }
    }
    return x;
}
void matchResult(char board[3][3]) {
    // horizontal states:
    if ((board[0][0] == 'X') && board[0][1] == 'X' && board[0][2] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
    else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
    else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }            // vertical states:
    else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
    else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
    else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
        //   .....:
    else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
    else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
        winPlayer1 = true;
        cout << "You Win:))))))" << endl;
    }
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
        cout << "You Lost" << endl;
        winComputer = true;
    }
    if (counter==9 && !winPlayer1 && !winComputer){
        equalGame = true;
        cout<<"Equal"<<endl;
    }
}
void play(char board[3][3]){
    while (!winPlayer1 && !winComputer && !equalGame){
        int x=0;
        x = playerChoice( board);
        gameTurn(x, board, false);
        if (counter<9){
        x = computerChoice(board);
        gameTurn(x, board, true);
        }
        showBoard(board);
        matchResult(board);
    }
}
int main() {
    char board[3][3]= { {'_','_','_'},{'_','_','_'},{'_','_','_'} };
    play(board);
    return 0;
}
