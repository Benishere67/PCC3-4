#include<iostream>
//#include<string>
//#include<math.h>
//#include<random>
//#include<time.h>
#include<vector>

using namespace std;

void boardDraw(vector<int>, vector<char>);
int winner(vector<int>);

int main() {
    int P1 = 0;
    int P2 = 0;
    vector<int>  gameBoard = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<char>  gameBoardchar = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    while(true){
        boardDraw(gameBoard, gameBoardchar);

        cout << "Player 1 Move: ";
        cin >> P1;

        gameBoard[P1 - 1] = 10;




        boardDraw(gameBoard, gameBoardchar);

        cout << "Player 2 Move: ";
        cin >> P2;

        gameBoard[P2 - 1] = 11;

    }
}


void boardDraw (vector<int> Board, vector<char> BoardChar){
    for(int i = 0;i < 3; i++){
        if(Board[i] == 10){
            cout << BoardChar[1];
        } else if(Board[i] == 11){
            cout << BoardChar[3];
        }else{
            cout << Board[i];
        }
        if(i != 2){
            cout << " | ";
        }
    }
    cout << endl;

    for(int i = 0;i < 3; i++){
        cout << "-";
        if(i != 2){
            cout << " + ";
        }
    }
    cout << endl;

    for(int i = 3;i < 6; i++){
        if(Board[i] == 10){
            cout << BoardChar[1];
        } else if(Board[i] == 11){
            cout << BoardChar[3];
        }else{
            cout << Board[i];
        }
        if(i != 5){
            cout << " | ";
        }
    }
    cout << endl;

    for(int i = 0;i < 3; i++){
        cout << "-";
        if(i != 2){
            cout << " + ";
        }
    }
    cout << endl;

    for(int i = 6;i < 9; i++){
        if(Board[i] == 10){
            cout << BoardChar[1];
        } else if(Board[i] == 11){
            cout << BoardChar[3];
        }else{
            cout << Board[i];
        }
        if(i != 8){
            cout << " | ";
        }
    }
    cout << endl;
}


int winner(vector<int> Board){
//Their is probably an actual mathematical way to do this, but idk what it is so im going to do it like this. I call it "the long way".
//this function must figure out who has actualy won. It is going to check ALL of the different winning combos that are possible for BOTH players.

//    if(Board[]){
//    return 1;
//    else if(){
//    return 2;
}
}

