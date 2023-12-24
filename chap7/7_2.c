#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int cube_sum_of_digits(char *number);

int main() {
  char input[11];
  printf("Enter a number: ");
  scanf("%s", input);

  int number_int = atoi(input);

  if (number_int == cube_sum_of_digits(input)) {
    printf("\nThe number is an Armstrong number");
  } else {
    printf("\nThe number is NOT an Armstrong number");
  }

  return 0;
}

int cube_sum_of_digits(char *number) {
  int result = 0;

  for (int i = 0; number[i] != '\0'; i++) {
    int digit_int = number[i] - '0';
    int cube_of_digit = pow(digit_int, 3);

    result += cube_of_digit;
  }

  return result;
}
