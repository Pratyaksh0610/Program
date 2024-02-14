#include<iostream>
using namespace std;

class time{
    private:
    int hours;
    int mins;
    public:
    time(int data,int num){
        hours=data;
        mins=num;
    }
    friend class minutes;
};
class minutes{
    public:
    int total_mins;
    minutes(time t){
        total_mins=(t.hours*60)+t.mins;
    }
    void dis(){
        cout<<total_mins<<endl;
    }
};

int main(){
    time t(1,2);
    time t2(18,92);
    time t3(14,22);

    minutes m( t );
    minutes m2( t2 );
    minutes m3( t3 );
    m.dis();
    m2.dis();
    m3.dis();
    return 0;
}