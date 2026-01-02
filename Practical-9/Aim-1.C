#include <stdio.h>
// Aayush Mitra 10025

int main() {
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
// Enter number of elements: 7
// Enter array elements:
// 5
// 1
// 5

// 8
// 6
// 3

// 4
// Array elements are:
// 5 1 5 8 6 3 4 

// === Code Execution Successful ===
