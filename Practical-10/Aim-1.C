#include <stdio.h>
// Aayush Mitra 10025

int main() {
    int arr[10][10], r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix elements are:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Enter number of rows and columns: 3
// 3
// Enter elements of the matrix:
// 7
// 8
// 9
// 4
// 5
// 6
// 1
// 2
// 3
// Matrix elements are:
// 7 8 9 
// 4 5 6 
// 1 2 3 


// === Code Execution Successful ===
