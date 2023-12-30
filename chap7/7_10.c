#include <math.h>
#include <stdio.h>

// function prototype
double factorial(int num);

int main() {
  // get user input for the value of x
  // and n (the number of terms to be summed)
  double x, res = 0.0;
  int n;
  printf("Enter value of x: ");
  scanf("%lf", &x);
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int denominator = 1;
  int sign = 1;

  // sum up to the n-th term
  for (int i = 1; i <= n; i++) {
    res += (sign * pow(x, denominator)) / factorial(denominator);
    denominator += 2;
    sign *= -1;
  }

  // print the sum
  printf("If x = %.2lf and n = %d, the evaluation of sine series is: %.2lf", x,
         n, res);
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
