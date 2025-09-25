// Rotate Array By 90 degree.
// Brute Force Solution .
#include <stdio.h>

int main() {
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{4,3,2,1},{8,7,6,5}};
    int brr[4][4],i,j;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Reversal:\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            brr[j][n-1-i] = arr[i][j];
        }
    }
    printf("After Reversal:\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",brr[i][j]);
        }
    }
    return 0;
}
// Total Time Complexity - O(n*n)
// Total Space Complexity - O(n)
