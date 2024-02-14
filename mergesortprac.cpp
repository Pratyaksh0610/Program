#include<iostream>
using namespace std;
void merger(int input[],int si,int mid,int ei){
    int arr1[mid-si+1];
    int arr2[ei-mid];
    int *out=new int [ei-si+1];
    for(int i=si,k=0;i<=mid;i++,k++){
        arr1[k]=input[i];
    }
    for(int i=mid+1,k=0;i=ei;i++,k++){
        arr2[k]=input[i];
    }
    int i=si,j=mid+1,k=0;
    while(i<=mid&&j<=ei){
        if(arr1[i]>arr2[j]){
            out[k]=arr2[j];
            j++;
            k++;
        }
        else{
            out[k]=arr1[i];
            i++;
            k++;
        }
    }
    while(i<=mid){
        out[k]=arr1[i];
        k++;
        i++;
    }
     while(j<=ei){
        out[k]=arr2[j];
        k++;
        j++;
    }
    for(int m=si;m<=ei;m++){
        input[m]=out[m];
    }
}
void mergeSort2(int input[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergeSort2(input,si,mid);
    mergeSort2(input,mid+1,ei);
    merger(input,si,mid,ei);
}
void mergeSort(int input[], int size){
	// Write your code here
    mergeSort2(input,0,size-1);
        
}
int main(){
    int a[5]={1,3,7,6,3};
    mergeSort(a,5);
    
    return 0;
}