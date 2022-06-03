#include<iostream>
//#include<random>
//#include<time.h>
#include<vector>

using namespace std;

void BubbleSort(vector<int> &);
void findLargestMult(vector<int> &);
void PosNegDivider(vector<int> &, vector<int> &, vector<int> &);

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


    //findLargestMult(numList);

    PosNegDivider(numList, negList, posList);

    BubbleSort(negList);

    BubbleSort(posList);




    //end
    for(auto num: negList){
        cout << num << " ";
    }
    cout << " " << endl;
    for(auto num: posList){
        cout << num << " ";
    }
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

void findLargestMult (vector<int> &NegativeList, vector<int> &PositiveList) {

    int LargestN;
    int secLargestN;

    int LargestP;
    int secLargestP;

    LargestP = PositiveList[PositiveList.size()];
    secLargestP = PositiveList[PositiveList.size() - 1];

    LargestN = NegativeList[0];

}

void PosNegDivider (vector<int> &InputList, vector<int> &NegativeList, vector<int> &PositiveList) {
    for(auto num: InputList){
        if(num < 0){
            NegativeList.push_back(num);
        } else if(num > 0){
            PositiveList.push_back(num);
        }
    }
}



