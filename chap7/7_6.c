#include <stdio.h>

int main() {
  char input_number[10];
  printf("Enter a number: ");
  scanf("%s", input_number);

  int digit_count[10] = {};

  for (int i = 0; input_number[i] != '\0'; i++) {
    int number_digit = input_number[i] - '0';

    digit_count[number_digit]++;
  }

  for (int i = 0; i < 10; i++) {
    if (digit_count[i] != 0) {
      printf("\nThe digit `%d` occured %d times", i, digit_count[i]);
    }
  }

  return 0;
}
