// Two Sum problem

// Most Optimal solution 

#include<stdio.h>
int main(){
    int arr[5] = {1,4,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0, right = n-1,target=13;
    while(left<right){            // Time Complexity - O(N)
        int sum = arr[left]+arr[right];  
        if(sum==target){
            printf("yes");
            return 1;
        }
        else if(sum < target) left++;
        else right--;
    }
    printf("No");
    return 0;
}


//***********************************************************************************************************************

// Using Map Data Structure 
// Readuces Time Complexity to O(n+log n) and Space Complexity (O)n

// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 100003 

// typedef struct Node {
//     int key;
//     struct Node* next;
// } Node;

// Node* hashmap[SIZE];


// int hash(int key) {
//     if (key < 0) key = -key;
//     return key % SIZE;
// }


// void insert(int key) {
//     int idx = hash(key);
//     Node* new_node = malloc(sizeof(Node));
//     new_node->key = key;
//     new_node->next = hashmap[idx];      // Space Complexity - O(1)
//     hashmap[idx] = new_node;
// }


// int search(int key) {
//     int idx = hash(key);
//     Node* curr = hashmap[idx];
//     while (curr) {
//         if (curr->key == key) return 1;
//         curr = curr->next;
//     }
//     return 0;
// }

// int read(int n, int book[], int target) {
//     for (int i = 0; i < n; i++) {
//         int a = book[i];           // Time Complexity - O(n+ log n)
//         int more = target - a;
//         if (search(more)) {
//             return 1; // YES
//         }
//         insert(a);
//     }
//     return 0; // NO
// }

// int main() {
//     int book[] = {2, 7, 11, 15};
//     int n = sizeof(book) / sizeof(book[0]);
//     int target = 9;

//     if (read(n, book, target))
//         printf("YES\n");
//     else
//         printf("NO\n");

//     return 0;
// }

//***************************************************************************************
// Brute Force Solution  
// #include <stdio.h>

// int main() {
//     int arr[5] = {2,6,8,5,11};  // Space Complexity - O(1)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i,j,k=14;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){  // Time Complexity - O(n^2)
//             if(arr[i]+arr[j]==k){
//                 printf("Yes Index=[%d,%d]",i,j);
//                 return 0;
//             }
//         }
//     }
//     printf("No pair Found");
//     return 0;
// }
