#include <stdio.h>

int main() {
  // we take length of the rectangle as input
  int length, breadth;
  printf("Please enter the length of the rectangle: ");
  scanf("%d", &length);

  // we take breadth of the rectangle as input
  printf("\nPlease enter the breadth of the rectangle: ");
  scanf("%d", &breadth);

  // we calculate the are of rectangle and print it
  printf("\nThe are of the rectangle is: %d", length * breadth);

  return 0;
}
