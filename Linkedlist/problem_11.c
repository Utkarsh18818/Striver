// Sort A LinkedList of 0's,1's and 2's
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int val){
struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory Allocation Falied");
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
struct node* change(struct node* head){
    struct node* temp = head;
    int cnt0 = 0,cnt1 = 0, cnt2 = 0;
    while(temp!=NULL){
        if(temp->data == 0){
            cnt0++;
        }
        else if(temp->data == 1){
            cnt1++;
        }
        else if(temp->data == 2){
            cnt2++;
        }
        temp = temp->next;
    }
    temp = head;
    while(cnt0){
        temp->data = 0;
        temp = temp->next;
        cnt0--;
    }
    while(cnt1){
        temp->data = 1;
        temp = temp->next;
        cnt1--;
    }
    while(cnt2){
        temp->data = 2;
        temp = temp->next;
        cnt2--;
    }
    return head;
}
int main() {
    struct node* head = createnode(1);
    struct node* second = createnode(0);
    struct node* third = createnode(1);
    struct node* fourth = createnode(0);
    struct node* fifth = createnode(2);
    struct node* sixth = createnode(2);
    struct node* seventh = createnode(0);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    struct node* temp = head;
    printf("INSERTED LINKEDLIST:\n");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
        if(temp!=NULL){
            printf("->");
        }
    }
    printf("\nMODIFIED LINKEDLIST:\n");
    head = change(head);
    temp = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
        if(temp!=NULL){
            printf("->");
        }
    }
    return 0;
}
