#include <stdio.h>

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("\n%d", i);
    }
  }

  return 0;
}
