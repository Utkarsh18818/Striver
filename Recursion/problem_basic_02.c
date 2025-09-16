// Basic Recursion

#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    printf(sum(5));
    return 0;
}
//Total Time Complexity -O(n)
// Total Space COmplexity -O(n)
//*********************************************************
#include <stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*(fact(n-1));
}
int main() {
    printf("%d",fact(4));
    return 0;
}
// Total Time Complexity -O(n)
// Total Space COmplexity -O(n)
