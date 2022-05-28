#include<iostream>
#include<random>
#include<time.h>




using namespace std;


int rollDemBones(int,int);

mt19937 generator(time(NULL));

int main() {

    int Ndice = 0, Nsides = 0;

    cout << "How many dice would you like to roll?: ";
    cin >> Ndice;

    cout << "How many sides does your dice have?: ";
    cin >> Nsides;
    cout << "Your total is: " << rollDemBones(Ndice, Nsides) << endl;
}

int rollDemBones(int numDice, int sidesOnDice){

    uniform_int_distribution<int> intDist(1,sidesOnDice);
    int sum = 0;


    for (int i = 0; i < numDice; i++){
        int roll = intDist(generator);
        sum+=roll;
    }
    return sum;
}

