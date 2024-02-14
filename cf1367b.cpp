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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll op=n/2;
        ll ep=n-op;
        ll eve=0;
        ll odd=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        if(odd!=op || eve!=ep){
            cout<<-1<<endl;
            continue;
        }
        int i=1,j=0,changes=0;
        bool done=true;
        while(i<n&&j<n){
            for(;i<n;i+=2){
                if(arr[i]%2==0&&i%2!=0){
                    break;
                }
            }
            for(;j<n;j+=2){
                if(arr[j]%2!=0&&j%2==0){
                    break;
                }
            }
            if(i>=n||j>=n){
                break;
            }
            swap(arr[i],arr[j]);
            changes++;
        }
        cout<<changes<<endl;
        continue;
    }
    return 0;
}