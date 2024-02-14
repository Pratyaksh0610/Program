#include<iostream>
using namespace std;

class X{
    static int f;
    public:
    int a=56;
    int disp(int a){
        cout<<"HELLO"<<endl;
        return a;
    }
};
int X:: f=0;

int main(){
    int X::*ptrval=&X::a;
    int (X::*ptrf)(int)=&X::disp;
    X obj;
    cout<<obj.*ptrval;
    int c=(obj.*ptrf)(19);
    return 0;
}