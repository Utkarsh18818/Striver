// Linked List Element Based deletion 
// TYPE - 2
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Failed to allocate memory");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
struct node* deletek(struct node*head,int el){
    if(head == NULL) return head;
    if(head->data == el){
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct node* temp = head;
    struct node* prev;
    prev = NULL;
    while(temp != NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main() {
    struct node* head = createnode(70);
    struct node* second = createnode(80);
    struct node* third = createnode(90);
    struct node* fourth = createnode(100);
    struct node* fifth = createnode(110);
    struct node* sixth = createnode(120);
    struct node* seventh = createnode(130);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    
    head = deletek(head,90); 
    
    printf("%d",head->data);
    printf("->%d",head->next->data);
    printf("->%d",head->next->next->data);
    printf("->%d",head->next->next->next->data);
    printf("->%d",head->next->next->next->next->data);
    printf("->%d",head->next->next->next->next->next->data);
    return 0;
}
