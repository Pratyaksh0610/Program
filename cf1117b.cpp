#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sec=INT_MIN;
    ll sind=-1;
    ll maxi=INT_MIN;
    ll mind=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>=maxi){
            sec=max(maxi,sec);
            maxi=arr[i];
            mind=i;
        }
        if(arr[i]>sec&& i!=mind){
            sec=arr[i];
        }
    }
    ll sum=0;
    ll count=k;
    ll comp=m/(k+1);
    //cout<<"COMP is "<<comp<<endl;
    sum=comp*(k*maxi);
    sum+=comp*(sec);
    ll left=m-(comp*(k+1));
    //cout<<"left is "<<left<<endl;

    if(left<=k){
        sum+=(left*maxi);
    }
    // if(left>k){
    //     sum+=(k*maxi);
    //     left-=k;
    //     sum+=(left*sec);
    // }
    cout<<sum<<endl;
    return 0;
}