#include<iostream>
using namespace std;
int main(){
    int a;

    cout<<"Enter the value of the number "<<endl;
    cin>>a;

    if(a%2!=0){
        cout<<"Number is odd";
    }
    else{
        cout<<"Number is even";
    }
    return 0;
}