// Linear Search 
#include<stdio.h>
void Lsearch(int arr[],int n,int d){
    int i,flag = 0;
    for(i=0;i<n;i++){
        if(arr[i] == d){    //Time Complexity- O(n)
            flag=1;         // Space Complexity- O(1)
            break;
        }
    }
    if (flag == 1)
    printf("%d is present in array at %dth block",d,i+1);
    else 
    printf("Given Element is not present in the array");
}

void main(){
    int n,d;
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    n=10;
    d= 4;
    Lsearch(ar,n,d);  // Time Complexity- O(n)
}                     // Space Complexity- O(1)
     
     // Total Time complaxity - O(n)
     // Total Space complexity - O(1)

