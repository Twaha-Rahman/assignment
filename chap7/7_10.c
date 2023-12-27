#include <math.h>
#include <stdio.h>

// function prototype
double factorial(int num);

int main() {
  // get user input for the value of x
  // and n (number of terms to be summed)
  double x, res = 0.0;
  int n;
  printf("Enter value of x: ");
  scanf("%lf", &x);
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int denominator = 1;
  int sign = 1;

  // sum up to the n-th term
  for (int i = 1; i <= n; ++i) {
    res += (sign * pow(x, denominator)) / factorial(denominator);
    denominator += 2;
    sign *= -1;
  }

  // print the sum
  printf("Evaluation of the sine series where x = %.2lf, and with %d number of "
         "terms = %.2lf\n",
         x, n, res);
  return 0;
}

// calculate the factorial
double factorial(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }

  double factorial = 1;
  for (int i = 1; i <= num; ++i) {
    factorial *= i;
  }
  return factorial;
}
