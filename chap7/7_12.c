#include <math.h>
#include <stdio.h>

// function prototype
double factorial(int num);

int main() {
  // get user input for the value of x and n
  double x;
  int n;
  printf("\nPlease enter the value of x: ");
  scanf("%lf", &x);
  printf("\nPlease enter the number of terms (n): ");
  scanf("%d", &n);

  double result = 1.0;

  // sum upto the n-th term
  for (int i = 1; i < n; i++) {
    result += pow(x, i) / factorial(i);
  }

  // print the sum
  printf("\nIf the variable `x` in the series has the value %.2lf and we "
         "evaluate the series upto the %dth term, we get the result: %.2lf",
         x, n, result);

  return 0;
}

// calculate the factorial
double factorial(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }

  double factorial = 1;
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }
  return factorial;
}
