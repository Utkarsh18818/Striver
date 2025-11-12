// Reversing LInkedlist uin aspect of data using stack .
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* createnode(int val){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = val;
    node->next = NULL;
    return node;
}
struct node* top = NULL;

void push(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory Allocation Failed");
    }
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

int main(){
   struct node* node = createnode(20);
   node->next = createnode(30);
   node->next->next = createnode(40);
   node->next->next->next = createnode(50);
   struct node* temp2 = node;
   printf("Before Reversal: ");
  while(temp2!=NULL){
      printf("%d",temp2->data);
      if(temp2->next!=NULL){
          printf("->");
      }
      temp2 = temp2->next;
  }
  printf("\n");
   struct node* temp = node;
   while(temp!=NULL){
       push(temp->data);
       temp = temp->next;
   }
   temp = top;
   printf("After Reversal: ");
    while (temp != NULL) {
        printf("%d", temp->data);
        if(temp->next!=NULL){
            printf("->");
        }
        temp = temp->next;
}
}
