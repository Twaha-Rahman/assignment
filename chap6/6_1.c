#include <math.h>
#include <stdio.h>
#include <string.h>

int is_date_valid(char *date_string, int string_len);

int main() {
  char date_string[11];
  printf("\nEnter the date: ");
  scanf("%s", date_string);

  int read_char_count = strlen(date_string);

  if (is_date_valid(date_string, read_char_count)) {
    printf("\nThe provided date is valid");
  } else {
    printf("\nThe provided date is invalid");
  }

  return 0;
}

int is_date_valid(char *date_string, int string_len) {
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

  if (month < 1 || month > 12) {
    return 0;
  }

  // TODO: Leap year check and adjust February's day count
  int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (day < 1 || day > days_in_month[month - 1]) {
    return 0;
  }

  // TODO: Discuss proper year count
  if (year < 1 || year > 9999) {
    return 0;
  }

  return 1;
}
