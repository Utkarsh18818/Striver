// Creation of DLL (Doubly linked list using Array);
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* createdll(int arr[],int n){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    head->prev = NULL;
    struct node* prev = (struct node*)malloc(sizeof(struct node));
    prev = head;
    for(int i=1; i<n; i++){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = arr[i];
         temp->next = NULL;
         temp->prev = prev; 
         prev->next = temp;
         prev = temp;
    }
    return head;
}
int main() {
    int arr[5] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct node* head = createdll(arr,n);
    struct node*temp = head;
    while (temp != NULL) {
    printf("%d", temp->data);
    if (temp->next != NULL) {
        printf("->");
    }
    temp = temp->next;
    }
    return 0;
}
