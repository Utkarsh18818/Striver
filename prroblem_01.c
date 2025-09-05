// Second largest Element In Array
#include <stdio.h>
int Slargest(int arr[], int n);

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 90, 10}; //Initialized Array of Static size 10
    int second = Slargest(a, 10); // As much the number Entered init that much slice it cut from main aaray
    // And return the Second largest Element of the Sliced Array 
    printf("Second largest = %d\n", second);
    return 0;
}
// Function for finding the Second largest Number
int Slargest(int arr[], int n) {
    int largest = arr[0];
    int second = -1;
                                      //Time Complexity: O(n)
    for (int i = 1; i < n; i++) {    //Space Complexity: O(1) 
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return second;
}
