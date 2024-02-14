#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node * next;
    struct node *prev;
};

int main(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->val=198;
    temp->next=NULL;
    temp->prev=NULL;
    printf("%d",temp->val);
    return 0;
}