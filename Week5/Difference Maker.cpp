#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void BubbleSort(vector<int> &);
int main() {

    vector<int> numList;


    int userNumber;

    int Hnumber;
    int Lnumber;

    int FHnumber;
    int FLnumber;
    int Rvalue = 1000;

    for(int i = 0; i < 10; i++){
        cout << "enter a number('101' to stop): ";
        cin >> userNumber;
        if(userNumber == 101){
            break;
        }
        numList.push_back(userNumber);
    }

    BubbleSort(numList);


    for(int i = numList.size(); i > 1; i--) {

        Hnumber = numList[i - 1];
        Lnumber = numList[i - 2];

        if(Hnumber - Lnumber < Rvalue) {

            FHnumber = Hnumber;
            FLnumber = Lnumber;
            Rvalue = FHnumber - FLnumber;
        }
    }


    cout << "difference between " << FHnumber << " & " << FLnumber << " is: " << Rvalue << endl;


}


void BubbleSort (vector<int> &theList) {

    bool swapped = true;

    while(swapped){
        swapped = false;
        for(int t = 1; t < theList.size(); t++){
            if(theList[t] < theList[t-1]){
                int temp = theList[t];
                theList[t] = theList[t-1];
                theList[t-1] = temp;
                swapped = true;
            }
        }
    }
}
