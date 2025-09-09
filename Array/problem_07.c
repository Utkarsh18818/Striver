// Find the lagest number of consecutive 1's in array'
#include <stdio.h>
int main() {
    int count = 0;
    int i,max = 0;
    int arr[10] = {1,1,0,1,1,1,0,1,1};   // Space Complexity -> O(1)
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){          // Time Complexity -> O(n)
        if(arr[i]==1){
            count++;
        if (count > max) {
              max = count;
           }
        }
        else{
            count = 0;
        }
    }
    return max;
}
// Total Space Complexity -> O(1)
// Total Time Complexity -> O(N)
