#include<iostream>
using namespace std;
int main(){
    int A[10]={1,2,3,4,50,6,7,8,9,10};
    int sum=0;

    for(auto x:A){
        sum+=x;
    }
    cout<<"The sum of array is "<<sum<<endl;
    return 0;
}