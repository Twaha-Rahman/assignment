#include <stdio.h>

int main() {
  // initialize the number of rows to print
  int n = 4;

  // print the pattern
  for (int line = 1; line <= n; line++) {
    for (int i = n - line; i >= 0; i--) {
      printf("  ");
    }
    for (int j = line; j >= 1; j--) {
      printf("%d ", j);
    }
    for (int k = 2; k <= line; k++) {
      printf("%d ", k);
    }
    printf("\n");
  }

  return 0;
}
