#include <stdio.h>

void point_relative_to_circle(int x, int y, int r);

int main() {
  // get user input for the `x` and `y` co-ordinates of the point
  int x, y;
  printf("Enter the value of `x`: ");
  scanf("%d", &x);
  printf("Enter the value of `y`: ");
  scanf("%d", &y);

  point_relative_to_circle(x, y, 5);

  return 0;
}

// print appropriate message according to where the point is relative to the
// circle
void point_relative_to_circle(int x, int y, int r) {
  int x_square_plus_y_square = (x * x) + (y * y);
  int r_square = r * r;

  if (x_square_plus_y_square < r_square) {
    printf("\nThe point is within the circle");
  } else if (x_square_plus_y_square > r_square) {
    printf("\nThe point is outside the circle");
  } else {
    printf("\nThe point lies on the circle");
  }
}
