// Sort an array of 0's , 1's , 2's
// Optimal Solution 
#include <stdio.h>

void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Total Time Complexity - O(N)
// Total Space Complexity - O(1)




//**************************************************
// // Brute Force Approach 
// #include <stdio.h>

// int main() {
//     int arr[9] = {0,2,1,0,0,1,2,1,0};    // Space Compelxity -O(1) 
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i,cnt0=0,cnt1=0,cnt2=0;
//     for(i=0;i<n;i++){
//         if(arr[i]==0){
//             cnt0++;
//         }                        // Time Complexity - O(N)
//         else if(arr[i]==1){
//             cnt1++;
//         }
//         else if(arr[i]==2){
//             cnt2++;
//         }
//     }
//     for(i=0;i<n-cnt1+cnt2;i++){
//         arr[i] = 0;            // Time Complexity = O(n-cnt1+cnt2)
//     }
//     for(i=cnt0;i<n-cnt2;i++){
//         arr[i] = 1;           // Time Complexity = O(n-cnt2+cnt0)
//     }
//     for(i=n-cnt2;i<n;i++){
//         arr[i] = 2;           // Time Complexity = O(n-(n-cnt2)
//     }
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// // Total Time Complexity -> O(2N)
// // Total SPace Complexity -> O(1)
