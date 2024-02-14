#include<iostream>
using namespace std;
int main(){
    int m,sum,n;
    cout<<"enter no";
    cin>>n;
    m=n;
    sum=0;



    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }  

    }
    if(sum==(m+1)){
        cout<<"prime";
    }
    else{
        cout<<"not";
    }
    return 0;
}