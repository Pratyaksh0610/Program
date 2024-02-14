#include<iostream>
using namespace std;

class plus1{
    private:
    int a=5;
    int b=6;
    public:
    void disp(){
        cout<<a<<endl;
        //cout<<b<<endl;
    }
    void operator ++(){
        a++;
        cout<<"pehle wala";
    }
    void operator ++(int){
        ++a;
        cout<<"second wala";
    }
};

int main(){
    plus1 p;
    p++;
    // p.disp();
    ++p;
    // p.disp();
    return 0;
}