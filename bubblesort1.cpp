#include<iostream>
using namespace std;

// Bubble sort using recursion
// void sort(int arr[],int size){
//     if(size==1){
//         return;
//     }
//     for(int i=1;i<size;i++){
//         if(arr[i]<arr[i-1]){
//             swap(arr[i],arr[i-1]);
//         }
//     }
//     sort(arr,size-1);
// }
int main(){
    int arr[5]={1,34,65,32,8};
    int size=sizeof(arr)/sizeof(int);
    // sort(arr,size);

    /*Replacing i with 1 in for condition will also work since last element will
    get sorted each time so you will have to sort 1 less element every loop*/
    for(int i=1;i<size;i++){
        bool swapped=false;
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break; 
            /*Already sorted as if elements were sorted even
             once then swapped would have become true*/
        }
    }
    for(int k=0;k<size;k++){
    cout<<arr[k]<<endl;
    }
    return 0;
}