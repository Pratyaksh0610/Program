#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int num,k,l,c,d,p,nl,np;
    cin>>num>>k>>l>>c>>d>>p>>nl>>np;

    int pdrink=nl;
    int pslice=1;
    int psalt=np;

    int numd=(k*l)/pdrink;
    int numice=c*d;
    int numsalt=p/np;

    int mini=min(numd,min(numice,numsalt));
    cout<<mini/num<<endl;
    return 0;
}