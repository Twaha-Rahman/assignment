#include <math.h>
#include <stdio.h>

double get_factorial(int num) {
  if (num == 0 || num == 1)
    return 1;

  double factorial = 1;
  for (int i = 1; i <= num; ++i) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  double x, res = 0.0;
  int n;
  printf("Enter value of x: ");
  scanf("%lf", &x);
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int denominator = 1;
  int sign = 1;

  for (int i = 1; i <= n; ++i) {
    res += (sign * pow(x, denominator)) / get_factorial(denominator);
    denominator += 2;
    sign *= -1;
  }

  printf("Evaluation of the sine series where x = %.2lf, and with %d number of "
         "terms = %.2lf\n",
         x, n, res);
  return 0;
}
