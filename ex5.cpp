#include<iostream>
using namespace std;
int main(){
    int m,n,r,rev;
    cout<<"Enter the number which you want to check for palindromancy: \n";
    cin>>n;
    m=n;
    rev=0;
   
    while(n>0){
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    if(rev==m){
        cout<<m<<" is a palindrome number\n";
    }
    else{
        cout<<m<<" is not a palindrome number\n";
    }
    return 0;
}