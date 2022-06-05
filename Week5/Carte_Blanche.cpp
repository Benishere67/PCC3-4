#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

bool GridCalc(vector<char>, int);

int main() {

    vector<char> charList;
    char userChar;
    int userTime;



    while (true){
        cout << "enter N, E, S, W. 'B' to break. (ALL UPPERCASE): ";
        cin >> userChar;
        if(userChar == 'B'){
            break;
        }
        charList.push_back(userChar);
    }

    cout << "enter your time until appointment: ";
    cin >> userTime;

    if(GridCalc(charList, userTime)){
        cout << " True (this route will make sure you are on time!)" << endl;
    }else{
        cout << " False (pick a different route to make sure you are on time!!" << endl;
    }




}


bool GridCalc (vector<char> theList, int UserT) {

    int Xoffset = 0;
    int Yoffset = 0;
    int distanceGone = 0;

    for(int i = 0; i < theList.size();i++){

        if(theList[i] == 'N'){
            Yoffset++;
        }else if(theList[i] == 'E'){
            Xoffset++;
        }else if(theList[i] == 'S'){
            Yoffset--;
        }else if(theList[i] == 'W'){
            Xoffset--;
        }
        distanceGone++;
    }

    if(Xoffset == 0 && Yoffset == 0 && distanceGone == UserT) {
        return true;
    } else{
        return false;
    }
}
