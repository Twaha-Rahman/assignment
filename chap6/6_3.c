#include <stdio.h>

int main() {
  // we take the input number from the user's input
  int input;
  printf("\nEnter the input number: ");
  scanf("%d", &input);

  // we check if the number is divisible by both 5 and 6, if it is,
  // we print the associated message and exit the program
  if ((input % 5 == 0) && (input % 6 == 0)) {
    printf("\nThe number is divisible by both 5 and 6");
    return 0;
  }

  // we check if the number is divisible by 5, if it is,
  // we print the associated message and exit the program
  if (input % 5 == 0) {
    printf("\nThe number is only divisible by 5");
    return 0;
  }

  // we check if the number is divisible by 6, if it is,
  // we print the associated message and exit the program
  if (input % 6 == 0) {
    printf("\nThe number is only divisible by 6");
    return 0;
  }

  // if any of the conditions previously checked didn't evaluate
  // to true, then the number isn't divisible by 5 or 6
  printf("\nThe number isn't divisible by either 5 or 6");

  return 0;
}
