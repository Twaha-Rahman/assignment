#include <stdio.h>

int main() {
  // initialize the number of rows to print
  int row = 4;

  // print the pattern
  for (int line = 1; line <= row; line++) {
    for (int i = 1; i <= line; i++) {
      printf("%d ", i);
    }
    printf("\n");
  }

  return 0;
}
