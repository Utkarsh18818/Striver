// Reverse Elements of an aaray
// Brutre force (Recursion)
#include <stdio.h>
int f(int a[],int i,int r){
    int temp;
    if(i>=r){
        return 0;
    }
    temp = a[i];
    a[i] = a[r];
    a[r] = temp;
    
    f(a,i+1,r-1);
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    f(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
// Total Time complexity - O(N)
// Total space COmplexity - O(1)
