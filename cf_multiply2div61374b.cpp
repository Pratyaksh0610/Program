#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int count=0;
        while(num%6==0){
            num/=6;
            count++;
        }
        while(num%3==0){
            count+=2;
            num/=3;
        }
        if(num>1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}