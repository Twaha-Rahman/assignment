#include <stdio.h>

int main() {
  // initialize the number of rows and column
  int rows = 3;
  int column = 1;

  // print the pattern
  for (int i = 1; i <= rows; ++i) {
    for (int j = 1; j <= 3; ++j) {
      printf("%d ", column++);
    }
    printf("\n");
  }

  return 0;
}
