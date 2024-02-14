#include<iostream>
using namespace std;

void count(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";//By interchanging line 9 and 10, we can reverse the printing order//
    count(n-1);
}
int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}