#include<iostream>
using namespace std;

int firstindex(int a[],int size,int key,int n){
    if(size==0){
        return -1;
    }
    if(a[0]==key){
        int ans=n-size;
        return ans; 
    }
    int ans=firstindex(a+1,size-1,key,n);
    return ans;
}

int main(){
    int size;
    cin>>size;
    int n=size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[size];
    }
    int key;
    cin>>key;
    cout<<firstindex(a,size,key,n);
    return 0;
}