#include<iostream>
using namespace std;
 
bool checksorted(int *arr,int size){
    // if(arr[0]>arr[1]){
    //     return false;
    // }
    // if(size==0||size==1){
    //     return true;
    // }
    // return checksorted(arr+1,size-1);
    if(size==0||size==1){
        return true;
    } 
    if(arr[0]>arr[1]){
        return false;
    }
    return checksorted(arr+1,size-1); 
}

int main(){
    int a[7]={23,40,46,65,72,83,120};
    cout<<checksorted(a,7);

    return 0;
}