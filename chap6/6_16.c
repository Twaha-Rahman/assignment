#include <math.h>
#include <stdio.h>

// function prototype
double to_radian(double degree);

int main() {
  // take the user's input for the value of the angle (in degree)
  int angle_in_degree;
  printf("\nEnter the angle in degree: ");
  scanf("%d", &angle_in_degree);

  // convert the angle from degree to radian
  double angle_in_radian = to_radian(angle_in_degree);
  printf("\nThe angle in radian is: %lf", angle_in_radian);

  // calculate the value of the tan(θ) using the degree in radian
  double tan_theta = tan(angle_in_radian);
  printf("\nThe value of tan(θ): %.2lf", tan_theta);

  return 0;
}

// the function converts the angle from degree to radian
double to_radian(double degree) { return (degree * M_PI) / 180; }
