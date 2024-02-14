#include<stdio.h>
int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    int rev=0;
    while(num>0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    printf("Reversed number is: %d",rev);
    return 0;
}