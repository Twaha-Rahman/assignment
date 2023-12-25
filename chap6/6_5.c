#include <stdio.h>

// function prototype
int calculate_y(int x);

int main() {
  // take the value of `x` as user input
  int x;
  printf("Please enter the value of `x`: ");
  scanf("%d", &x);

  // calculate the value of `y` and print it
  printf("\nThe value of `y` is: %d", calculate_y(x));

  return 0;
}

// this function calculates the value of y based
// on the input x
int calculate_y(int x) {
  if (x < 50) {
    return 2 * x + 100;
  }
  if (x > 50) {
    return 5 * x - 200;
  }

  // if the previous conditions didn't evaluate
  // to true, then `x` is equal to 50
  return 3 * x + 300;
}
