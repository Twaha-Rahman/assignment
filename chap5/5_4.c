#include <stdio.h>

int main() {
  // we take `a` and `b` as input from the user
  int a, b;
  printf("\nPlease enter the value of `a`: ");
  scanf("%d", &a);
  printf("\nPlease enter the value of `b`: ");
  scanf("%d", &b);

  // calculate and print the value of (a+b)²
  int a_plus_b_squared = (a + b) * (a + b);
  printf("\nThe value of (a+b)² is: %d", a_plus_b_squared);

  // calculate and print the value of a²+2ab+b²
  int expanded_with_formula = (a * a) + (2 * a * b) + (b * b);
  printf("\nThe value of a²+2ab+b² is: %d", expanded_with_formula);

  return 0;
}
