// Rotate Array by K places. 

#include <stdio.h>

int leftRotate(int arr[],int n,int d){
    d = d % n;
    int temp[d];               //Space complexity O(d)
    for(int i=0;i<d;i++){
        temp[i]=arr[i];  //  // Time complexity O(d)
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];   // Time complexity O(n-d)
    }
    for(int i=(n-d);i<n;i++){
        arr[i] = temp[i-(n-d)];  // Time complexity O(d)
    }
}
int main() {
    int ar[10] = {1,2,3,4,5,6,7,8,9,10}; // Space compleexity O(1)
    
    leftRotate(ar,10,5);
    
    for(int i=0;i<10;i++){
    printf("%d\n",ar[i]);
    }
}

// Time Complexity = O(d) + O(n-d) + O(d) = O(n+d)
// Extra Space Used O(d)
