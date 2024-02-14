#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int r,c;
    cin>>r>>c;

    int a[r][c];
    int rcheck[r]={};
    int ccheck[c]={};

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                rcheck[i]=-1;
                ccheck[j]=-1;
            }
        }
    }
    bool check1=false;
    for(int i=0;i<r;i++){
        if(rcheck[i]==0){
            rcheck[i]=1;
            check1=true;
        }
        else{
            rcheck[i]=0;
        }
    }
    bool check2=false;
    for(int i=0;i<c;i++){
        if(ccheck[i]==0){
            ccheck[i]=1;
            check2=true;
        }
        else{
            ccheck[i]=0;
        }
    }
    if(check1!=check2){
        cout<<"NO"<<endl;
        return 0;
    }
    // for(auto i:rcheck){
    //     cout<<i;
    // }
    // cout<<endl;
    // for(auto i:ccheck){
    //     cout<<i;
    // }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=(rcheck[i]|ccheck[j])){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    int b[r][c]={};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(rcheck[i]==0){
                b[i][j]=0;
            }
            else if(ccheck[j]==0){
                b[i][j]=0;
            }
            else{
                b[i][j]=1;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}