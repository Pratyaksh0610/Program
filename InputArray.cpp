#include<iostream>
using namespace std;
int main(){
    int A[5];

    for(int i=0;i<5;i++){
        cout<<"Enter 5 numbers: ";
        cin>>A[i];  
    }

    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    return 0;
}