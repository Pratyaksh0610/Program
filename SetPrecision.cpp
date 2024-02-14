#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b,c;
    a=99999,b=7;
    c=a/b;
    cout<<a/b<<" "<<fixed<<setprecision(5)<<c;
    return 0;
}