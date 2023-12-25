#include <stdio.h>

// function prototype
double decide_billing_rate(int unit_count);

int main() {
  // we take user input for the number of units used
  int units;
  printf("Enter the number of electricity units used: ");
  scanf("%d", &units);

  // we calculate the charge
  double charge = 0.0;
  for (int unit_count = 1; unit_count <= units; unit_count++) {
    int rate = decide_billing_rate(unit_count);
    charge += rate;
  }

  // we print the calculated charge
  printf("\nThe total charge: %.2lf", charge);

  return 0;
}

// this function returns the billing rate based on
// the number of units used
double decide_billing_rate(int unit_count) {
  if (unit_count <= 100) {
    return 1.50;
  }

  if (unit_count >= 101 && unit_count <= 300) {
    return 2.00;
  }

  if (unit_count >= 301 && unit_count <= 500) {
    return 2.50;
  }

  // unit_count >= 501
  return 3.25;
}
