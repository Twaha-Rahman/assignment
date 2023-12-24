#include <stdio.h>

// we define the fractions for the allowances
#define DA 45.0 / 100.0
#define HRA 14.0 / 100.0
#define CCA 10.0 / 100.0

// we define the fractions for the deductions
#define PF 12.0 / 100.0
#define LIC 15.0 / 100.0

int main() {
  int basic;

  // we take the basic income as input from the user
  printf("Please enter your basic salary: ");
  scanf("%d", &basic);

  // we calculate the gross income and net income from the basic income
  double gross = basic + (DA * basic) + (HRA * basic) + (CCA * basic);
  double net = gross - (PF * basic) - (LIC * basic);

  // we then print the gross income and the net income
  printf("Gross salary: %.2lf\n", gross);
  printf("Net salary: %.2lf\n", net);

  return 0;
}
