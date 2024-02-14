#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m1=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll col;
        cin>>col;

        ll dis;
        cin>>dis;

        ll arr[col];

        for(int i=0;i<col;i++){
            cin>>arr[i];
        }

        sort(arr,arr+col);
        if(arr[0]<dis){
            cout<<"NO"<<endl;
            continue;
        }
        int i=0;
        bool done=false;
        while(n){
            if(arr[i]==0||arr[i]<0){
                cout<<"NO"<<endl;
                done=true;
                break;
            }
            arr[i]-=dis;
            n-=dis;
            if(n==0){
                break;
            }
            i=(i+1)%col;
        }
        cout<<"YES"<<endl;

    }
        
    return 0;
}