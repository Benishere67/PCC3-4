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

    boardDraw(gameBoard, gameBoardchar);
    while(true){

        cout << "Player 1 Move: ";
        cin >> P1;

        gameBoard[P1 - 1] = 10;
        boardDraw(gameBoard, gameBoardchar);

        if(winner(gameBoard) == 1){
            cout << "Player 1 has won!!" << endl;
            break;
        }else if(winner(gameBoard) == 2){
            cout << "Player 2 has won!!" << endl;
            break;
        }



        cout << "Player 2 Move: ";
        cin >> P2;

        gameBoard[P2 - 1] = 11;
        boardDraw(gameBoard, gameBoardchar);

        if(winner(gameBoard) == 1){
            cout << "Player 1 has won!!" << endl;
            break;
        }else if(winner(gameBoard) == 2){
            cout << "Player 2 has won!!" << endl;
            break;
        }

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

    if(Board[0] == 10 && Board[1] == 10 && Board[2] == 10){
        return 1;
    }else if(Board[3] == 10 && Board[4] == 10 && Board[5] == 10){
        return 1;
    }else if(Board[6] == 10 && Board[7] == 10 && Board[8] == 10){
        return 1;
    }else if(Board[0] == 10 && Board[3] == 10 && Board[6] == 10){
        return 1;
    }else if(Board[1] == 10 && Board[4] == 10 && Board[7] == 10){
        return 1;
    }else if(Board[2] == 10 && Board[5] == 10 && Board[8] == 10){
        return 1;
    }else if(Board[0] == 10 && Board[4] == 10 && Board[8] == 10){
        return 1;
    }else if(Board[2] == 10 && Board[4] == 10 && Board[6] == 10){
        return 1;

    }else if(Board[0] == 11 && Board[1] == 11 && Board[2] == 11){
        return 2;
    }else if(Board[3] == 11 && Board[4] == 11 && Board[5] == 11){
        return 2;
    }else if(Board[6] == 11 && Board[7] == 11 && Board[8] == 11){
        return 2;
    }else if(Board[0] == 11 && Board[3] == 11 && Board[6] == 11){
        return 2;
    }else if(Board[1] == 11 && Board[4] == 11 && Board[7] == 11){
        return 2;
    }else if(Board[2] == 11 && Board[5] == 11 && Board[8] == 11){
        return 2;
    }else if(Board[0] == 11 && Board[4] == 11 && Board[8] == 11){
        return 2;
    }else if(Board[2] == 11 && Board[4] == 11 && Board[6] == 11){
        return 2;
    }else{
        return 0;
    }
}

