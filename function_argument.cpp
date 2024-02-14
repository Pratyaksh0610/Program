#include<iostream>
using namespace std;

void dis(int n){
    cout<<n<<endl;
}
int main(){
    int n=3;
    dis(n--);//Value will be passed of 3 and later the value will be reduced to 2// 
    cout<<n;
    return 0;
}