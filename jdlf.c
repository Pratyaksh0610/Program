#include<stdio.h>

int main(){
    int a,v,d;
    scanf("%d%d%d",&a,&v,&d);
   int i=2;
    do{
         printf("%d%d%d\n",a,v,d);
         i++;
    }while(i<=5);
    return 0;
}