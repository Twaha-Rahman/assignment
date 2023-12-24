#include <stdio.h>

int main() {
  // we get the user's input for the value of a number
  int input;
  printf("Enter a number: ");
  scanf("%d", &input);

  // we reverse the user inputted number
  int reversed_number = 0;
  while (input != 0) {
    int last_digit = input % 10;
    reversed_number = reversed_number * 10 + last_digit;
    input /= 10;
  }

  // we then print out the reversed number
  printf("\nThe reversed number is: %d", reversed_number);

  return 0;
}
