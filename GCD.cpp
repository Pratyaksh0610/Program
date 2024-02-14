#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the two numbers whose greatest common divisor you want to find: \n";
    cin>>m>>n;
    
    while(m!=n){
        if(m>n)
        m=m-n;
        else if(m<n)
        n=n-m;
    }
    cout<<"The greatest GCD is "<<m;
    return 0;
}