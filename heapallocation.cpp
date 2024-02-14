#include<iostream>
using namespace std;

int main (){

    int *p= new int [4];
    p[0]=45;
    p[20]=200;
    p[34]=804320;
    p[14]=20760;
    p[22]=111; 
    cout<<p[0]<<endl; 
    cout<<p[20]<<endl;
    cout<<p[34]<<endl;
    cout<<p[14]<<endl;
    cout<<p<<endl;
    delete []p;
    p=nullptr; 
     cout<<p<<endl;
   
    return 0;
}