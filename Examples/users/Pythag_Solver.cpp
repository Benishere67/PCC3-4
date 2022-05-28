#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {
    float a;
    float b;
    float c;
    char missingSide = 'a';

    cout << "which side w missing?(a,b,c)";
    cin >> missingSide;

    if(missingSide == 'c'){
        cout << "Enter short side #1: ";
        cin >> a;

        cout << "Enter short side #2: ";
        cin >> b;

        c = sqrt(a*a + b*b);
        cout << c << endl;
    }else{
        cout << "Enter short side: ";
        cin >> b;

        cout << "Enter hypotenuse: ";
        cin >> c;

        a = sqrt(c*c - b*b);
        cout << a << endl;

        }
}

