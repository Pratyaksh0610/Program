#include<iostream>
using namespace std;

void reversingarray(int arr[],int number){
    int s=0;
    int e=number-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}
int main(){
    int arra[]={89,2,34,4,5,66,432};
    int n=sizeof(arra)/sizeof(int);
    for(int i=0;i<n;i++){ 
        cout<<arra[i]<<" ";
    }
    cout<<endl;
    reversingarray(arra,n);
     for(int i=0;i<n;i++){
        cout<<arra[i]<<" ";
    }
    return 0;
}