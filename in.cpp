#include<iostream>
using namespace std;

class base{
    private:
    int c=9;
    public:
    class der{
        public:
        int a=5;
        int b=6;
        void disp(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    };
};
int main(){
    base:: der obj;
    obj.disp();
    return 0;
}