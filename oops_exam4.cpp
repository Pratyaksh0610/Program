#include<iostream>
using namespace std;

class some1;
class bank{
    private:
        friend void r(bank &b1,some1 &b2);

    int id;
    int sum;
    public:
    // bank(int n1,int n2){
    //     id=n1;
    //     sum=n2;
    // }
    void set(int id,int sum){
        this->id=id;
        this->sum=sum;
    }
    void display(){
        cout<<id<<endl;
       // cout<<sum<<endl;
    }
};
class some1{
    private:
    int a=5;
    friend void r(bank &b1,some1 &b2);
    public:
    void display(){
        cout<<a<<endl;
    }
};
void r(bank &b1,some1 &b2){
        int temp=b1.id;
        b1.id=b2.a;
        b2.a=temp;
    }
int main(){
    bank b1;
    b1.set(110,50);
    // bank b2;
    // b2.set(540,90);
    some1 b2;
    b1.display();
    b2.display();
    r(b1,b2);
    b1.display();
    b2.display();
    return 0;
}