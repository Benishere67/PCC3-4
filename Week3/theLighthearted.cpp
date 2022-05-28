#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<random>

using namespace std;
mt19937 generator(time(NULL));

int main() {
    vector<string> Titles;
    vector<string> Names;
    vector<string> Adjective;
    string userData;

    while(true){
        cout << "give a Title(Mr., SARGENT, MADEM). 'STOP' to quit:";
        cin >> userData;
        if(userData == "STOP"){
            break;
        }
        Titles.push_back(userData);
        cout << "input accepted" << endl;
    }
    uniform_int_distribution<int> TitleGen(0,Titles.size());
    while(true){
        cout << "give a name. 'STOP' to quit:";
        cin >> userData;
        if(userData == "STOP"){
            break;
        }
        Names.push_back(userData);
    }
    uniform_int_distribution<int> NamesGen(0,Names.size());
    while(true){
        cout << "give an adjective. 'STOP' to quit:";
        cin >> userData;
        if(userData == "STOP"){
            break;
        }
        Adjective.push_back(userData);
    }
    uniform_int_distribution<int> AdjectiveGen(0,Adjective.size());


    while(true){
        cout << "enter GO for a sily name! 'STOP' to quit:";
        cin >> userData;
        if(userData == "STOP"){
            break;
        }else if(userData == "GO"){
            cout << Titles[TitleGen(generator)] << Names[NamesGen(generator)] << Adjective[AdjectiveGen(generator)] << endl;
        }
    }
}



