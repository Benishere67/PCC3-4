#include<iostream>
#include<random>
#include<time.h>




using namespace std;




mt19937 generator(time(NULL));
//mt19937 generator(22);
// MERSIN PRIME TWISTER

int main() {

    uniform_int_distribution<int> intDist(1,6);
    uniform_real_distribution<float> floatDist(0,1);


    for (int i = 0; i < 10; i++){

        cout << intDist(generator) << ' ';


    }

    cout << endl;

}
