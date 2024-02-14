#include<iostream>
using namespace std;

// class par{
//     protected:
//     int p1=12;
//     int p2=13;
//     public:
//     int p3=40;
//     void dis(){
//         cout<<p1<<endl;
//         cout<<p2<<endl;
//         cout<<p3<<endl;
//     }
// };

// class chi : public par{
//     protected:
//     int c1=2;
//     int c2=4;
//     public:
//     int c3=5;
// };

// class child : public chi{
//     public:
//     int h1=p1+c1;
//     int h2=p2+c2;
//     int h3=p3+c3;
//     void change(int x,int y,int z){
//         p1=x;
//         p2=y;
//         p3=z;
//     }

// }; 

int main(){
    char a[100];
    gets(a);
    int i=0;
    while(a[i]!='\0'){
      i++;
    }
    cout<<i;
    // child con;
    // cout<<con.h1<<endl;
    // cout<<con.h2<<endl;
    // cout<<con.h3<<endl;
    // con.change(500,600,700);
    // con.dis();
    // cout<<con.h1<<endl;
    // cout<<con.h2<<endl;
    // cout<<con.h3<<endl;
    // int x=4;
    // int *p=&x;
  return 0;
}