#include <stdio.h>

int main() {
  // we take the values of `a`, `b`, `c` from the user's input
  int a, b, c;
  printf("\nEnter the value of `a`: ");
  scanf("%d", &a);
  printf("\nEnter the value of `b`: ");
  scanf("%d", &b);
  printf("\nEnter the value of `c`: ");
  scanf("%d", &c);

  // we check if it is possible to form a triangle with the inputs and print the
  // associated message
  if ((a + b) > c) {
    printf("It's possible to form a triangle");
  } else {
    printf("It's not possible to form a triangle");
  }

  return 0;
}
