#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size=2*n;
        int arr[size]={0};

        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        sort(arr,arr+size);

        int ind1=((2*n)-1)/2;
        int ind2=ind1+1;

        int a=arr[ind1];
        int b=arr[ind2];
        cout<<b-a<<endl;

    }
    return 0;
}