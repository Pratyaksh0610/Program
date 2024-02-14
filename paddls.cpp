#include<iostream>
using namespace std;

void merge(int *a,int si,int ei){
    int mid=si+(ei-si)/2;
    int *temp=new int[ei-si+1];
    int k=0, j=mid+1, i=si;
    while(i<=mid&&j<=ei){
        if(a[i]>=a[j]){
            temp[k++]=a[j++];
        }
        else {
            temp[k++]=a[i++];
        }
    }
    while(j<=ei){
        temp[k++]=a[j++];
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    int m=si;
    for(int l=0;l<ei-si+1;l++){
        a[m++]=temp[l];
    }
    delete[] temp;
}


void mergesort(int *a,int size,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2;
    mergesort(a,si-mid+1,si,mid);
    mergesort(a,ei-mid,mid+1,ei);
    merge(a,si,ei);
}


int main(){
    int a[7]={12,42,62,11,9,5,0};
    int size=7;
    mergesort(a,size,0,size-1);
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}