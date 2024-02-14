#include<iostream>
using namespace std;
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int l,h,key;
    cout<<"Enter key: ";
    cin>>key;
    l=0,h=9;
    

  
  while(l<h){
     int mid=(l+h)/2;
     if(key<mid){
         h=mid-1;
     }
     else if(key>mid){
         l=mid+1;
     }
     else if(key==mid){
         cout<<"Key found"<<endl;
         break;
     }
     else{
     cout<<"Key was not found\n";}
  }
    return 0;
}