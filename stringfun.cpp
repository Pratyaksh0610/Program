#include<bits/stdc++.h>
using namespace std;

void print(string s){
    cout<<s<<"-1"<<endl;
    print(s.substr(0));
}
int main(){
    string s="abcde";
    print(s);
    int a=2+3+'c';
    cout<<a;
    return 0;
}