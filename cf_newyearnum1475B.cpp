#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n<2020){
            cout<<"NO"<<endl;
        }
        else if(n%2020==0){
            cout<<"YES"<<endl;
        }
        else if(n%2021==0){
            cout<<"YES"<<endl;
        }
        else{
            bool check=false;
        while(n>=2020){
            n-=2021;
            if(n%2020==0){
                cout<<"YES"<<endl;
                check=true;
                break;
            }
        }
        if(!check){
            cout<<"NO"<<endl;
        }
        }

    }
    return 0;
}