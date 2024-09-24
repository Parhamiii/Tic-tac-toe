#include <iostream>
#include <windows.h>
using namespace std;
int main() {
   char bored[3][3]= { {'_','_','_'},{'_','_','_'},{'_','_','_'} };
   for(int i = 0 ; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout<<bored[i][j]<<" ";
    }
    cout<<endl;
}
   char player1='X', player2='O';
   for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
           cin>>bored[i][j];
       }
   }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<bored[i][j]<<"  ";
        }
        cout<<endl;
    }

return 0;
}
