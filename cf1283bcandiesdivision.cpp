#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        
        int extra=n%k;
        if(extra>k/2){
            extra=k/2;
        }

        int cand=n/k;
        cand*=k;
        cout<<cand+extra<<endl;
    }
    return 0;
}