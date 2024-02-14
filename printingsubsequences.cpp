#include<cmath>
#include<iostream>
using namespace std;

int count(string input,string output[]){
    if(input.size()==0){ 
        output[0]="";
        return 1;
    }
    int small=count(input.substr(1),output);
    for(int i=0;i<small;i++){
        output[small+i]=output[i]+input[0];
    }
    return 2*small;

}

int main(){
    string input;
    cin>>input;
    int l=input.size();
    int size= pow(2,l); 
    string *output =new string[size];
    int c=count(input,output);
    for(int i=0;i<c;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}