#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>=b)?((a>=c)?a:c):((b>=c)?b:c);
    printf("The largest number is %d\n",d);

    e=(a<=b)?((a<=c)?a:c):((b<=c)?b:c);
    printf("The smallest number is %d",e);
    return 0;
}