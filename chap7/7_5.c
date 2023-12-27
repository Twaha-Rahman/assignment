#include <stdio.h>

int main() {
  // get user input for the value of n
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  // find and print the divisors
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("\n%d", i);
    }
  }

  return 0;
}
