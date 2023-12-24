#include <stdio.h>

double decide_billing_rate(int unit_count);

int main() {
  int units;
  printf("Enter the number of electricity units used: ");
  scanf("%d", &units);

  double charge = 0.0;
  for (int unit_count = 1; unit_count <= units; unit_count++) {
    int rate = decide_billing_rate(unit_count);

    charge += rate;
  }

  printf("\nThe total charge: %.2lf", charge);

  return 0;
}

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
