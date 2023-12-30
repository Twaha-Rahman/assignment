#include <stdio.h>

int main() {
  // take a Roman symbol as user input
  char roman_symbol;
  printf("\nEnter a roman symbol: ");
  scanf("%c", &roman_symbol);

  // print the appropriate message for the corresponding Roman symbol
  switch (roman_symbol) {
  case 'I':
    printf("1");
    break;
  case 'V':
    printf("5");
    break;
  case 'X':
    printf("10");
    break;
  case 'L':
    printf("50");
    break;
  case 'C':
    printf("100");
    break;
  case 'D':
    printf("500");
    break;
  case 'M':
    printf("1000");
    break;
  default:
    printf("Unrecongnized roman character. The supported roman characters are: "
           "I, V, X, L, C, D, M");
    break;
  }

  return 0;
}
