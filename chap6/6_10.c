#include <math.h>
#include <stdio.h>

int main() {
  // we take user input for the values of `a`, `b`, `c`
  int a, b, c;
  printf("\nA quadratic equation is of the form: ax²+bx+c\n");
  printf("\nEnter the value of `a`: ");
  scanf("%d", &a);
  printf("\nEnter the value of `b`: ");
  scanf("%d", &b);
  printf("\nEnter the value of `c`: ");
  scanf("%d", &c);

  // we calculate the discriminant
  double discriminant = (b * b) - (4 * a * c);

  // calculate the roots for: discriminant > 0
  if (discriminant > 0) {
    printf("\nThere are two roots and they are real numbers");

    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("\nThe roots are %lf and %lf", root1, root2);
  }

  // calculate the root for: discriminant = 0
  if (discriminant == 0) {
    printf("\nThere is only one root and it is a real number");

    double root = (double)-b / (2 * a);
    printf("\nThe one and only root is: %lf", root);
  }

  // calculate the roots for: discriminant < 0
  if (discriminant < 0) {
    printf("\nThere are two roots but both of them are imaginary numbers");

    double real_part = (double)-b / (2 * a);
    double imaginary_part = sqrt(discriminant * -1) / (2 * a);

    printf("\nThe imaginary roots are %.2lf+%.2lfi and %.2lf-%.2lfi", real_part,
           imaginary_part, real_part, imaginary_part);
  }

  return 0;
}
