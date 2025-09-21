// Online C compiler to run C program online
// Brute Force Solution 
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {100, 101, 99, 1, 2, 3, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, maxLen = 1, currLen = 1;

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currLen++;
        } else if (arr[i] != arr[i - 1]) {
            currLen = 1;
        }
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("Length of longest consecutive sequence: %d\n", maxLen);
    return 0;
}
// Total Space Complexity - O(1)
// Total Time Complexity - O(n)
