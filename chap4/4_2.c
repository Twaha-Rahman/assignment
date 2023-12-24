#include <stdio.h>

int main() {
  // we take two integers and two doubles from user input
  int i1, i2;
  double d1, d2;
  printf("\nEnter the first integer: ");
  scanf("%d", &i1);
  printf("\nEnter the second integer: ");
  scanf("%d", &i2);
  printf("\nEnter the first double: ");
  scanf("%lf", &d1);
  printf("\nEnter the second double: ");
  scanf("%lf", &d2);

  // we then print the input integers and doubles according to the questions
  printf("\nThe values inputted: \n");
  printf("%d", i1);
  printf("%14.2lf\n", d1);
  printf("%d", i2);
  printf("%14.2lf\n", d2);

  return 0;
}
