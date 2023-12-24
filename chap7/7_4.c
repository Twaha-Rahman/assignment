#include <stdio.h>

int main() {
  int m, n, d;
  printf("Enter the lower bound (m): ");
  scanf("%d", &m);
  printf("Enter the upper bound (n): ");
  scanf("%d", &n);
  printf("Enter the number by which the other numbers has to be divisible with "
         "(d): ");
  scanf("%d", &d);

  for (int i = m; i <= n; i++) {
    if (i % d == 0) {
      printf("\n%d", i);
    }
  }

  return 0;
}
