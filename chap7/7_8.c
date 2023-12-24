#include <stdio.h>

int main() {

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  float sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum = sum - 1.0 / i;
    } else {
      sum = sum + 1.0 / i;
    }
  }
  printf("Sum is %f", sum);

  return 0;
}
