// #include<iostream>
// using namespace std;

// class complex{
//     public:
//     int r;
//     int i;
//     complex(int x,int y){
//         r=x;
//         i=y;
//     }
//     complex(){
//         r=0;
//         i=0;
//     };
//     // void operator +(complex ca){
//     //     cout<<r<<"+i"<<i<<endl;
//     //     cout<<ca.r<<"+i"<<ca.i<<endl;
//     // }
//     complex operator +(complex ca){
//         complex temp;
//         temp.r=r+ca.r;
//         temp.i=i+ca.i;
//         return temp;
//     }
//     void operator +(){
//         cout<<r<<"+i"<<i<<endl;
//     }
// };
// int main(){
//     complex c1;
//     complex c2(4,5);
//     complex c4(5,5);
//     +c2;
//     +c1;
//     complex c3=c2+c4;
//     +c3;
//     return 0;
// }

#include<iostream>
using namespace std;

class complex{
    public:
    int r;
    int i;
    complex(int x,int y){
        r=x;
        i=y;
    }
    complex(){
        r=0;
        i=0;
    };
    void operator ++(){
        r+=10;
        i+=1;
        cout<<r<<" +i"<<i<<endl;

    }
    void operator ++(int){
        cout<<r<<" +i"<<i<<endl;
        r+=1;
        i+=1;
    }
    void display(){
        cout<<r<<" +i"<<i<<endl;
    }
};
int main(){
    complex c1;
    c1++;
    c1.display();
    ++c1;
    c1.display();

    complex c2(4,5);
    complex c4(5,5);
    return 0;
}