#include<iostream>
using namespace std;


int main(){
    int count=0;
    int ques;
    cin>>ques;
    while(ques--){
        int check=0;
        int p1;
        int p2;
        int p3;
        cin>>p1>>p2>>p3;
        check=p1+p2+p3;
        if(check>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}