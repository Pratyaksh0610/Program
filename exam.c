#include<stdio.h>

int Do(int x,int y){
    return x+y;
}
int main(){
    int a=1,b=40,c=8,d=10;
    int e=a*b/c+b/d+d-a;
    printf("%d",e);
    return 0;
   }