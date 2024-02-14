#include<iostream>
#include<cmath>
using namespace std;

int power(int m,int n)
{
        int z=1;
    for(int i=1;i<=n;i++)
    {
        int z=z*m;
    }
    return z;
    
}
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: \n";
    cin>>a>>b;
    c=pow(a,b);
    cout<<"The value of m power n is "<<c;
    return 0;
}