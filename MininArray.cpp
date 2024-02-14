#include<iostream>
#include<climits>
using namespace std;
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int small= INT_MAX;

    for(auto x:A){
        if(x<small){
            small=x;
        }
    }
    cout<<small<<" is the smallest value of the array";
    return 0;
}