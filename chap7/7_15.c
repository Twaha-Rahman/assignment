#include <stdio.h>

int main() {
  int n = 4;

  for (int line = 1; line <= n; line++) {
    for (int j = 1; j <= line; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}
