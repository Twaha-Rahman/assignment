#include <stdio.h>

int sum_of_digits(char *number);

int main() {
  char input[10];
  printf("Enter a number: ");
  scanf("%s", input);

  printf("The sum of all the digits in the number is: %d",
         sum_of_digits(input));

  return 0;
}

int sum_of_digits(char *number) {
  int result = 0;

  for (int i = 0; number[i] != '\0'; i++) {
    int digit_int = number[i] - '0';

    result += digit_int;
  }

  return result;
}
