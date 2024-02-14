#include<iostream>
using namespace std;

void paira(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<") ";
        }
    }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    paira(arr,n);
    return 0;
}