#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age>=12&&age<=50){
        cout<<"\nYou are eligible for the offer";
    }
    else{
        cout<<"\nSorry, you are not eligible for the offer";
    }
    return 0;
}