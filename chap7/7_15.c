#include <stdio.h>

int main() {
  // initialize the number of rows to print
  int row = 4;

  // print the pattern
  for (int line = 1; line <= row; line++) {
    for (int j = 1; j <= line; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}
