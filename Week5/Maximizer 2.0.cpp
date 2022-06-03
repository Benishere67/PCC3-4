#include<iostream>
//#include<random>
//#include<time.h>
#include<vector>
#include<math.h>

using namespace std;

void BubbleSort(vector<int> &);
void PosNegDivider(vector<int> &, vector<int> &, vector<int> &);

int main() {

    vector<int> numList;
    vector<int> posList;
    vector<int> negList;

    int LargestN;
    int secLargestN;

    int LargestP;
    int secLargestP;

    int userNumber;

    for(int i = 0; i < 10; i++){

        cout << "enter a number: ";
        cin >> userNumber;

        numList.push_back(userNumber);
    }
    //start



    PosNegDivider(numList, negList, posList);

    BubbleSort(negList);

    BubbleSort(posList);



    LargestP = posList[posList.size() - 1];
    secLargestP = posList[posList.size() - 2];

    LargestN = negList[0];
    secLargestN = negList[1];


    cout << "2 Largest +'s: " << LargestP << " & " << secLargestP << endl;
    cout << "2 Largest -'s: " << LargestN << " & " << secLargestN << endl;



    if(LargestP * secLargestP > abs(LargestN) * abs(secLargestN)) {

        cout << LargestP << " * " << secLargestP << " = " << LargestP * secLargestP << endl;

    } else if(LargestP * secLargestP < abs(LargestN) * abs(secLargestN)) {

        cout << LargestN << " * " << secLargestN << " = " << LargestN << secLargestN << endl;

    } else if(LargestP * secLargestP == abs(LargestN) * abs(secLargestN)){

        cout << LargestN << " * " << secLargestN << " = " << LargestN << secLargestN << endl;

        cout << LargestP << " * " << secLargestP << " = " << LargestP * secLargestP << endl;
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



void PosNegDivider (vector<int> &InputList, vector<int> &NegativeList, vector<int> &PositiveList) {
    for(auto num: InputList){
        if(num < 0){
            NegativeList.push_back(num);
        } else if(num > 0){
            PositiveList.push_back(num);
        }
    }
}



