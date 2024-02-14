#include<iostream>
using namespace std;

int prefixsum(int arr[],int n){

    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int max=-99999;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){//j=i will count number itself as a subarray as well//
            int subsum=(i>0)?prefix[j]-prefix[i-1]:prefix[j];
            max=(subsum>max)?subsum:max;
        }
    }
    return max; 
}

int main(){
    int arr[]={10,-20,-30,-40,-50,-60};
    int n=sizeof(arr)/sizeof(int);
    cout<<prefixsum(arr,n);
    return 0;
}