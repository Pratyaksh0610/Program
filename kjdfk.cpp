#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,arr+10);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}