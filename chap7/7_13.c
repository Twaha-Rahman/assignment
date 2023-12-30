#include <math.h>
#include <stdio.h>

// function prototype
int is_armstrong(int num);

int main() {
  // get user input for the upperbound
  // and the lower bound of the loop
  int lower, upper;
  printf("Enter the lower bound of the loop: ");
  scanf("%d", &lower);
  printf("Enter the upper bound of the loop: ");
  scanf("%d", &upper);

  // print all the Armstrong numbers in the range
  for (int i = lower; i <= upper; i++) {
    if (is_armstrong(i)) {
      printf("\n%d", i);
    }
  }

  return 0;
}

// this function retruns 1 if a number is an Armstrong
// number; Otherwise, it returns 0
int is_armstrong(int num) {
  int input, remainder, digits = 0;
  double res = 0.0;
  input = num;
  while (input != 0) {
    input /= 10;
    digits++;
  }
  input = num;
  while (input != 0) {
    remainder = input % 10;
    res += pow(remainder, digits);
    input /= 10;
  }
  if ((int)res == num) {
    return 1;
  } else {
    return 0;
  }
}
