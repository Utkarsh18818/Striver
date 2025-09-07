// Move All Zeros in the end of the Array 
 #include <stdio.h>

void moveNonZeroToFront(int arr[], int n) {
    int i, j = 0;

    for (i = 0; i < n; i++) {       //Time Complexity O(n)
        if (arr[i] != 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];    //Space Complexity O(1)
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int n, i;
    printf("Enter size of Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in Array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);      //Time Complexity O(n)
    }

    moveNonZeroToFront(arr, n);

    printf("Updated Array:\n");
    for (i = 0; i < n; i++) {      //Time Complexity O(n)
        printf("%d\t", arr[i]);
    }

    return 0;
}
// Total Time complexity => O(n)+O(n)+O(n) = O(n)
// Total Space complexity => O(1)