#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("OOP's Memory Allocation Failed");
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
void fn(struct node* head){
    struct node* temp = head;
    int pos = 1;

    printf("Odd-positioned nodes:\n");
    while(temp != NULL){
        if(pos % 2 == 1){
            printf("%d", temp->data);
            if(temp->next != NULL && temp->next->next != NULL){
                printf("->");
            }
        }
        temp = temp->next;
        pos++;
    }

    printf("\nEven-positioned nodes:\n");
    temp = head;
    pos = 1;
    while(temp != NULL){
        if(pos % 2 == 0){
            printf("%d", temp->data);
            if(temp->next != NULL && temp->next->next != NULL){
                printf("->");
            }
        }
        temp = temp->next;
        pos++;
    }
    printf("\n");
}



int main() {
     struct node* head = createnode(20);
     struct node* second = createnode(30);
     struct node* third = createnode(40);
     struct node* fourth = createnode(50);
     struct node* fifth = createnode(60);
     struct node* sixth = createnode(70);
     struct node* seventh = createnode(80);
     struct node* eight = createnode(90);
     struct node* ninth = createnode(100);
     head->next = second;
     second->next = third;
     third->next = fourth;
     fourth->next = fifth;
     fifth->next = sixth;
     sixth->next = seventh;
     seventh->next = eight;
     eight->next = ninth;
     struct node* temp = head;
     printf("Complete LinkedList:\n");
     while(temp!=NULL){
         printf("%d",temp->data);
         temp = temp->next;
         if(temp!=NULL){
             printf("->");
         }
     }
     printf("\n");
     fn(head);
    return 0;
}
