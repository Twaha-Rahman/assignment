#include <stdio.h>

// define the constants
#define TWO_LAKH 200000
#define FIVE_LAKH 500000
#define EIGHT_LAKH 800000
#define TEN_LAKH 1000000

// function prototypes
double get_tax(long int income);

int main() {
  // get user input for the income
  long int income;
  printf("\nEnter the taxable income: ");
  scanf("%ld", &income);

  // calculate the tax
  double tax = get_tax(income);

  // print the tax
  printf("\nThe income tax will be: %.2lf", tax);

  return 0;
}

// this function calculates the amount of tax
// based on the criteria provided in the question
double get_tax(long int income) {
  if (income <= TWO_LAKH) {
    return 0;
  }

  if (income > TWO_LAKH && income <= FIVE_LAKH) {
    return (10.0 / 100.0) * (income - TWO_LAKH);
  }

  if (income > FIVE_LAKH && income <= EIGHT_LAKH) {
    double calculated_tax = (20.0 / 100.0) * (income - FIVE_LAKH);
    return 30000 + calculated_tax;
  }

  if (income > EIGHT_LAKH && income <= TEN_LAKH) {
    double calculated_tax = (30.0 / 100.0) * (income - EIGHT_LAKH);
    return 90000 + calculated_tax;
  }

  if (income > TEN_LAKH) {
    double calculated_tax = (40.0 / 100.0) * (income - TEN_LAKH);
    return 150000 + ((2.0 / 100.0) * income) + calculated_tax;
  }
}
