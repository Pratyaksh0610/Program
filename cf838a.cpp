#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        ll mini=INT_MAX;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==0){
                continue;
            }
            ll op=0;
            if(arr[i]%2==0){
                ll temp=arr[i];
                while(temp%2==0){
                    temp/=2;
                    op++;
                }
            }
            else{
                ll temp=arr[i];
                while(temp%2!=0){
                    temp/=2;
                    op++;
                }
            }
            mini=min(mini,op);
            
        }

        if(sum%2==0){
            cout<<0<<endl;
            continue;
        }
        cout<<mini<<endl;

    }
    return 0;
}