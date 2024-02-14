#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: \n";
    cin>>age;

    switch(age){
        case 18:
        cout<<"You are 18.";
        break;

        case 25:
        cout<<"You are 25";
        break;

        default:
        cout<<"SORRY";
        break;
    }
    return 0;
}