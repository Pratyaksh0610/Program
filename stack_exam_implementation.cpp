#include<iostream>
using namespace std;

#define n 5

class stack{
    int *arr=NULL;
    int index=-1;

    public:
    stack(){
        arr=new int[n];
    }

    void push(int data){
        if(index==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        index++;
        arr[index]=data;
    }
    void pop(){
        if(index==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        index--;
    }
    int top(){
        if(index==-1){
            cout<<"Stack empty"<<endl;
            return -1;
        }
        return arr[index];
    }
    int size(){
        return index+1;
    }
    bool is_empty(){
        return index==-1;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.push(60);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.is_empty()<<endl;
    return 0;
}