// Count the element appears max times in the array
// Mooore's Voting Algorithm. (Most Optimal Solution)

#include<stdio.h>
int main(){
    int arr[16] = {7,7,5,1,7,5,5,7,7,7,5,5,5,7,7,7}; 
    // Space COmplexity - O(1)
    int n = sizeof(arr)/sizeof(arr[0]);
    int cnt = 0;
    int i,el;
    for(i=0;i<n;i++){
        if(cnt==0){
            cnt = 1;
            el = arr[i];       // Time Complexity- O(n)
        }
        else if(arr[i] == el){     
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el) cnt1++;
    }
    if(cnt1 > (n/2)){
        return el;
    }
    return -1;
}
// Total space complexity - O(N)
// Total Time complexity - O(1)

//*************************************************
// Brute Force Approach
// #include <stdio.h>
// int main() {
//     int arr[10] = {1,2,2,2,2,2,1,1,1,2};  // O(1)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int cnt,k;
//     for(int i=0;i<n;i++){
//         cnt = 0;
//         for(int j=0;j<n;j++){    // Time Complexity- O(N*N)
//          if(arr[j]==arr[i]){
//             cnt++;
//              }   
//         }
//         if(cnt>(n/2)){
//         printf("%d Appears %d times",arr[i],cnt);
//         return arr[i];
//         }
//     }
//     return -1;
// }
// Total Space Complexity - O(1)
// Total time complaxity - O(N*N)
