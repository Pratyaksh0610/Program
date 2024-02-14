#include<iostream>
using namespace std;

int main (){

    int a[5]={1,2,3,4,5};
    int *p=a, *q=&a[3];
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*(--p)<<endl;
    cout<<p-q<<endl;
    cout<<q-p<<endl;

    return 0;
}