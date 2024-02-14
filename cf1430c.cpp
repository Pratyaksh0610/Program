#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int arr[n];
        cout<<2<<endl;
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        for(int j=n-1;j>0;j--){
            int temp=arr[j]+arr[j-1];
            cout<<arr[j]<<" "<<arr[j-1]<<endl;
            if(temp%2==0){
                arr[j-1]=temp/2;
            }
            else{
                arr[j-1]=temp/2+1;
            }
        }

    }
    return 0;
}