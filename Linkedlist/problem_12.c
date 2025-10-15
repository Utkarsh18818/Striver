// LInkedlist.
// PROBLEM TYPE -> Deleted the k'th node from the last. 
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* deletenodefromlast(struct node* head, int n) {
    int cnt = 0;
    struct node* temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    if (n == cnt) {
        struct node* deletenode = head;
        head = head->next;
        free(deletenode);
        return head;
    }
    temp = head;
    for (int i = 1; i < cnt - n; i++) {
        temp = temp->next;
    }
    struct node* deletenode = temp->next;
    temp->next = temp->next->next;
    free(deletenode);

    return head;
}
struct node* createnode(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memmory Allocation Failed");
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
int main() {
    struct node* head = createnode(29);
    struct node* second = createnode(39);
    struct node* third = createnode(49);
    struct node* fourth = createnode(59);
    struct node* fifth = createnode(69);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    head = deletenodefromlast(head,2);
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
        if(temp!=NULL){
            printf("->");
        }
    }
    return 0;
}
