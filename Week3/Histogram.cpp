#include<iostream>
#include<time.h>
#include<random>
#include<string>
#include<vector>

using namespace std;
mt19937 generator(time(NULL));

int main() {

    int userData = 0;
    int Fgen = 0;
    int GenSelection;

    vector<char> zero;
    vector<char> one;
    vector<char> two;
    vector<char> three;
    vector<char> four;
    vector<char> five;
    vector<char> six;
    vector<char> seven;
    vector<char> eight;
    vector<char> nine;
    vector<char> hundred;

    cout << "uniform(1), geometric(2) or normal(3)";
    cin >> GenSelection;

    normal_distribution<float> Normal(0,100);
    geometric_distribution<int> Geometric(0.9);
    uniform_int_distribution<int> Uniform(0,100);

    cout << "how many data plots would you like?: ";
    cin >> userData;


    for(int i = 0;i < userData;i++){

        Fgen = 0;

        if(GenSelection == 1){
            Fgen = Uniform(generator);
            cout << Fgen << endl;
        }else if(GenSelection == 2){
            Fgen = Geometric(generator);
            cout << Fgen << endl;
        }else if(GenSelection == 3){
            Fgen = Normal(generator);
            cout << Fgen << endl;
        }

        if(Fgen < 0) {
            i--;
        }else if(Fgen == 100){
            hundred.push_back('*');
        }else if(Fgen >= 90){
            nine.push_back('*');
        }else if(Fgen >= 80){
            eight.push_back('*');
        }else if(Fgen >= 70){
            seven.push_back('*');
        }else if(Fgen >= 60){
            six.push_back('*');
        }else if(Fgen >= 50){
            five.push_back('*');
        }else if(Fgen >= 40){
            four.push_back('*');
        }else if(Fgen >= 30){
            three.push_back('*');
        }else if(Fgen >= 20){
            two.push_back('*');
        }else if(Fgen >= 10){
            one.push_back('*');
        }else if(Fgen >= 0){
            zero.push_back('*');
        }
    }

    cout << endl;
    cout << "Grade Distribution:" << endl;
    cout << endl;

    cout << "  0-9:";
    for(int i = 0;i < zero.size();i++){
        cout << zero[i];
    }
    cout << endl;

    cout << "10-19:";
    for(int i = 0;i < one.size();i++){
        cout << one[i];
    }
    cout << endl;

    cout << "20-29:";
    for(int i = 0;i < two.size();i++){
        cout << two[i];
    }
    cout << endl;

    cout << "30-39:";
    for(int i = 0;i < three.size();i++){
        cout << three[i];
    }
    cout << endl;

    cout << "40-49:";
    for(int i = 0;i < four.size();i++){
        cout << four[i];
    }
    cout << endl;

    cout << "50-59:";
    for(int i = 0;i < five.size();i++){
        cout << five[i];
    }
    cout << endl;

    cout << "60-69:";
    for(int i = 0;i < six.size();i++){
        cout << six[i];
    }
    cout << endl;

    cout << "70-79:";
    for(int i = 0;i < seven.size();i++){
        cout << seven[i];
    }
    cout << endl;

    cout << "80-89:";
    for(int i = 0;i < eight.size();i++){
        cout << eight[i];
    }
    cout << endl;

    cout << "90-99:";
    for(int i = 0;i < nine.size();i++){
        cout << nine[i];
    }
    cout << endl;

    cout << "  100:";
    for(int i = 0;i < hundred.size();i++){
        cout << hundred[i];
    }
    cout << endl;
}
