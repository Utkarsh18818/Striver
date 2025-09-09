// Find the missing element in the give array (OPtimal Solution)

#include <stdio.h>
int main() {
    int arr[4] = {1,2,4};// Space Complexity -O(1)
    int xor,i;
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor1 =0,xor2 =0;
    for(i=0;i<n-1;i++){
        xor1^=arr[i];   // Time Complexity -O(n)
        xor2^=(i+1);
    }
    xor2 ^= n;
    xor = xor1^xor2;
    return xor;
}

// Total Time Complexity -O(n)
// Total Space COmplexity -O(1)
