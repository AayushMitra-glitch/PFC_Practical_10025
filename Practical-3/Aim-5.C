#include<stdio.h>
// Aayush Mitra 10025
int main() {
int a, b;
printf("Aayush Mitra\n");
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("Unbefore swapping: a=%d, b = %d\n", a, b);
a = a + b;
b = a - b;
a = a - b;
printf("After swapping: a=%d, b = %d\n", a, b);
return 0;
}

// Aayush Mitra
// Enter first number: 78
// Enter second number: 52
// Unbefore swapping: a=78, b = 52
// After swapping: a=52, b = 78


// === Code Execution Successful ===
