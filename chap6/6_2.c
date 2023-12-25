#include <math.h>
#include <stdio.h>
#include <string.h>

// function prototypes
void parse_date(char *date_string, int string_len, int *result);
int is_date_earlier(int *date_parts1, int *date_parts2);

int main() {
  // take user input for the two dates
  // that we'll use for camparison
  char date_str1[14], date_str2[14];
  printf("\nEnter the first date: ");
  scanf("%s", date_str1);
  printf("\nEnter the second date: ");
  scanf("%s", date_str2);

  int date_parts1[3], date_parts2[3];
  parse_date(date_str1, strlen(date_str1), date_parts1);
  parse_date(date_str2, strlen(date_str2), date_parts2);

  // compare the dates with the help of the function
  int date_compare_result = is_date_earlier(date_parts1, date_parts2);

  // print the appropriate message based on the result
  switch (date_compare_result) {
  case 0:
    printf("\nThe first date did NOT come before the second date");
    break;
  case 1:
    printf("\nThe first date did come before the second date");
    break;
  default:
    printf("\nThe provided dates are equal");
  }

  return 0;
}

// this function parses the integers from the user input (which is a string)
void parse_date(char *date_string, int string_len, int *result) {

  int day = 0, month = 0, year = 0;

  int date_string_part = 0;
  int position = 0;
  for (int i = string_len - 1; i >= 0; i--) {
    if (date_string[i] == '/') {
      date_string_part++;
      position = 0;
      continue;
    }

    int digit = date_string[i] - '0';
    switch (date_string_part) {
    case 0:
      year = year + (digit * pow(10, position));
      position++;
      break;
    case 1:
      month = month + (digit * pow(10, position));
      position++;
      break;
    case 2:
      day = day + (digit * pow(10, position));
      position++;
      break;
    }
  }

  // we write the result in the array provided to us
  result[0] = day;
  result[1] = month;
  result[2] = year;
}

// this function returns 1 if the first date comes before the second date;
// return 0, if the first date comes after the second date
// return -2, if the dates are the same
int is_date_earlier(int *date_parts1, int *date_parts2) {
  // compare the years
  if (date_parts1[2] < date_parts2[2]) {
    return 1;
  } else if (date_parts1[2] > date_parts2[2]) {
    return 0;
  }

  // compare the months
  if (date_parts1[1] < date_parts2[1]) {
    return 1;
  } else if (date_parts1[1] > date_parts2[1]) {
    return 0;
  }

  // compare the days
  if (date_parts1[0] < date_parts2[0]) {
    return 1;
  } else if (date_parts1[0] < date_parts2[0]) {
    return 0;
  }

  // both of the dates are same, return -1 as the sentinel value
  return -1;
}
