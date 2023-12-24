#include <math.h>
#include <stdio.h>

int is_armstrong(int num);

int main() {
  int lower, upper;
  printf("Enter the lower bound of the loop: ");
  scanf("%d", &lower);
  printf("Enter the upper bound of the loop: ");
  scanf("%d", &upper);

  for (int i = lower; i <= upper; i++) {
    if (is_armstrong(i)) {
      printf("\n%d", i);
    }
  }

  return 0;
}

int is_armstrong(int num) {
  int input, remainder, digits = 0;
  double res = 0.0;

  input = num;
  while (input != 0) {
    input /= 10;
    ++digits;
  }
  input = num;

  while (input != 0) {
    remainder = input % 10;
    res += pow(remainder, digits);
    input /= 10;
  }

  return ((int)res == num) ? 1 : 0;
}
