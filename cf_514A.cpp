#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long int n;
    cin>>n;
    string s=to_string(n);
    int size=s.size();

    for(int i=0;i<size;i++){
        if(i==0&&s[i]=='9'){
            continue;
        }
        if(s[i]>'9'-s[i]+'0'){
            s[i]='9'-s[i]+'0';
        }
    }
    long long int a=stoll(s);
    cout<<a<<endl;
    return 0;
}