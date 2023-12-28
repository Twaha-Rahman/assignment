#include <stdio.h>

int main() {
  // get user input for the number of terms to sum up
  int n;
  printf("The number of terms to sum up (cannot be less than 2): ");
  scanf("%d", &n);

  if (n < 2) {
    printf("\nPlease enter a value greater than 2");
    return 0;
  }

  // the variable to store the sum
  double result = (1.0 / 3.0) + (3.0 / 7.0);

  // set the variables for the initial fraction
  int numerator = 5;
  int denominator = 11;
  // this variable dictates the positive or negative sign
  double sign = -1.0;

  // calculate the sum upto the n-th term
  for (int i = 3; i <= n; i++) {
    result += (sign * numerator) / denominator;
    numerator += 2;
    denominator += 4;
    sign *= -1.0;
  }

  // print the sum
  printf("\nSum of the sequence upto the %d-th term: %.2f\n", n, result);

  return 0;
}
