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
        if(n%4!=0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        ll arr[n+1];
        arr[0]=-1;
        ll esum=0;
        for(int i=1;i<=n/2;i++){
            arr[i]=2*i;
            esum+=arr[i];
        }
        ll osum=0;
        int count=0;
        for(int i=n/2+1;i<n;i++){
            arr[i]=2*count+1;
            osum+=arr[i];
            count++;
        }
        arr[n]=esum-osum;
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}