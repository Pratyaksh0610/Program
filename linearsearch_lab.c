#include<stdio.h>

int binary_search(int arr[],int size,int key){
    int si=0,ei=size-1;
    while(si<=ei){
    int mid=(si+ei)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        ei=mid-1;
    }
    else{
        si=mid+1;
    }
    }

}
void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}
int linear_search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            printf("ELEMENT FOUND AT %d",i);
            return i;
        }
    }
    printf("ELEMENT NOT FOUND");
    return -1;
}
int main(){
    int size,key;
    scanf("%d%d",&size,&key);
    int arr[size];
    linear_search(arr,size,key);
    return 0;
}