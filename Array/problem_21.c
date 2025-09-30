// Count number of subArrays having sum = t
//******************************************************************
// Brute Force Solution 
// Total Time Complexity - O(n*n*n)
// Total Space Complexity - O(1)
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,-3,1,1,1,4,2,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j,k,t;
    int cnt=0;
    printf("Enter the Number here......:");
    scanf("%d",&t);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum = 0;
            for(k=i;k<=j;k++){
            sum+=arr[k];
            }
            if(sum == t){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
//******************************************************************
// Better Solution 
// Total Time Complexity - O(n*n)
// Total Space Complexity - O(1)
// #include <stdio.h>
// int main(){
//     int arr[10] = {1,2,3,-3,1,1,1,4,2,-3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i,j,t;
//     int cnt=0;
//     printf("Enter the Number here......:");
//     scanf("%d",&t);
//     for(i=0;i<n;i++){
//         int sum = 0;
//         for(j=i;j<=n;j++){
//             sum+=arr[j];
//             if(sum == t){
//                 cnt++;
//             }
//         }
//     }
//     printf("%d",cnt);
//     return 0;
// }
