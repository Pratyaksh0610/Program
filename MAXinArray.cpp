#include<iostream>
using namespace std;
int main(){
    int big=0;
    int A[6]={100,2,3,400,5,6};

    for(auto x:A){
        if(x>big)
        big=x;
    }
    cout<<big<<" is the greatest number in the array\n";
    return 0;
}