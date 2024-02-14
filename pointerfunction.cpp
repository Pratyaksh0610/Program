#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello World";
}
int main (){
    void (*p)();
    p=display;
    (*p)();
    return 0;
}