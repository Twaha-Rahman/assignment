#include <stdio.h>

int main() {
  // get user input for the value of n
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  // calculate the sum of the series upto the n-th term
  float sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum = sum - 1.0 / i;
    } else {
      sum = sum + 1.0 / i;
    }
  }

  // print the sum
  printf("Sum is %f", sum);

  return 0;
}
