#include<iostream>
using namespace std;

int power(int base,int n){
    if(n==0){
        return 1;
    } 
    int small= power(base,n-1);
    return base*small;
}
int main(){
    int base,n;
    cin>>base>>n;
    cout<<power(base,n);
    return 0;
}