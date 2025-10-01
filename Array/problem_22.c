// Pascal's Triangle
// Question Type 2 
// PROBLEM - AS we Enter the Row no it will return the complete row.
#include<stdio.h>
long long fn_ncr(int n,int r){
    long long res = 1;
    int i;
    for(i=0;i<r;i++){
        res*=(n-i);       //Time complexity - O(r)
        res/=(i+1);       //Space Complexity - O(1)
    }
    return res;
}
int main(){
    int n=5;              // Row No.
    for(int c=1;c<=n;c++){
        printf("%ld\t",fn_ncr(n-1,c-1));
    }
    return 0;
}
// Total Time Complexity - O(r*n)
// Total Space COmplexity - O(1)

//*****************************************************************

// QUetion Type -1 
// PROBLEM -> As we enter the row no. and col no. it will further
// Return the element on the specific place in pascals triangle
// Here i have used n-1 Combination r-1.
// #include <stdio.h>
// long long fn_ncr(int n,int r){
//     long long res = 1;
//     int i;
//     for(i=0;i<r;i++){
//         res*=(n-i);       //Time complexity - O(r)
//         res/=(i+1);       //Space Complexity - O(1)
//     }
//     return res;
// }
// int main() {
//     int n=5,r=2;
//     long long k;
//     k = fn_ncr(n-1,r-1);
//     printf("%d",k);
//     return 0;
// }
