#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int l=n-1;
    int h=0;
    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            break;
        }
        h++;
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==mini){
            break;
        }
        l--;
    }
    int ans=h-1+n-l;
    if(h>l){
        ans-=1;
    }
    cout<<ans<<endl;
    return 0;
}