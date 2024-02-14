#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
 for(int i=0;i<n;i++){
     if(arr[i]==key){
         return i;
     }
 }
 return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int key=5;
    int index=linear_search(arr,n,key);
    cout<<index;
    return 0;
}