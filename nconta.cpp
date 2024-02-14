#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans=0;
        int en=0;
        while(n>9){
            n/=10;
            en++;
        }
        ans=9*en;
        ans+=n;
        cout<<ans<<endl;
    }
    return 0;
}