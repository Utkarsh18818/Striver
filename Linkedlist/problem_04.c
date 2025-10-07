//LInkedlist Insertion in the Starting
//LInkedlist Insertion in the END
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf(" Memmory Allocation Failed");
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
struct node* insertatstart(struct node*head,int val){
    struct node* inst = (struct node*)malloc(sizeof(struct node));
    if(inst == NULL){
        printf("Failed To allocate memory for insertion node");
        return NULL;
    }
    inst->data = val;
    inst->next = head;
    return inst;
}
struct node* inseratend(struct node* head,int value){
struct node* newnode = (struct node*)malloc(sizeof(struct node));
     if(newnode == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    if(head == NULL){
        return newnode;
    }
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
int main() {
    struct node* head = createnode(50);
    struct node* second = createnode(70);
    struct node* third = createnode(80);
    struct node* fourth = createnode(90);
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    
    
    head = inseratend(head,40);
    head = inseratstart(head,80);
    struct node* temp = head;
    while( temp != NULL){
    printf("%d", temp->data);
    if(temp->next) printf("->");
    temp = temp->next;
}

    return 0;
}
