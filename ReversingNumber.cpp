#include<iostream>
using namespace std;
int main(){
    int n,r,rev;
    rev=0;
    cout<<"Enter the number which you want to reverse: \n";
    cin>>n;

    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    cout<<"The reverse number is "<<rev;
    return 0;
}