#include<iostream>
#include<stack>
using namespace std;


void insert_atBottom(stack<int> &s,int element){
    if(s.size()==0){
        s.push(element);
        return;
    }
    int x=s.top();
    s.pop();
    insert_atBottom(s,element);
    s.push(x); 
}

void rev_stack(stack<int> &s){
    if(s.size()==0){
        return;
    }
    int element=s.top();
    s.pop();
    rev_stack(s);
    insert_atBottom(s,element);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    rev_stack(s);
    while(s.size()!=0){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}