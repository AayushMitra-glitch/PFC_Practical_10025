#include <stdio.h>
// Aayush Mitra 10025
int main(){
  int num;
  // 1. Odd/Even check using if-else
  printf("Enter a number to check Odd/Even: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("%d is Even.\n", num);
  } else {
    printf("%d is Odd.\n", num);
  }

  // 2. Maximum of three numbers (nested if)
  int a, b, c, max;
  printf("\nEnter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b && a > c) {
    max = a;
  } else if (b > a && b > c) {
    max = b;
  } else {
    max = c;
  }
  printf("Maximum of %d, %d, and %d is: %d\n", a, b, c, max);

  // 3. Ternary operator
  int n;
  printf("\nEnter a number to check positive/non-positive: ");
  scanf("%d", &n);
  char* result = (n > 0) ? "Positive" : "Non-Positive";
  printf("The number %d is %s.\n", n, result);

  // 4. Switch-case
  int choice;
  printf("\nChoose an option (1-3):\n");
  printf("1. Print 'Hello'\n");
  printf("2. Print 'world'\n");
  printf("3. Print 'C Programming'\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      printf("Hello\n");
      break;
    case 2:
      printf("world\n");
      break;
    case 3:
      printf("C Programming\n");
      break;
    default:
      printf("Invalid choice\n");
  }

  return 0;
}

// Enter a number to check Odd/Even: 755
// 755 is Odd.

// Enter three numbers: 412
// 786
// 963
// Maximum of 412, 786, and 963 is: 963

// Enter a number to check positive/non-positive: 45
// The number 45 is Positive.

// Choose an option (1-3):
// 1. Print 'Hello'
// 2. Print 'world'
// 3. Print 'C Programming'
// Enter your choice: 1
// Hello


// === Code Execution Successful ===
