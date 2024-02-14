/*Kadane's algorithm- take current and max sums but whenever current falls below 0 reset it to 0,
 this works as we can just start the subarray from the next element of the array*/ 
#include<iostream>
using namespace std;

int kadanealgorithm(int arr[],int n){
    int max=0;
    int cs=0;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        max=(max>cs)?max:cs; 
        if(cs<0){
            cs=0;
        }
    }
    return max;
}
int main(){
    int arr[]={10,20,30,-40,-50,-60,70,80,-90,-100};
    int n=sizeof(arr)/sizeof(int);
    cout<<kadanealgorithm(arr,n);
    return 0;
}