#include<iostream>
#include<random>
#include<time.h>
#include<vector>

using namespace std;

mt19937 generator(time(NULL));


int main() {
    vector<int> numList;
    int swapcount = 0;
    bool swapped = true;
    uniform_int_distribution<int> Uniform(0,99);

    for(int i = 0;i < 20;i++){
        numList.push_back(Uniform(generator));

    }
    for(int i = 0;i < 20;i++){
        cout << numList[i] << " ";

    }
    cout << endl;

//INSERTION sort start


    for(int k = 1; k < numList.size(); k++){

        for(int j = k; j > 0 and numList[j] < numList[j-1]; j--){
            int temp = numList[j];
            numList[j] = numList[j-1];
            numList[j-1] = temp;

            for(int i = 0;i < 20;i++){
                cout << numList[i] << " ";
            }
            cout << endl;
        }

    }
}


