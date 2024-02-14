#include<iostream>
using namespace std;


int largest_sum(int arr[],int n){
        int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum += arr[k];
            }
            if(max<sum){
                max=sum;
            }
        }
    }
    return max;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    cout<<largest_sum(arr,n);

    return 0;
}