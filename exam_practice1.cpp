#include<iostream>
#include<stack>
#include<string>
using namespace std;

void rev_sen(string str){
    stack<string> s;

        string word="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            s.push(word);
            word="";
        }
        else if(i==str.length()-1){
            word+=str[i];
            s.push(word);
            word="";
        }
        else{
            word+=str[i];
        }
    }
    while(s.size()!=0){
        cout<<s.top()<<endl;
        s.pop();
    }

}

int main(){
    string str="I am a student at DTU";
    rev_sen(str);
    return 0;
}