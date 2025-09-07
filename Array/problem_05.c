//Union of two Arrays by Two pinters Approach
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {1, 2, 4, 5, 6};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(brr) / sizeof(brr[0]);

    int crr[10]; // Max size = n1 + n2
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr[i] < brr[j]) {
            if (k == 0 || crr[k - 1] != arr[i])
                crr[k++] = arr[i];
            i++;
        } else if (arr[i] > brr[j]) {
            if (k == 0 || crr[k - 1] != brr[j])
                crr[k++] = brr[j];
            j++;
        } else {
            if (k == 0 || crr[k - 1] != arr[i])
                crr[k++] = arr[i];
            i++;
            j++;
        }
    }

    
    while (i < n1) {
        if (k == 0 || crr[k - 1] != arr[i])
            crr[k++] = arr[i];
        i++;
    }

    
    while (j < n2) {
        if (k == 0 || crr[k - 1] != brr[j])
            crr[k++] = brr[j];
        j++;
    }

    
    printf("Union of arrays:\n");
    for (int x = 0; x < k; x++) {
        printf("%d ", crr[x]);
    }
    printf("\n");

    return 0;
}

// Total Time Complexity - O(n1+n2)
// Total Space complexity - O(n1+n2)
