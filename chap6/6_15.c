#include <stdio.h>

int main() {
  // get user input for the values of a, b, c
  int a, b, c;
  printf("Enter the value for a: ");
  scanf("%d", &a);
  printf("Enter the value for b: ");
  scanf("%d", &b);
  printf("Enter the value for c: ");
  scanf("%d", &c);

  // calculate the squares for a, b, c
  int a_square = a * a, b_square = b * b, c_square = c * c;

  // if the numbers formulate a Pythagoras triplet, then
  // print the appropriate message
  if ((a_square + b_square) == c_square) {
    printf("The input numbers formulate a Pythagorean triplet");
  } else {
    printf("The input numbers do not formulate a Pythagorean triplet");
  }

  return 0;
}
