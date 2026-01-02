#include <stdio.h>
// Aayush Mitra 10025

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

// Enter two numbers: 74
//                    75
// Before swap: a = 74, b = 75
// After swap: a = 75, b = 74


// === Code Execution Successful ===
