#include<stdio.h>
 int main(){
int a,b;
printf("Enter any two numbers");
 scanf("%d%d",&a,&b);
if(a>b){
printf("\nFirst number is greater than Second number");
}
if(a>=b){
printf("\nFirst number is greater than or equal to Second number");
}
if(a<b){
printf("\nFirst number is less than Second number");
}
if(a<=b){
printf("\nFirst number is less than or equal to Second number");
}
if(a==b){
printf("\nFirst number is equal to Second number");
}
if(a!=b){
printf("\nFirst number is not equal to Second Number");
}
return 0;
}
