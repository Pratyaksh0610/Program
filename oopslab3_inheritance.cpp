#include<iostream>
using namespace std;

class student{
    protected:
    int rollnum;
    public:
    void setr(){
        cin>>rollnum;
    }
};

class marks: public student{
    protected:
    int marks1,marks2;
    public:
    void set(int data1,int data2){
        marks1=data1;
        marks2=data2;
    }

};

class result: public marks{
    
    protected:
    int tot_marks=marks1+marks2;

    public:
    // void tot(){
    //     tot_marks=marks1+marks2;
    // }
    void display(){
        cout<<marks1<<endl;
        cout<<marks2<<endl;
        cout<<rollnum<<endl;
        cout<<tot_marks<<endl;
    }
};

int main(){
    result r;
    r.setr();
    r.set(50,40);
    //r.tot();
    r.display();
    return 0;
    
}