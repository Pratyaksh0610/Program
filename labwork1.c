#include<stdio.h>
int main(){
        printf("Enter the number of days");
        int days;
        scanf("%d",&days); 
        int year= (days/365);
        printf("\nNumber of years is %d",year);
        int month= (days-(365*year))/30;
        printf("\nNumber of months is %d",month);
        int remaining_days= days-(365*year)-(month*30);
        printf("\nNumber of days is %d",remaining_days);
        return 0;
         
}