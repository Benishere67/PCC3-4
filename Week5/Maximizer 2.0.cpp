#include<iostream>
//#include<random>
//#include<time.h>
#include<vector>

using namespace std;

void BubbleSort(vector<int> &);
void findLargestMult(vector<int> &);

int main() {

    vector<int> numList;
    vector<int> posList;
    vector<int> negList;

    int userNumber;

    for(int i = 0; i < 10; i++){

        cout << "enter a number: ";
        cin >> userNumber;

        numList.push_back(userNumber);
    }
    //start
    BubbleSort(numList);
    findLargestMult(numList);

    //end

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

void findLargestMult (vector<int> &theList) {

    int Largest;
    Largest = theList[theList.size() - 1];
    cout << "largest #: " << Largest << endl;

    for(auto num: theList){
        num = num * Largest;
        cout << num << " ";
    }
}

void PosNegDivider (vector<int> &theList) {


}



