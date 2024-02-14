#include<iostream>
#include<climits>
using namespace std;

class stack{
    private:
    int*a;
    int index;
    int max;

    public:

    stack(){
    a=new int [2];
    index=0;
    max=2;
    }

    void push(int key){
        if(index==max){
            int *newdata=new int [2*max];
            for(int i=0;i<index;i++){
                newdata[i]=a[i];
            }
            delete []a;
            a=newdata;
            max=max*2;
        }
        a[index]=key;
        index++;
    }
    bool is_empty(){
        return index==0;
    }
    int size(){
        return index;
    }
    void pop(){
        if(index<=0){
            cout<<"Lowest index reached\n";
            return;
        }
        cout<<a[index-1]<<endl;
        index--;
    }
    void read_top(){
        cout<<a[index-1];
        return;
    }


};
int main(){
    
    stack chad;
    chad.push(10);
    chad.push(20);
    chad.push(30);
    chad.push(40);
    chad.read_top();
     
    // int s=chad.size();
    // cout<<s<<endl;
    // chad.push(50);
    chad.pop();
    chad.pop();
    chad.pop();
    chad.pop();
    chad.pop();
    return 0;
}