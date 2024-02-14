#include<iostream>
using namespace std;
int main(){
    float a,b,c;

    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Max of the 3 is ";

    if(a>b&&a>c){
        cout<<a;
    }
    else if(b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
    return 0;
}