#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int cap=INT_MIN;
    int mini=0;
    while(n--){
        int exit;
        int enter;
        cin>>exit>>enter;
        mini-=exit;
        mini+=enter;
        cap=max(cap,mini);
    }
    cout<<cap<<endl;
    return 0;
}