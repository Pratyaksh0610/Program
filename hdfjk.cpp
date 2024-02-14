#include<iostream>
using namespace std;

class p1{

    public:
    int e=5;
    int f=6;
    p1(int a,int b): e(a), f(b){
        cout<<"lol"<<endl;
    }
    p1(){}

    virtual void greet(){
        cout<<"aji l mera";
    };
};

class p2 : public p1{
    private:
    public:
    int g=997;
    int h=7678;

    void greet(){
        cout<<"p2 chal rha hai";
    }
};

// class d1: public p1{
//     private:
//     public:
//     // void greet(){
//     //     p2::greet();
//     // }
// };

// class ult : public d1,public p2{
//     public:
//     void geter(){
//         //cout<<e;
//     }
// };


int main(){
    p2 pp;
    p1*ptr=&pp;
    ptr->greet();
    cout<<endl;
    ptr->p1::greet();
    
    return 0;
}