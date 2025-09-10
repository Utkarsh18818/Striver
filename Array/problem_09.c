// Finding the Longest Sunb Array with sum K 
// Brute Force Approach with more efficient time complexity O(n^2)
#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,1,1,1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i, j, k, s, len = 0;

    for (i = 0; i < size; i++) {
        s = 0;
        for (j = i; j < size; j++) {
                s += arr[j];
            if (s == (j - i + 1)) {  // sum equals length
                if (j - i + 1 > len) {
                    len = j - i + 1;
                }
            }
        }
    }
    return len;
}




//(Brute Force Approach)
// #include <stdio.h>

// int main() {
//     int arr[10] = {1,2,3,4,1,1,1,2,3,4};   // Space COmplexity - O(1)
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int i, j, k, s, len = 0;

//     for (i = 0; i < size; i++) {
//         for (j = i; j < size; j++) {
//             s = 0;
//             for (k = i; k <= j; k++) {        // Time Complexity - [not exactly] - O(N*N*N) size = N
//                 s += arr[k];
//             }
//             if (s == (j - i + 1)) {  // sum equals length
//                 if (j - i + 1 > len) {
//                     len = j - i + 1;
//                 }
//             }
//         }
//     }
//     return len;
// }
