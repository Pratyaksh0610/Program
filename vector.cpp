#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5};
    vector<int>& nums=a;
    cout<<nums.front();


    return 0;
}