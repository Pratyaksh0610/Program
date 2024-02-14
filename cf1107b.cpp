#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k,x;
        cin>>k>>x;
        if(k==1){
            cout<<x<<endl;
            continue;
        }
        ll c=x;
        for(int i=1;i<k;i++){
            c+=9;
        }
        cout<<c<<endl;

    }
    return 0;
}