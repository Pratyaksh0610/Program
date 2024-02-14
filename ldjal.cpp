#include<iostream>
using namespace std;

class student{
    public:
int age;
int rollnumber;

student(){
cout<<"EUREKA"<<endl;
}
private:
~student(){
cout<<"DED";
}

};

int main(){

    student *s1=new student;
    return 0;
}