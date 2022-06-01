#include<iostream>
//#include<random>
//#include<time.h>
#include<vector>

using namespace std;

void myFunction(vector<int> &);

int main() {
    vector<int> numList;
    int userNumber;

    for(int i = 0; i < 10; i++){

        cout << "enter a number: ";
        cin >> userNumber;

        numList.push_back(userNumber);
    }
    //start
    myFunction(numList);
    //end
    for(int i = 0; i < 10; i++){
        cout << numList[i] << " ";
    }
}


void myFunction (vector<int> &theList) {

    bool swapped = true;

    while(swapped){
        swapped = false;
        for(int t = 1; t < theList.size(); t++){
            if(theList[t] < theList[t-1]){
                int temp = theList[t];
                theList[t] = theList[t-1];
                theList[t-1] = temp;
                swapped = true;
                for(int i = 0;i < 20;i++){
                    cout << theList[i] << " ";
                }
                cout << endl;
            }
        }
    }
}
