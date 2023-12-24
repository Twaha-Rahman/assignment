#include <stdio.h>

int main() {
  // we take a numbers as an input from the user
  int input;
  printf("Please enter an integer: ");
  scanf("%d", &input);

  // we then print the number in decimal, octal, hexadecimal using the
  // appropriate format specifier
  printf("\nThe value in decimal: %d", input);
  printf("\nThe value in octal: %o", input);
  printf("\nThe value in hexadecimal: %x", input);

  return 0;
}
