#include<iostream>
using namespace std;

void pastry(int arr[])
{
 int m=sizeof(arr)/sizeof(int);
 cout<<sizeof(arr)<<endl;
 cout<<m<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    cout<<sizeof(int*)<<endl;

    pastry(arr);
    return 0;
}