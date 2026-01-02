#include <stdio.h>
// Aayush Mitra 10025

int main() {
int n;
printf("Enter n: ");
scanf("%d", &n);
int i, j;
for (i = n; i >= 1; i--) {
for (j=1; j<=n-i; j++)
printf(" ");
for (j=1; j <= 2 * i - 1; j++)
printf("*");
printf("\n");
}
for (i=2; i <= n; i++) {
for (j=1; j<=n-i; j++)
printf(" ");
for (j=1; j <= 2 * i - 1; j++)
printf("*");
printf("\n");
}
return 0;
}

// Enter n: 8

// ***************
//  *************
//   ***********
//    *********
//     *******
//      *****
//       ***
//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//  *************
// ***************


// === Code Execution Successful ===
