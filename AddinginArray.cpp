#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int A[6]={100,2,3,4,5,6};

    for(auto x: A){
        sum+=x;
    }
    cout<<sum;
    return 0;
}