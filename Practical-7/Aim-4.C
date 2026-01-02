#include <stdio.h>
// Aayush Mitra 10025

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        char ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

// Enter number of rows: 5
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 


// === Code Execution Successful ===
