#include<iostream>
using namespace std;

int main (){
    int siz;
    cin>>siz;
    int arr[siz];
    cout<<sizeof(arr)<<endl;

    // Size of an array can't be changed even if you change the variable// 
    siz=89;
    cout<<sizeof(arr)<<endl;

   return 0;
}