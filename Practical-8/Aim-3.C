#include <stdio.h>
// Aayush Mitra 10025

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swap: x = %d y = %d", x, y);
    return 0;
}
//OUTPUT
// Enter two numbers: 5
// 7
// After swap: x = 7 y = 5
