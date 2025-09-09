// Finding the Missing number in the given array(Optimal Solution)
#include <stdio.h>
int main() {
    int i,k;
    int arr[7] = {1,1,2,2,3,4,4};  // Space Complexity - O(1)
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor=0;
    for(i=0;i<n;i++){      //Time Complexity - O(N)
        xor = xor^arr[i];   
    }
    return xor;
}
// Total Time Complexity - O(N)
// Total Space Complexity - O(1)


// Better Approach 
 // Hashing
    // First of all finding max element in array
    // int i;
    // int arr[7] = {1,1,2,3,3,4,4};  // Space Complexity - O(1)
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int max = arr[0];
    // for(i=0;i<n;i++){
    //     if(arr[i]>max){   // Time Complexity - O(n)
    //         max = arr[i];
    //     }
    // }
    // int hash[max];     // Space Complexity - O(max)
    // for(i=0;i<n;i++){      // Time Complexity - O(n)
    //     hash[arr[i]]++;
    // }
    // for(i=0;i<n;i++){        // Tome complexity - O(n)
    //     if(hash[arr[i]]==1){
    //           return arr[i];
    //     }
    // }





// Brute force Approach

// int i,j,cnt,num;
//     int arr[7] = {1,1,2,3,3,4,4};   // Space complexity
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<size;i++){      // Time Complexity O(N)
//         num = arr[i];
//         cnt = 0;
//         for(j=0;j<size;j++){    // Time Complexity O(N)
//             if(arr[j]==num){
//                 cnt++;
//             }
//         }
//         if(cnt==1){
//             return num;
//             }
//       }
// Total Space Complexity - O(1)
// Total Time Complexity - O(N*N)
