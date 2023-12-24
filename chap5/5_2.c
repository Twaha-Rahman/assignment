#include <math.h>
#include <stdio.h>

int main() {
  // we take the radius of the circle as input from the user
  double r;
  printf("Please enter the radius of the circle (integer or float): ");
  scanf("%lf", &r);

  // we then calculate the area and the circumference of the circle
  double area = M_PI * pow(r, 2);
  double circumference = 2 * M_PI * r;

  // we then print the area and circumference of the circle
  printf("\nThe area and the circumference of the circle is %.2lf and %.2lf "
         "respectively.",
         area, circumference);

  return 0;
}
