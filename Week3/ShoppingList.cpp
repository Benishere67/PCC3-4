#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    vector<string> numList;
    int userNumber;
    string userText;

    while(true){

        cout << "What would you like to do? 1=add 2=remove 3=display -1=quit: " << endl;
        cin >> userNumber;

        if (userNumber == -1) {
            break;
        }


        else if(userNumber == 1) {

            userNumber = 0;

            cout << "What would you like to add?: ";
            cin >> userText;


            numList.push_back(userText);

            cout << userText << " added" << endl;
        }



        else if(userNumber == 2) {
            userNumber = 0;
            cout << "Which index in your list would you like to remove?: ";
            cin >> userNumber;

            numList.erase(numList.begin() + userNumber);
            cout << "Index:" << userNumber << " removed" << endl;
        }


        else if(userNumber == 3) {
            userNumber = 0;
            for(int i = 0; i < numList.size();i++){
                cout << numList[i] << " ";

            }
            cout << endl;
        }
    }
}


