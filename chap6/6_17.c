#include <stdio.h>

#define TWO_LAKH 200000
#define FIVE_LAKH 500000
#define EIGHT_LAKH 800000
#define TEN_LAKH 1000000

double get_tax(long int income);

int main() {
  long int income;
  printf("\nEnter the taxable income: ");
  scanf("%ld", &income);

  printf("The inputted amount is: %ld", income);

  double tax = get_tax(income);

  printf("\nThe income tax will be: %lf", tax);

  return 0;
}

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
