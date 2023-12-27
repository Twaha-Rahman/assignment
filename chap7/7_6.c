#include <stdio.h>

int main() {
  // get user input for the input number
  char input_number[11];
  printf("Enter a number: ");
  scanf("%s", input_number);

  // initialize the array
  int digit_count[10] = {};

  // count the number of times a digit is encountered
  for (int i = 0; input_number[i] != '\0'; i++) {
    int number_digit = input_number[i] - '0';

    digit_count[number_digit]++;
  }

  // print the number of times a digit is encountered
  for (int i = 0; i < 10; i++) {
    if (digit_count[i] != 0) {
      printf("\nThe digit `%d` occured %d times", i, digit_count[i]);
    }
  }

  return 0;
}
