#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c= b+ a;
    return c;

}
int main()
{
    int a,b,d;
    cout<<"Enter two values: ";
    cin>>a>>b;
    d=sum(a,b);
    cout<<"The sum of the two numbers is "<<d;
    return 0;
}