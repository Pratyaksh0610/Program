#include<stdio.h>
 int main(){
int time,interest_rate,principal_amt;
printf("Enter time,rate of interest,principal amount"); scanf("%d%d%d",&time,&interest_rate,&principal_amt); 
float interest = ((float)time*interest_rate*principal_amt)/100;
printf("Simple Interest is %f",interest);
return 0;
}
