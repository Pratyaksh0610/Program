#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    arr[0]=-1;
    int temp;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i==k){
            temp=arr[i];
        }
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>=temp&&arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}