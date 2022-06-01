#include<iostream>
#include<vector>

using namespace std;

void showVector(vector<int> &); //not send value back
int sumVector(vector<int> &); //usable output
void multVector(vector<int> &);// 'vector &' will access and change the actual vector it is given instead of making a copy
bool isEven(int); //odd/even function

int main() {


    vector<int> someNumbers = {1,3,4,5,6,76,2,1,-5};

    showVector(someNumbers);
    multVector(someNumbers);
    showVector(someNumbers);

    int ans = sumVector(someNumbers);
    if(isEven(ans)){
        cout << ans << " is even!" << endl;
    }else{
        cout << ans << " is odd!" << endl;
    }



}



void showVector (vector<int> &theList) {

    for(auto num: theList){//goes through list and grabs each thing, making it 'num' for each pass through
        cout << num << " ";
    }
    cout << endl;
}


int sumVector (vector<int> &theList) {

    int total = 0;

    for(auto num: theList){
        total+=num;
    }
    return total;
}

void multVector(vector<int> &theList){

    for(int i = 0; i < theList.size(); i++){
        theList[i] *= 7;

    }
}

bool isEven (int num) {
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }

}

