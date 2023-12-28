#include <stdio.h>

int main() {
  // get user input for the number of terms to sum up
  int n;
  printf("Enter the number of terms to sum up to: ");
  scanf("%d", &n);

  // the variable to store the sum
  double result = 0.0;

  // set the variables for the initial fraction
  int numerator = 1;
  int denominator = 3;
  double sign = 1.0;

  // calculate the sum upto the n-th term
  for (int i = 3; i <= n; i++) {
    result += (sign * numerator) / denominator;
    numerator += 2;
    denominator += 4;
    sign *= -1.0;
  }

  // print the sum
  printf("Sum of the sequence upto the %d-th term: %.2f\n", n, result);

  return 0;
}
