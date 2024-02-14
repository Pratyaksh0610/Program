#include<iostream>
using namespace std;

string swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}