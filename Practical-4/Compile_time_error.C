#include <stdio.h>
//  Aayush Mitra 10025
 int main() {
int x = 10;
printf("Value of x: %d" x); // missing comma between format string and variable

return 0;
 }

// ERROR!
// /tmp/4FEy6KsQY1/main.c: In function 'main':
// /tmp/4FEy6KsQY1/main.c:5:24: error: expected ')' before 'x'
//     5 | printf("Value of x: %d" x); // missing comma between format string and variable
//       |       ~                ^~
//       |                        )


// === Code Exited With Errors ===
