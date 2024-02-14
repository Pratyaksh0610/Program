#include<iostream>
using namespace std;

class student{
    public:
    int data;
    student* next;

    student(int data){
        this->data=data;
        next=NULL;
    }
};

void print(student * head){
    student*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){

    student s1(10);
    student s2(104);
    student s3(100);
    student s4(1010);

    student *head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;

    print(head);
    return 0;
}