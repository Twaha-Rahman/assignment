#include <stdio.h>

int factorial(int n);

int main() {
  int n;
  printf("\nEnter the factorial number: ");
  scanf("%d", &n);

  printf("\nThe factorial of %d is: %d", n, factorial(n));

  return 0;
}

int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}
