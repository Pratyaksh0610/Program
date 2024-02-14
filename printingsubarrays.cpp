#include<iostream>
using namespace std;

void printsubarray(int arr[],int n){
    for(int i=0;i<n;i++){
                int sum=0; 
        for(int j=i+1;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            } 
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    printsubarray(arr,n);

    return 0;
}