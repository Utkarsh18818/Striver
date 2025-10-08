// LInkedList Random Insertion 
// METHOD 3
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
// insertion at K 
struct node* insertionatk(struct node* head, int k, int val) {
    struct node* ins = (struct node*)malloc(sizeof(struct node));
    ins->data = val;
    ins->next = NULL;

    if (k == 0) {
        ins->next = head;
        return ins;
    }

    struct node* temp = head;
    int cnt = 1;

    while (temp != NULL && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        free(ins);
        return head;
    }

    ins->next = temp->next;
    temp->next = ins;

    return head;
}

int main() {
    struct node* head = createnode(10);
    struct node* second = createnode(100);
    struct node* third = createnode(200);
    struct node* fourth = createnode(500);
    head->next = second;
    second->next = third;
    third->next = fourth; 
    insertionatk(head, 3, 30);
    struct node* temp = head;
    while(temp != NULL){
        printf("%d", temp->data);
        if(temp->next)printf("->");
        temp = temp->next;
    }
    return 0;
}
