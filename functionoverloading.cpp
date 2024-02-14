#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
float sum(float a,float b)
{
    return a+b;
}
int main(){
    float a, b;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    cout<<sum(a,b);

    return 0;
}