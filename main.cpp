#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int arr[9];
bool winPlayer1=false;
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
    /// TODO : (halate mosavi va false moondan winplayer edit shavad)
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
void matchResult(char board[3][3]){

            // horizontal states:
                if (board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X'){
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O'){
                        cout<<"You Lost"<<endl;
                        winPlayer1= true;
                    }
                else if (board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X'){
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O'){
                    cout<<"You Lost"<<endl;
                    winPlayer1= true;
                }
                else if (board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X'){
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O'){
                    cout<<"You Lost"<<endl;
                    winPlayer1= true;
                }
            // vertical states:
                else if (board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X'){
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[0][1]=='O' && board[1][0]=='O' && board[2][1]=='O'){
                    cout<<"You Lost"<<endl;
                    winPlayer1= true;
                }
                else if (board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X'){
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O'){
                    cout<<"You Lost"<<endl;
                    winPlayer1= true;
                }
                else if (board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X'){
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O'){
                    cout<<"You Lost"<<endl;
                    winPlayer1= true;
                }
            //   .....:
                else if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X') {
                     winPlayer1= true;
                     cout<<"You Win:))))))"<<endl;
                   }
                else if (board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O') {
                     cout<<"You Lost"<<endl;
                     winPlayer1= true;
                 }
                else if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X') {
                    winPlayer1= true;
                    cout<<"You Win:))))))"<<endl;
                }
                else if (board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O') {
                    cout<<"You Lost"<<endl;
                    winPlayer1= true;
                }

    }
void play(char board[3][3]){
    int counter=0;
    while (!winPlayer1){              //TODO
        int x=0;
        cin>>x;
        gameTurn(x, board, false);
        x=computerChoice(board);
        gameTurn(x, board, true);
//        counter++;
        showBoard(board);
        matchResult(board);
        if (winPlayer1)
            break;
    }
}
int main() {
   char board[3][3]= { {'_','_','_'},{'_','_','_'},{'_','_','_'} };
    play(board);
    //matchResult(board);
return 0;
}
// bool flag= true;
//                for (int i=0; i<3; i++){
//                    for(int j=0; j<3; j++){
//                        if (board[i][j]!='_'){
//                            flag= false;
//                        }
//                    }
//                    if (!winPlayer1 && !flag){
//                        cout<<"equal "<<endl;
//                        showBoard(board);
//                    }
//                }