#include<iostream>
using namespace std;
class c{
    public:
    static int count;
    public:
    c(){
        count++;
    }
};int c::count;

int c::count =0;
int main(){
    c arr[5];
    cout<<c::count;
    return 0;
}