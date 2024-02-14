#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the value of x and y: "<<endl;
    cin>>x>>y;

        if(x>y){
        cout<<"The greater number of x and y is x: "<<x;
    }
    else if(y>x){
        cout<<"The greater number of x and y is y: "<<y;
    }
    else{
        cout<<"Both numbers are equal";
    }
    return 0;
}