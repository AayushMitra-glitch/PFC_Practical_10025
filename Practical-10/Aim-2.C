#include <stdio.h>
// Aayush Mitra 10025

int main() {
    int arr[10][10], r, c, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

// Enter number of rows and columns: 3
// 3
// Enter elements of the matrix:
// 7
// 8
// 9
// 4
// 3
// 5
// 6
// 9
// 2
// Sum of all elements = 53


// === Code Execution Successful ===
