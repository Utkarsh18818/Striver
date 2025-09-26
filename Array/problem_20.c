// Spiral Traversal in Matrix
#include <stdio.h>

int main() {
    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}; 
    int i,n = 4;
    int top=0,left=0,down=n,right=n;
    for(i=left;i<=right;i++){
        printf("%d\n",arr[top][i]);   //TC-O(n)
    }
    top+=1;
    for(i=top;i<=down;i++){
      printf("%d\n",arr[i][right]);  //TC - O(n+1-n) = O(1)
    }
    right-=1;
    for(i=left;i<=right;i++){
      printf("%d\n",arr[down][i]); // TC - O(n-1)
    }
    for(i=top;i<down;i++){
      printf("%d\n",arr[i][left]); // TC - O(n-1)
    }
    left+=1;
    for(i=left;i<=right;i++){
      printf("%d\n",arr[top][i]); //TC - O(2)
    }
    top+=1;
    down-=1;
    for(i=top;i<=down;i++){
      printf("%d\n",arr[i][right]); //TC - (!)
    }
    right-=1;
    for(i=left;i<=right;i++){
        printf("%d\n",arr[down][i]);  
    }
    for(i=left;i<=right;i++){
        printf("%d\n",arr[top][i]);
    }
    return 0;
}
// Total Space Complexity - O(n*n)
// Total Time COmplexity - O(1)
