#include<stdio.h>

int main(){
    printf("Enter the ages of father,mother,son,daughter");
    int f,m,s,d;
    scanf("%d%d%d%d",&f,&m,&s,&d);
    if(((f,m,s,d)<100) && ((f,m,s,d)>0)){
        if((f+d)==(m+s)){
            printf("Age game cleared");
        }
        else{
            printf("Age game not cleared");
        }
    } 
    else{
        printf("Game not possible");
    }
    return 0;
}