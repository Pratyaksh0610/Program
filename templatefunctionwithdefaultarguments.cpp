#include<iostream>
using namespace std;

template<typename T>
T sum( T a=0,T b=0,T c=0)
{
    return a+b+c;
}
int main()
{
    cout<<sum()<<endl; 
    cout<<sum(2,3,4)<<endl;
    cout<<sum(4.5,5.5)<<endl;
    return 0;
}