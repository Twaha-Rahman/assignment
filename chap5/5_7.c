#include <math.h>
#include <stdio.h>

int main() {
  // take the value of `u`, `a`, `s` from the user input
  int u, a, s;
  printf("Please enter the value of the initial velocity (u): ");
  scanf("%d", &u);
  printf("\nPlease enter the value of the accelaration (a): ");
  scanf("%d", &a);
  printf("\nPlease enter the value of the distance travelled (s): ");
  scanf("%d", &s);

  // calculate the final velocity (v)
  double v = (u * u) - (2 * a * s);
  v = sqrt(v);

  // print the result
  printf("\nThe value of the final velocity (v) is: %lf", v);

  return 0;
}
