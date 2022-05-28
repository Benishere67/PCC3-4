#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<float> numList;

    float userNumber;
    float mean = 0;
    float total = 0;



    while(true){
        cout << "Whould you like to input a number?(-1 to quit): ";
        cin >> userNumber;
        if (userNumber == -1) {
            break;
        }
        total += userNumber;
        numList.push_back(userNumber);
    }


    mean = total/numList.size();
    cout << "the mean is:" << mean << endl;

    for(int u = 0;u < numList.size();u++){
        if(numList[u] < mean){
            cout << numList[u] << " ";
        }
    }
}


