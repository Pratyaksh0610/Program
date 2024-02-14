#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> mymap;
    //cout<<mymap.find(25);
    mymap[25]++;
    cout<<mymap.count(25);
    cout<<mymap.find(25);
    return 0;
}