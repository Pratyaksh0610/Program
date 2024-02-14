#include<iostream>
using namespace std;

class bank{
    private:
    int fund=0;

    protected:
    float cvv_num;

    public:
    string name;

    bank (string s){
        name=s;
    }
    

    void set_fund(int data){
        fund=data;
    }
    void get_fund(){
        cout<<fund<<endl;
    }
};

int main(){
    bank b1("HDFC");
    b1.set_fund(15);
    b1.get_fund();
    cout<<b1.name<<endl;
    return 0;
}