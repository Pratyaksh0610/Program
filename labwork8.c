#include<stdio.h>

float add(float a,float b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
float mul(float a,float b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}
int main(){
    float a,b,d,e,f,g;
    int input;
    scanf("%f%f",&a,&b);
    do{
    printf("Enter input for desired function\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    printf("Enter 0 to exit");
    scanf("%d",&input);
    switch(input){
        case 1:
         d=add(a,b);
        printf("The result is %f\n",d);
        break;
        case 2:
         e=sub(a,b);
        printf("The result is %f\n",e);
        break;
        case 3:
         f=mul(a,b);
        printf("The result is %f\n",f);
        break;
        case 4:
         g=div(a,b);
        printf("The result is %f\n",g); 
        break;
        default:
        break;
    }
    }
    while (input!=0);
    return 0;
}