#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {
    int UserNumber;
    int UserAnswer;

    cout << "Enter an integer: ";
    cin >> UserNumber;

    for (int i = 0; i < UserNumber + 1; i++){
        UserAnswer += i;
        cout << i;
        if(i != UserNumber) {
            cout << "+";
        }
    }

    cout << "=" << UserAnswer << endl;
}

