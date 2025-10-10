// Storing Two linked list sum into third linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};


struct node* createnode(int arr[], int n) {
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    head->prev = NULL;
    struct node* prev = head;

    for (int i = 1; i < n; i++) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        temp->prev = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}


struct node* sum(struct node* head1, struct node* head2) {
    struct node* t1 = head1;
    struct node* t2 = head2;
    struct node* dummynode = (struct node*)malloc(sizeof(struct node));
    dummynode->data = -1;
    dummynode->next = NULL;
    dummynode->prev = NULL;
    struct node* curr = dummynode;
    int carry = 0;

    while (t1 != NULL || t2 != NULL) {
        int total = carry;
        if (t1) total += t1->data;
        if (t2) total += t2->data;

        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = total % 10;
        newnode->next = NULL;
        newnode->prev = curr;
        curr->next = newnode;
        curr = curr->next;

        carry = total / 10;
        if (t1) t1 = t1->next;
        if (t2) t2 = t2->next;
    }

    if (carry) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = carry;
        newnode->next = NULL;
        newnode->prev = curr;
        curr->next = newnode;
    }

    return dummynode->next;
}


void printlist(struct node* head, const char* label) {
    struct node* temp = head;
    int cnt = 1;
    printf("%s -> ", label);
    while (temp != NULL) {
        printf("[NODE%d = %d]", cnt, temp->data);
        if (temp->next != NULL) printf(" -> ");
        temp = temp->next;
        cnt++;
    }
    printf("\n");
}

int main() {
    int n1, n2;
    printf("Enter Size Of linked list1: ");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter Elements in Linkedlist1:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter Size Of linked list2: ");
    scanf("%d", &n2);
    int brr[n2];
    printf("Enter Elements in Linkedlist2:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &brr[i]);
    }

    struct node* head1 = createnode(arr, n1);
    struct node* head2 = createnode(brr, n2);

    printlist(head1, "LINKEDLIST 1");
    printlist(head2, "LINKEDLIST 2");

    struct node* result = sum(head1, head2);
    printlist(result, "SUM RESULT");

    return 0;
}
// Total Time Complexity -> O(max(t1,t2))
// Total Space Complexity -> O(max(t1,t2))
