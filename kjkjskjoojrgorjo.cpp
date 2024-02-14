#include<iostream>
using namespace std;


class test;

class student{
    private:
    int n=1;
    static int count;
    public:
    student(){
        count++;
    }
    void get(){
        cout<<count;
    }
    void getn(){
        cout<<n<<endl;
    }
    void set(){
        cin>>n;
    }
    friend test;
    friend void swap(student &s,test &t);
};

class test{
    private:
    int result=0;
    public:
    void getr(){
        cout<<result<<endl;
    }
    friend void swap(student &s,test &t);
};

void swap(student &s,test &t){
    int temp=s.n;
    s.n=t.result;
    t.result=temp;
}

int student:: count=0;

int main(){
    student s;
    test t;
    swap(s,t);
    s.getn();
    t.getr();
    return 0;
}