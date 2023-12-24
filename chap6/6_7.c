#include <stdio.h>

int main() {
  // take user input for the `color code`
  int color_code;
  printf("Please enter the color code: ");
  scanf("%d", &color_code);

  // print the appropriate message for the color code
  switch (color_code) {
  case 1:
    printf("Red");
    break;
  case 2:
    printf("Blue");
    break;
  case 3:
    printf("Green");
    break;
  case 4:
    printf("Yellow");
    break;
  case 5:
    printf("Purple");
    break;
  default:
    printf("No matching color code...");
    break;
  }

  return 0;
}
