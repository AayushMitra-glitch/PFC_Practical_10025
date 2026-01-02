#include <stdio.h>
// Aayush Mitra 10025

int main() {
    int arr[50], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}

// Enter number of elements: 5
// Enter array elements:
// 45
// 65
// 98
// 78
// 85
// Enter element to search: 78
// Element found at position 4


// === Code Execution Successful ===
