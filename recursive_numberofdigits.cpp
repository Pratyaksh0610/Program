#include<iostream>
using namespace std;

int displaydigits(int n){
    if(n/10==0){
        return 1;
    }
    int small=displaydigits(n/10);
    int ans=small+1;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<displaydigits(n);
    return 0;
}