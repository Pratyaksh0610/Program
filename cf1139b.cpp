#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int choc=0;
    long long int mini=INT_MAX;
    for(int i=n-1;i>=0;i--){
        if(mini==0){
            break;
        }
        if(arr[i]<mini){
            choc+=arr[i];
            mini=arr[i];
        }
        else{
            choc+=mini-1;
            mini--;
        }
    }
    cout<<choc<<endl;
    return 0;
}