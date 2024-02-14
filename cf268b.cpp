#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int pushes=0;
    int known=0;
    while(known<n){
        int i=1;
        for(int i=1;i<n-known;i++){
            pushes+=known+1;
        }
        known++;
    }
    pushes+=n;
    cout<<pushes;
    return 0;
}