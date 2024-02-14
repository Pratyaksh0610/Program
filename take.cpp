// #include<iostream>
// using namespace std;

// class ch;
// class fa{
//     private:
//     int a=0;
//     int b=0;
//     int*ip = &a;
//     public:
//     static int count;
//     fa(){

//     }
//     fa(fa &f){
//         a=f.a;
//         b=f.b;
//     }
//     friend int ch::sum(fa f1,fa f2);
//     fa(int n,int m){
//         a=n;
//         b=m;
//     }
//     void see(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<count<<endl;
//     }
//     void inc(){
//         count++;
//     }
// };

// class ch{
//     private:
//     public:
//     int sum(fa f1,fa f2);
// };
// int fa:: count=0;

// int main(){
//     cout<<fa::count<<endl;
//     fa halo(1,3);
//     halo.see();
//     halo.inc();
//     halo.inc();
//     halo.inc();
//     halo.inc();
//     return 0;
// }
// CPP program to demonstrate usage of
// private constructor
#include <iostream>
using namespace std;

// class A
class A{
private:
int a=8;
int b=0;
	A(){
	cout << "constructor of A\n";
	}
    A(int x,int y){
        a=x;
        b=y;
    }
	friend class B;
    // public:
    // A(A &a1){
    // a=a1.a;
    // b=a1.b;
    //}
};

// class B, friend of class A
class B{
public:
	B(){
		//A a1(5,1);
		cout << "constructor of B\n";
	}
    void calla(){
        A a1(5,1);
        cout<<a1.a<<a1.b;
    }
};

// Driver program
int main(){
	B b1;
 b1.calla();
	return 0;
}
