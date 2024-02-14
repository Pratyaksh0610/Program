#include<iostream>
using namespace std;


void sum(int a,string s) throw()
{
    if(a==199){
        throw s;
    }

}

int main(){
    

    try{
        string s="abc";
        sum(10,s);
        cout<<"f1 done"<<endl;
        sum(10.2,s);
        cout<<"f2 done"<<endl;
        sum(199,s);
        cout<<"f3 done"<<endl;
    }
    catch(int a){
        cout<<"int "<<endl;
    }
    catch(double b){
        cout<<"double "<<endl;
    }
    catch(string ans){
        cout<<"aa gyi string"<<endl;
    }
    return 0;
}