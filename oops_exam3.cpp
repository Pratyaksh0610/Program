#include<iostream>
using namespace std;

class pr{
    int a=5,b=4,c=3;
    public:
    void check(pr p1,pr p2){
        a=p1.a+p2.a;
        b=p1.b+p2.b;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main(){
    pr p1,p2,p3;
    p3.check(p1,p2);
    p3.display();
    return 0;
}