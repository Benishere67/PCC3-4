#include<iostream>
#include<random>
#include<time.h>
#include<vector>

using namespace std;

mt19937 generator(time(NULL));


int main() {
    vector<int> numList;
    uniform_int_distribution<int> Uniform(0,100);

    for(int i = 0;i < 100;i++){
        numList.push_back(Uniform(generator));

    }


}


