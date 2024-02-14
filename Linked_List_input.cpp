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
student *inp(){
    int data;
    cout<<"ENTER 1st data"<<endl;
    cin>>data;
    student * head=NULL;
    student * tail=NULL;
    while(data!=-1){
        student*s=new student(data);
        if(head==NULL){ 
            tail=s;
            head=s;
        }
        else{
            tail->next=s;
            tail=s;
        }
        cout<<"ENTER DATA"<<endl;
        cin>>data;
    }
    return head;

}
void print(student * head){
    student*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){

    // student s1(10);
    // student s2(104);
    // student s3(100);
    // student s4(1010);

    // student *head=&s1;
    // s1.next=&s2;
    // s2.next=&s3;
    // s3.next=&s4;

    student * head=inp();
    print(head);
    return 0;
}