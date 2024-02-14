#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
  if(a>b&&a>c)
  {
      return a;
  }
  else if(b>c)
  {
      return b;
  }
  else
  {
      return c;
  }
}
int main()
{
    int a,b,c,d;
    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;
    d=max(a,b,c);
    cout<<"The greatest number is: "<<d;

    return 0;
}