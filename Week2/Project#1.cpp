#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {

    int UserData = 0;
    int HMD = 0;
    int AVERAGE = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int F = 0;


    cout << "how many datapoints will you be inputing?: ";
    cin >> HMD;

    for(int i = 0; i < HMD;i++){

        cout << "Enter datapoint #" << i + 1 << " (100pt): ";
        cin >> UserData;

        AVERAGE += UserData;

        if(UserData > 90){
            A++;
        }
        else if(UserData > 80){
            B++;
        }
        else if(UserData > 70){
            C++;
        }
        else if(UserData > 60){
            D++;
        }
        else if(UserData < 60){
            F++;
        }
    }

    AVERAGE = AVERAGE / HMD;

    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;
    cout << "D: " << D << endl;
    cout << "F: " << F << endl;
    cout << "AVG: " << AVERAGE << endl;
}

