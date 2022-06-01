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

//BB sort start

    while(swapped){
        swapped = false;
        for(int t = 1; t < numList.size(); t++){
            if(numList[t] < numList[t-1]){
                int temp = numList[t];
                numList[t] = numList[t-1];
                numList[t-1] = temp;
                swapped = true;
                for(int i = 0;i < 20;i++){
                    cout << numList[i] << " ";
                }
                cout << endl;
            }
        }
    }
}


