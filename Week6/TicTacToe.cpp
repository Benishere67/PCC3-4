#include<iostream>
//#include<string>
//#include<math.h>
//#include<random>
//#include<time.h>
#include<vector>

using namespace std;

int main() {

    vector<int>  gameBoard = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<char>  gameBoardchar = {1, 2, 3, 4, 5, 6, 7, 8, 9};



    for(int i = 0;i < gameBoard.size(); i++){
        cout << gameBoard[i] << endl;
    }

}


