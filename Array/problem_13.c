// Maximum Suarray's Sum .
// Optimal solution 
// The KADANE'S ALGORITHM 
#include <stdio.h>
#include <limits.h>

long long maxSubarraySum(int arr[], int n) {
    long long sum = 0;
    long long maxi = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

// Toatl Time Complexity - O(N)
// Total Space Complexity - O(1)


//************************************************************
// Better Solution 

// #include<stdio.h>
// int main(){
//     int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i,j,k;
//     int sum;
//     int maxi =-100000000;
//     for(i=0;i<n;i++){
//         sum = 0;
//         for(j=i;j<n;j++){
//             sum+=arr[j];
//             if (sum > maxi) {
//                 maxi = sum;
//             }
//         }
//     }
//     return 0;
// }
// // Total Time complexity O(N*N)
// // Total Space Cmplexity O(1)



// *************************************************************

// Brute Force Solution
// #include <stdio.h>
// int main() {
//     int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i,j,k;
//     int maxi =INT_MIN;
//     for(i=0;i<n;i++){
//         for(j=i;j<n;j++){
//             int sum = 0;
//             for(k=0;k<j;k++){
//                 sum+=arr[k];
//                 if (sum > maxi) {
//                     maxi = sum;
//                   }
//             }
//         }
//     }
//     return 0;
// }
// Total Space complexity - O(1)
// Total Time complexity - O(N*N*N) 
