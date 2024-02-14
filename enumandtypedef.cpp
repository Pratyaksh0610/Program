#include<iostream>
using namespace std;
int main(){
    enum level{beginner=10+5,intermediate=20,expert=100};
    
    level noob=beginner;
    level veteran=intermediate;
    level pro=expert;

    cout<<noob<<endl;
    cout<<intermediate<<endl;
    cout<<pro<<endl;

    // typedef int marks;
    // typedef int rollno;
    // marks m1,m2,m3;
    // m1=32;
    // cout<<m1;
    return 0;
}