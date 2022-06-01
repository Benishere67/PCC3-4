#include<iostream>
#include<random>
#include<time.h>
#include<vector>

using namespace std;

//void sayHowdy();
//void sayHowdy(string);
//void sayHowdy(string, int);

void sayHowdy(string name = "Bob", int times = 6);



int main() {


    sayHowdy();




}

void sayHowdy(){
    cout << "Howdy" << endl;
}

void sayHowdy(string name){
    cout << "Howdy" + name + "!" << endl;
}

void sayHowdy(string name, int times){

    for(int i = 0; i < times; i++){
        cout << "Howdy" << name << "!" << endl;
    }
}
