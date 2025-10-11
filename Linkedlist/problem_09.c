// DOUBLY LINKEDLIST 
// REVERSED LINKEDLIST PRINTING
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* createnode(int val){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Memmory Allocation Failed");
        return NULL;
    }
    head->data = val;
    head->next = NULL;
    head->prev = NULL;
    
    return head;
}
int main() {
    struct node* head = createnode(5);
    struct node* second = createnode(15);
    struct node* third = createnode(150);
    struct node* fourth = createnode(1500);
    struct node* fifth = createnode(15000);
    second->prev = head;
    head->next = second;
    third->prev = second;
    second->next = third;
    fourth->prev = third;
    third->next = fourth;
    fifth->prev = fourth;
    fourth->next = fifth;
    struct node* temp = head;
    printf("LINKEDLIST:\n");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
        if(temp!=NULL){
            printf("->");
        }
    }
    temp = fifth;
    printf("\nREVERSED LINKEDLIST:\n");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->prev;
        if(temp!=NULL){
            printf("->");
        }
    }
    return 0;
}
