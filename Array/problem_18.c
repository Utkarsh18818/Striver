// Set Matrix zeros
// Brute Force Solution 
#include <stdio.h>

void markrow(int i,int n, int arr[4][4]){
    for(int j=0;j<n;j++){
        if(arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}
void markcol(int j,int n, int arr[4][4]){
    for(int i=0;i<n;i++){
        if(arr[i][j]==0){
            arr[i][j] = -1;
        }
    }
}

int main() {
    int arr[4][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==0){
                markrow(i,n,arr);
                markcol(j,n,arr);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]=-1){
                arr[i][j] = 0;
            }
        }
    }
    return 0;
}
// Total Time Complexity - O((n*n)+(n*n)+(n*n))
