#include<iostream>
using namespace std;

void SumofSubArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                int sum=0; 
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            } 
            cout<<sum<<endl; 
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    SumofSubArray(arr,n);

    return 0;
}