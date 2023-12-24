#include <stdio.h>

int main() {
  // we take the value of u,a,t as user input
  int u, a, t;
  printf("\nPlease enter the initial velocity (u): ");
  scanf("%d", &u);
  printf("\nPlease enter the time (t): ");
  scanf("%d", &t);
  printf("\nPlease enter the accelaration (a): ");
  scanf("%d", &a);

  // calculate the distance travelled by the object
  double s = (u * t) + (0.5 * a * t * t);

  // print the distance the object travelled
  printf("\nThe object travelled the distance of: %.2lf unit", s);

  return 0;
}
