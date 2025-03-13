#include <stdio.h>

int main(void) {
  double num1, num2;
  double avg;

  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);

  avg = (num1 + num2) / 2;

  printf("The average of %.2lf and %.2lf is %.2lf\n", num1, num2, avg);

  return 0;
}