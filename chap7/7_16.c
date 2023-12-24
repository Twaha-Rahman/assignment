#include <stdio.h>

int main() {

  int n = 4;

  for (int line = 1; line <= n; line++) {

    for (int j = n - line; j >= 0; j--) {
      printf("  ");
    }
    for (int k = line; k >= 1; k--) {
      printf("%d ", k);
    }
    for (int l = 2; l <= line; l++) {
      printf("%d ", l);
    }

    printf("\n");
  }

  return 0;
}
