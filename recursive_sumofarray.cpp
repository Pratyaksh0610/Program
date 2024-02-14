#include<iostream>
using namespace std;

int sum(int *arr,int size){
    if(size==1){
        return arr[0];
    }
    return arr[size-1]+sum(arr,size-1);
} 
int main(){
    int arr[6]={18,22,34,46,55,64};
    cout<<sum(arr,6);
    return 0;
}