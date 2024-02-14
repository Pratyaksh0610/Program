#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll w,h;
        cin>>w>>h;

        ll kb;
        cin>>kb;
        ll bot[kb];
        ll smallb=INT_MAX;
        ll bigb=INT_MIN;
        for(int i=0;i<kb;i++){
            cin>>bot[i];
            smallb=min(smallb,bot[i]);
            bigb=max(bigb,bot[i]);
        }
        ll bdiff=bigb-smallb;

        ll ku;
        cin>>ku;
        ll top[ku];
        ll smallt=INT_MAX;
        ll bigt=INT_MIN;
        for(int i=0;i<ku;i++){
            cin>>top[i];
            smallt=min(smallt,top[i]);
            bigt=max(bigt,top[i]);
        }
        ll tdiff=bigt-smallt;

        ll kl;
        cin>>kl;
        ll left[kl];
        ll smalll=INT_MAX;
        ll bigl=INT_MIN;
        for(int i=0;i<kl;i++){
            cin>>left[i];
            smalll=min(smalll,left[i]);
            bigl=max(bigl,left[i]);
        }
        ll ldiff=bigl-smalll;

        ll kr;
        cin>>kr;
        ll right[kr];
        ll smallr=INT_MAX;
        ll bigr=INT_MIN;
        for(int i=0;i<kr;i++){
            cin>>right[i];
            smallr=min(smallr,right[i]);
            bigr=max(bigr,right[i]);
        }
        ll rdiff=bigr-smallr;

        ll avert=max(tdiff,bdiff)*h;
        ll ahori=max(ldiff,rdiff)*w;
        cout<<max(avert,ahori)<<endl;
        

    }
    return 0;
}