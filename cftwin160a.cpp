#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[100]={0};
    int coins;
    cin>>coins;

    for(int i=0;i<coins;i++){
        //cout<<"rok bhai"<<endl;
        cin>>arr[i];
    }
    sort(arr,arr+100);

    int p1=0;
    int took=0;
    int sum=0;

    for(int i=0;i<100;i++){
        sum+=arr[i];
    }
    //cout<<sum<<endl;

    for(int i=99;i>=0;i--){
        if(p1<=sum/2){
            p1+=arr[i];
            took++;
        }
    }
    cout<<took<<endl;

    return 0;
}