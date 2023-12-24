#include <stdio.h>

int main() {
  int rows = 3;
  int count = 1;
  for (int i = 1; i <= rows; ++i) {
    for (int j = 1; j <= 3; ++j) {
      printf("%d ", count++);
    }
    printf("\n");
  }

  return 0;
}
