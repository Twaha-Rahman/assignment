#include <stdio.h>

// function prototype
int factorial(int n);

int main() {
  // get user input for the value of n
  int n;
  printf("\nEnter the factorial number: ");
  scanf("%d", &n);

  // print the factorial
  printf("\nThe factorial of %d is: %d", n, factorial(n));

  return 0;
}

// the following function calculates the factorial
int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}
