#include<iostream>
using namespace std;

int re(int &a){
    return ++a; 
}
int main(){
    int x=10;
    re(x);
    cout<<x;
    return 0;
}