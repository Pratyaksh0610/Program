#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int r,c;
    cin>>r>>c;
    char mat[r][c];
    int i=0,j=0,count=0;
    while(i<r){
        if(i%2==0){
            while(j<c){
                mat[i][j++]='#';
            }
            count++;
            j=0;
            i++;
        }
        else if(count%2!=0){
            mat[i++][c-1]='#';
        }
        else if(count%2==0){
            mat[i++][0]='#';
        }
        
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]!='#'){
                cout<<'.';
            }
            else{
                cout<<mat[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}