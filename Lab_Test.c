#include<stdio.h>

int main(){
    char s[5]="Hello";
    for(int i=1;i<=5;i++){
        for(int j=0;j<=i-1;j++){
            if(s[j]>s[j+1]){ 
                int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                 for(int k=0;k<5;k++){
        printf("%c",s[k]);
    }
    printf("\n");
            }
            
        }
    }
   
    return 0;
}