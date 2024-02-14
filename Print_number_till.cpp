#include<iostream>
using namespace std;
int main(){
    int n,i;
    i=1;
    cout<<"Enter the number till which you would like to print ";
    cin>>n;

    while(n>=i){
        cout<<i<<"\n";
        i+=1;
    }
    return 0;
}