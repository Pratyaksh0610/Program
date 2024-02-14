#include<iostream>
using namespace std;

class student{
    private:
    static int tot_count;
    int a=5;

    public:
    int b=20;
    int c=30;
    student(){
        tot_count++;
    }
    //void set_a(int data);//promising to write it after//
    //void get_a();//promising again//
    void get_totcount(){
        cout<<tot_count<<endl;
    }
    void del(){
        tot_count--;
    }
};
int student:: tot_count=66;
//int student::tot_count=0;

// void student::set_a(int data){
//     a=data;
// }
// void student::get_a(){
//     cout<<a<<endl;
// }


int main(){
    student s;
    s.get_totcount();
    student s2;
    s.get_totcount();
    student s3;
    s.get_totcount();
    student s4;
    s4.del();
    s4.get_totcount();
    // s.set_a(50);
    // s.get_a();


    return 0;
}