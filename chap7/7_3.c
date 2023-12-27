#include <stdio.h>

// function prototype
int sum_of_digits(char *number);

int main() {
  // get the user input for the input number
  char input[11];
  printf("Enter a number: ");
  scanf("%s", input);

  // print the sum of all the digits
  printf("The sum of all the digits in the number is: %d",
         sum_of_digits(input));

  return 0;
}

// get the sum of all the digits
int sum_of_digits(char *number) {
  int result = 0;

  for (int i = 0; number[i] != '\0'; i++) {
    int digit_int = number[i] - '0';

    result += digit_int;
  }

  return result;
}
