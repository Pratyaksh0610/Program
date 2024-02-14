#include<iostream>
using namespace std;

int SumofSubArray(int arr[],int n){
                int original=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            } 
            if(sum>original){
                original=sum;
            }
        }
    }
    return original;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The largest value of a subarray is "<<SumofSubArray(arr,n);

    return 0;
}