#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    char s[size];
    scanf("%s",&s);
    // char s[5]="Hello";
    for(int i=1;i<=size;i++){
        for(int j=0;j<=i-1;j++){
            if(s[j]>s[j+1]){ 
                int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
            
    printf("\n");
        }
    }
   
    return 0;
}
