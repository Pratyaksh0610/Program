#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int act=3*n;
        int op= n/2 +(n%2);
        cout<<op<<endl;
        int i=1;
        int j=act-1;
        while(i<j){
            cout<<i<<" "<<j<<endl;
            i=i+3;
            j=j-3;
        }
    }
    return 0;
}