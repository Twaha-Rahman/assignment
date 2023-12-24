#include <stdio.h>

int main() {
  // we take the length and breadth of the rectangle as user input
  double length, breadth;
  printf("Please enter the length of the rectangle: ");
  scanf("%lf", &length);
  printf("\nPlease enter the breadth of the rectangle: ");
  scanf("%lf", &breadth);

  // we then print the area and the perimeter of the rectangle
  printf("The area of the rectangle is: %.2lf", length * breadth);
  printf("The perimeter of the rectangle is: %.2lf", 2 * (length + breadth));

  return 0;
}
