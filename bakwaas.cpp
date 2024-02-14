#include<iostream>
using namespace std;

class cl{
    private:
    int a=100;
    int b=40;
    int c=3;
    public:
    friend void sum(cl c1,cl c2,cl c3);//{
    //     cout<<c1.a+c2.b+c3.c;
    // }
};
void sum(cl c1,cl c2,cl c3){
    cout<<c1.a+c2.b+c3.c;
}
int main(){
    cl c1,c2,c3;
    sum(c1,c2,c3);
    return 0;
}