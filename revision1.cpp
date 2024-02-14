#include<iostream>
using namespace std;
int main(){
    int a=2,b=5;
    int main = (a>b)?a:(b==5)?(++(++b)):--b;
    cout<<main;
    return 0;
}