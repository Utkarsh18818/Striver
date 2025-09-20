// Leaders in an Array
// (OPTIMAL SOLUTION)
#include <stdio.h>
#include <limits.h>

void superiorElements(int a[], int n, int result[], int *resSize) {
    int maxi = INT_MIN;
    int temp[n];
    int count = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > maxi) {
            temp[count++] = a[i];
        }
        maxi = (a[i] > maxi) ? a[i] : maxi;
    }

    // Sort the result array
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        result[i] = temp[i];
    }
    *resSize = count;
}
//***************************************************************

// Brute Force Solution 
// #include <stdio.h>
// int main() {
//     int arr[7] = {10,22,12,3,0,6,9}; // Sapce Complexity O(1)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i,j,lead;
//     for(i=0;i<n;i++){
//         lead=0;
//         for(j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 lead = 1;
//                 break;              //Time Complexity O(N*N)
//             }
//         }
//         if(lead == 0) {
//             printf("%d\t",arr[i]);
//         }
//     }
//     return 0;
// }
