// Polynomial Representation through LInkedlist
#include <stdio.h>
#include <stdlib.h>
struct node{
    int coeff;
    int power;
    char var;
    struct node* next;
};
struct node* createpoly(int coeff,int power){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Memmory Allocation Failed");
        return NULL;
    }
    head->coeff = coeff;
    head->power = power;
    head->var = 'x';
    head->next = NULL;
    
    return head;
}
int main() {
    struct node* head = createpoly(3,3);
    struct node* second = createpoly(2,2);
    struct node* third = createpoly(1,1);
    struct node* fourth = createpoly(1,0);
    head->next = second;
    second->next = third;
    third->next = fourth;
    
    struct node* temp  = head;
    while(temp!=NULL){
        if(temp->power == 1){
          printf("%d%c",temp->coeff,temp->var);  
        }
        else if(temp->power == 0){
            printf("%d = 0",temp->coeff);
        }
        else{
            printf("%d%c^%d",temp->coeff,temp->var,temp->power);
        }
        temp = temp->next;
        if(temp!=NULL){
            printf(" + ");
        }
    }
    return 0;
}
