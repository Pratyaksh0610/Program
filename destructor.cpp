#include<iostream>
using namespace std;

class alpha{
    public:
    int a=5;
    int ab=56;
    int ac=598;
    alpha(float data){
        a=data;
    }
    alpha(){

    }
    ~alpha(){
        cout<<"chal bye bhai all the best\n";
    }
};
int sum(int x=0,int y=0,int z=0){
    return x+y+z;
}
int main(){
    alpha a1(10);
    cout<<a1.a<<endl;
    alpha b(20);
    alpha c;
    cout<<c.a<<endl;
    cout<<sum(3,4,5);
    return 0;
}