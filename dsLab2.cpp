#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node*next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

int main(){

    Node* head=NULL;
    Node* tail=NULL;
    int data=0;

    while(data!=-1){
        cin>>data;
        if(head==NULL){
            head=new Node(data);
            tail=head;
        }
        else{
            Node*temp=new Node(data);
            tail->next=temp;
            tail=temp;
        }
    }

    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }


    return 0;
}