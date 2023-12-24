#include <stdio.h>

int main() {
  // we take the number of seconds as input from the user
  int input;
  scanf("%d", &input);

  // we then calculate the number of hours, minutes, seconds
  int hours = input / (60 * 60);
  int minutes = (input % 3600) / 60;
  int seconds = (input % 3600) % 60;

  // we then print the calculated hours, minutes, seconds
  printf("Hour: %d, Minutes: %d, Seconds: %d", hours, minutes, seconds);

  return 0;
}
