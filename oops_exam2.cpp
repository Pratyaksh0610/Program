#include<iostream>
using namespace std;

class complex{

    static int count;
    float r,i;
    public:
    
    complex(float x,float y){
        r=x;
        i=y;
        count++;
    }
    complex(){
        r=0;
        i=0;
        count++;
    }
    complex(float x){
        r=x;
        i=0;
        count++;
    }
    void added(complex c1,complex c2){
        r=c1.r+c2.r;
        i=c1.i+c2.i;
    }
    void display(){
        cout<<r<<"+i"<<i<<endl<<count<<endl;
    }
};

int complex:: count=0;

int main(){
    complex c1;
    complex c2(3);
    complex c3(4,6);
    complex c4;
    c4.added(c3,c2);
    c4.display();

    return 0;
}