#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pairs=0;
        int p[n];
        for(int i=0;i<n;i++){
            p[i]=arr[i];
        }
        sort(arr,arr+n);
        int mini=arr[0];
        int maxi=arr[n-1];
        int diff=maxi-mini;
        int minc=0;
        if(mini==maxi){
            int ans=(n-1)*(n);
            cout<<ans<<endl;
            continue;
        }
        
        int i=0,j=n-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=mini){
                break;
            }
            minc++;
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=maxi){
                break;
            }
            pairs+=minc;
        }
        if(p[0]==mini){
            pairs-=minc;
        }
        cout<<pairs*2<<endl;
    }
    return 0;
}