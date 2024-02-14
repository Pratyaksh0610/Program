#include<stdio.h>
int main(){
    int num;
    int reversed_num=0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int num2=num;
    while (num != 0) {
    reversed_num = reversed_num * 10 + num%10;
    num /= 10;
    }
    if(reversed_num==num2){
    int len=1;
    for(int i=reversed_num;i>9;i=i/10){
        len++;
    }
    if(len%2==0){
        printf("Given number is a Palindrome of even length.");
    }
    else if(len%2!=0){
        printf("Given number is a Palindrome of odd length");
    }
    }
    else{
    printf("Given number is NOT a Palindrome.");
    }
    return 0;
}
