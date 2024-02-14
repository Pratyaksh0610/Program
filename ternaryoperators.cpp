#include<iostream>
using namespace std;

int main()
{
    int num;
    string result;
    cin>>num;
    result=(num==0)?"Zero":((num>0)?"Positive":"Negative");
    cout<<result;
    return 0;
}