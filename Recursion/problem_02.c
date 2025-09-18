// Calculate Fibbonocci Sequence of number n
#include <stdio.h>
int fib(int n){
    if(n<0){
        return 0;
    }
    else if(n<=1){
        return n;
    }
    else if(n==1 || n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("Enter The Number Of Which Fibbonocci Want To Calculate:");
    scanf("%d",&n);
    printf("The Fibbonocci of %d = %d",n,fib(n));
    return 0;
}
// Total Time Complexity - O(n)
// Total Space Complexity - O(1)
