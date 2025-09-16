// Recursion basics
#include<stdio.h>
void print(int i,int n){
    
  if(i<1){
      return;
  }  
  print(i-1,n);
  printf("%d\n",i);
}
int main(){
    
    print(4,3);

    
}
//********************************************************
// Online C compiler to run C program online
// #include <stdio.h>

// void print(int i,int n){
//     if(i > n){
//         return;
//     }
//     print(i+1,n);
//     printf("%d,",i);
// }
// int main() {
//     printf("[");
//     print(1,5);
//     printf("]");
//     return 0;
// }
//*******************************************************
// #include<stdio.h>
// void print(int i,int n){
//     if(i<n){
//         return;
//     }
//     printf("%d\n",i);
//     print(i-1,n);
// }
// int main(){
//     print(10,1);
//     return 0;
// }
// Total Time time Complexity O(n)
// Total Space Complexity O(n)
//*******************************************************
// #include<stdio.h>
// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     printf("%d\n",i);
//     print(i+1,n);
// }
// int main(){
//     print(1,30);
// }
// Total Time time Complexity O(n)
// Total Space Complexity O(n)
//**************************************************
// #include <stdio.h>
// void print(int cnt,int n){
//     if(cnt>n){
//         return;
//     }
//     printf("Roger\n");
//     print(cnt+1,n);
// }
// int main() {
//     print(1,3);
//     return 0;
// }
// Total Time time Complexity O(n)
// Total Space Complexity O(n)