#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("sample.txt");
    string s ="ABC";
    out<<s+"DEF";
    out.close();
    ifstream in("sample.txt");
    string s2;
    in>>s2;
    cout<<s2;
    return 0;
}