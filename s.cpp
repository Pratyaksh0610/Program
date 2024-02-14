#include<iostream>
using namespace std;

class A;

class B{
    private:
    int b=6;
    public:
    void sum(A &ob);
};
class A{
    private:
    int a=4;
    public:
    friend void B:: sum(A &ob);
};

void B:: sum(A &ob){
    cout<<ob.a;
}

int main(){

    return 0;
}









































// #include<iostream>
// using namespace std;

// class complex{
//     private:

//     int x=4;
//     int y=5;
//     protected:

//     public:
//     void virtual greet()=0;
//     void exam(){
//         cout<<"BEST OF LUCK"<<endl;
//     }
// };

// class deri: public complex{

//     private:
//     int a=68;
//     int b=99;

//     protected:
    
//     public:
//     void greet(){
//         cout<<"HAVE A NICE DAY"<<endl;
//     }
// };

// int main(){
//     deri c;
//     complex * ptr=& c;
//     ptr->exam();
//     ptr->greet();
//     return 0;
// }
