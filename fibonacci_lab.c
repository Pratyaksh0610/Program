#include<stdio.h>

int fib(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    int answer=fib(n-1)+fib(n-2);
    return answer;
}
int main(){
    int n;
    scanf("%d",&n);
    int answer=fib(n);
    printf("The fibonacci number is :%d",answer);
    return 0;
}