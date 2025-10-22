// Stack Using  Linkedlist
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE{
    int data;
    struct NODE* next;
}NODE;
NODE* top = NULL;
int size = 0;
void push(int val){
    NODE* newnode = malloc(sizeof(NODE));
    if(newnode==NULL){
        printf("Memmory Allocation Failed\n");
        exit(1);
    }
    newnode->data = val;
    newnode->next = top;
    top = newnode;
    size++;
}
int pop(){
    if(top==NULL){
        printf("Stack UnderFlow\n");
        exit(1);
    }
    int val = top->data;
    NODE* temp = top;
    top = top->next;
    free(temp);
    size--;
    return val;
}
int peek(){
    if(top==NULL){
        printf("Stack UnderFlow\n");
        exit(1);
    }
    return top->data;
}
int getsize(){
    return size;
}

int main(){
    int n,k;
    while(1){
        printf("Enter 1 for PUSH:\nEnter 2 for pop:\nEnter 3 For top:\nEnter 4 For size:\nEnter 5 for exit");
        scanf("%d",&n);
        switch(n){
            case 1:{
                printf("Enter Number:\n");
                scanf("%d",&k);
                push(k);
                break;
            }
            case 2:{
                printf("%d Deleted Successfully\n",pop());
                break;
            }
            case 3:{
                printf("%d Is The Top Most Element of the stack\n",peek());
                break;
            }
            case 4:{
                printf("Size = %d\n",getsize());
                break;
            }
            case 5:{
                exit(0);
            }
            default:{
                printf("Enter a Valid Entry\n");
                break;
            }
        }
    }
}
