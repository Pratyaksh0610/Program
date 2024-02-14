#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int times=1;times<=n-1;times++){
        for(int j=0;j<=n-times-1;j++){//overall when last second index is put as j then it compares itself with last index//
            if(arr[j]>arr[j+1]){ 
                swap(arr[j],arr[j+1]);
            }
        }
    }
} 
int main(){
    int arr[]={10,-10,20,20,30,50,-30};
    int n=sizeof(arr)/sizeof(int); 
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}