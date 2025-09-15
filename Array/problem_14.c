// Rearrange Array Elements by sign
// Optimal Solution 
#include <stdio.h>

void alternateNumbers(int a[], int n) {
    int pos[n], neg[n];
    int p = 0, q = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0)
            pos[p++] = a[i];
        else
            neg[q++] = a[i];
    }

    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        a[k++] = pos[i++];
        a[k++] = neg[j++];
    }

    while (i < p)
        a[k++] = pos[i++];

    while (j < q)
        a[k++] = neg[j++];
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// Example usage
int main() {
    int a[] = {3, -2, 5, -7, -1, 6, 9};
    int n = sizeof(a) / sizeof(a[0]);

    alternateNumbers(a, n);
    printArray(a, n);

    return 0;
}






















// Brute Force solution 
// #include <stdio.h>

// void main() {
//     int arr[6] = {1,2,-4,-3,5,-6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i;
//     int pos[n/2];
//     int neg[n/2];
//     int j=0;
//     int k=0;
//     for(i=0;i<n;i++){
//         if(arr[i]<0){
//             neg[j] = arr[i];
//             j++;
//         }
//     }
//     for(i=0;i<n;i++){
//         if(arr[i]>0){
//             pos[k] = arr[i];
//             k++;
//         }
//     }
//     for(i=0;i<n/2;i++){
//         arr[2*i] = pos[i];
//         arr[2*i+1] = neg[i];
//     }
//     for(i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
// }
// // Total time complexity - O(n)+O(n)+O(n/2) --- O(5(n/2))
// // Total Space complexity - O(n/2)+O(n/2)+O(1);  O(2)
