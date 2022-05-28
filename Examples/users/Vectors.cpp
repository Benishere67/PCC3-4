#include<iostream>
#include<random>
#include<time.h>
#include<vector>

using namespace std;

mt19937 generator(time(NULL));


int main() {
    vector<int> numList;

    uniform_int_distribution<int> intDist(1,100);
    for(int i = 0; i < 42; i++){
        int roll = intDist(generator);
        numList.push_back(roll);

        cout << numList[i] << " ";
    }
    cout << endl;
}

