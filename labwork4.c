#include<stdio.h>
int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count<1){ 
        printf("The given number is a prime number");
    }
    else{
        printf("The given number is not a prime number");
    }
}