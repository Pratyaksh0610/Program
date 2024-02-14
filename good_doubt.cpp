#include <iostream>
using namespace std;
int main()
{
 int i[4]={66,67,68,69};
 char *c= (char *)i;
 cout<<c<<endl;//This shows E as c will print the value at its address but that address gets increased by 12
 cout<<c+12<<endl;//This shows E as c will print the value at its address but that address gets increased by 12
 cout<<c[12]<<endl;//This is same as c+12

 cout<<*c<<endl;//By dereferencing it will start reading it as integer which was originally saved at that address
 cout<<*c+8<<endl;//Here first numerical value at *c is added with 8
 cout<<*(c+8)<<endl;//Here address is first increased by 8 and then integer value is read at that address
  return 0;
}