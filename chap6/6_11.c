#include <stdio.h>

int is_right_angled(int a, int b, int c);

int main() {
  // take the values of `a`, `b`, `c` from user input
  int a, b, c;
  printf("\nEnter the value for `a`: ");
  scanf("%d", &a);
  printf("\nEnter the value for `b`: ");
  scanf("%d", &b);
  printf("\nEnter the value for `c`: ");
  scanf("%d", &c);

  if (is_right_angled(a, b, c)) {
    printf("The triangle is a right angled triangle");
  } else {
    printf("The triangle is NOT a right angled triangle");
  }

  return 0;
}

// the function will return 1 if the triangle is a right angled triangle; it'll
// return  0 otherwise
int is_right_angled(int a, int b, int c) {
  int a_square = a * a, b_square = b * b, c_square = c * c;

  if (a_square == (b_square + c_square)) {
    return 1;
  }
  if (b_square == (a_square + c_square)) {
    return 1;
  }
  if (c_square == (b_square + a_square)) {
    return 1;
  }

  return 0;
}
