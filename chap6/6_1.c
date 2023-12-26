#include <math.h>
#include <stdio.h>
#include <string.h>

// function prototypes
int is_date_valid(char *date_string, int string_len);
int is_leap_year(int year);

int main() {
  // we take the date string from user's input (format: dd/mm/yyyy)
  char date_string[15];
  printf("\nPlease enter the date in the following format:\ndd/mm/yyyy\t(For "
         "example: 11/02/2020)\n");
  printf("\nEnter the date: ");
  scanf("%s", date_string);

  // we get input string's length
  int read_char_count = strlen(date_string);

  // we check if the date is valid and print the appropriate message
  if (is_date_valid(date_string, read_char_count)) {
    printf("\nThe provided date is valid");
  } else {
    printf("\nThe provided date is NOT valid");
  }

  return 0;
}

// this function will return 1 if the date is valid. Otherwise, it will return 0
int is_date_valid(char *date_string, int string_len) {
  int day = 0, month = 0, year = 0;

  int date_string_part = 0;
  int digit_position = 0;

  // we start parsing from the end of the string (excluding the null character)
  for (int i = string_len - 1; i >= 0; i--) {
    // if we encounter a `/`, then we move on to the
    // next part of the date string
    if (date_string[i] == '/') {
      date_string_part++;
      digit_position = 0;
      continue;
    }

    // by subtracting the ASCI character code, we get the digit in interger
    int digit = date_string[i] - '0';

    // depending on which part of the date string we are
    // parsing, we add to the corresponding part to parse
    // the integer
    switch (date_string_part) {
    case 0:
      year = year + (digit * pow(10, digit_position));
      break;
    case 1:
      month = month + (digit * pow(10, digit_position));
      break;
    case 2:
      day = day + (digit * pow(10, digit_position));
      break;
    }
    digit_position++;
  }

  // check if valid month
  if (month < 1 || month > 12) {
    return 0;
  }

  // The number of days in a given month
  int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // If the year is a leap year, then set the
  // number of days in February to be 29 days
  if (is_leap_year(year)) {
    days_in_month[1] = 29;
  }

  // check number of days in the month
  if (day < 1 || day > days_in_month[month - 1]) {
    return 0;
  }

  // As long as the year is greater than 1, it is a valid
  // year in the Gregorian calendar
  if (year < 1) {
    return 0;
  }

  return 1;
}

// If the year is a leap year, returns 1. Otherwise, the function returns 0
int is_leap_year(int year) {
  if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
    return 1;
  }

  return 0;
}
