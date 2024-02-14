#include<stdio.h>

//With recursion
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     // int answer=factorial(n);
//     // printf("The value of factorial %d is: %d",n,answer);
//     return 0;
int main(){
    int n;
    scanf("%d",&n);
    int answer=1;;
    if(n==0){
        answer=1;
    }
    else if(n>=1){
    for(int i=2;i<=n;i++){
       answer=answer*i;
    }
    }
    printf("The value of factorial %d is: %d",n,answer);

    return 0;

}