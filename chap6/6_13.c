#include <stdio.h>

// funnction prototype
double determine_interest_rate(int days, int deposited, int isSeniorCitizen);

int main() {
  // take user input for deposited amount, days deposited,
  // and if the user is a senior citizen
  int deposited, days, isSeniorCitizen;
  printf("\nEnter the amount of deposit: ");
  scanf("%d", &deposited);
  printf(
      "\nEnter the number of days the deposited amount is going to be in the "
      "bank: ");
  scanf("%d", &days);
  printf("\nIf this deposit is for a senior citizen, enter 1. Otherwise, enter "
         "0. Input: ");
  scanf("%d", &isSeniorCitizen);

  // get the applicable interest rate
  double interest_rate =
      determine_interest_rate(days, deposited, isSeniorCitizen);
  // calculate the amount to be given to the user
  double capital_with_interest = deposited + (deposited * interest_rate);

  // print the amount to be given to the user
  printf("\nThe amount to be given to the customer: %.2lf",
         capital_with_interest);

  return 0;
}

// this funnction returns the interest rate based on all
// the criteria laid out in the question
double determine_interest_rate(int days, int deposited, int isSeniorCitizen) {
  double computed_interest_rate;
  if (days >= 30 && days <= 60) {
    computed_interest_rate = 6.0 / 100.0;
  }
  if (days >= 61 && days <= 90) {
    computed_interest_rate = 6.5 / 100.0;
  }
  if (days >= 91 && days <= 180) {
    computed_interest_rate = 7.0 / 100.0;
  }
  if (days >= 181 && days <= 365) {
    computed_interest_rate = 8.0 / 100.0;
  }
  if (days > 365) {
    computed_interest_rate = 8.5 / 100.0;
  }

  if (isSeniorCitizen == 1 && deposited > 50000) {
    // add the extra 1% interest for those senior citizen who
    // deposited more than 50000
    computed_interest_rate += 1.0 / 100.0;
  }

  return computed_interest_rate;
}
