#include <stdio.h>

int main() {
  // get user input for the values of a, b, c
  int a, b, c;
  printf("\nPlease enter the value for a: ");
  scanf("%d", &a);
  printf("\nPlease enter the value for b: ");
  scanf("%d", &b);
  printf("\nPlease enter the value for c: ");
  scanf("%d", &c);

  // if all three angles of the triangle is equal
  if (a == b && b == c) {
    printf("\nThe triangle is an equilateral triangle");
    return 0;
  }

  // if any angle is greater than 90 degree
  if (a > 90 || b > 90 || c > 90) {
    printf("\nThe triangle is an obtuse angled triangle");
  }

  // if any of the two angles of the triangle is equal
  if (a == b || b == c || c == a) {
    printf("\nThe triangle is an isosceles");
  }

  return 0;
}
