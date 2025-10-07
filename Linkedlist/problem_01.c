#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* createnode(int value){
   struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
struct node* deletefirstnode(struct node*head){
    struct node* temp = head;
    if(head == NULL){
        return head;
    }
    head = head->next;
    free(temp);
    return head;
}
struct node* deletelastnode(struct node*head){
    struct node* temp = head;
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    if(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
int main() {
    struct node* head = createnode(70);
    struct node* second = createnode(80);
    struct node* third = createnode(90);
    head->next=second;
    second->next = third;
    head = deletefirstnode(head);
    head = deletefirstnode(head);
    //head = deletelastnode(head);
    printf("%d",head->data);
    //printf("->%d",head->next->data);
    //printf("->%d",head->next->next->data);
    return 0;
}