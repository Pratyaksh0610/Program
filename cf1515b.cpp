#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int num;
        cin>>num;
        
        bool check=false;

        for(int i=0;i<33;i++){
            long long int c= pow(2,i);
            if(num==c){
                cout<<"YES"<<endl;
                check=true;
                break;
            }
        }

        if(check==false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}