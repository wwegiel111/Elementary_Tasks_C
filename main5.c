#include <stdio.h>
#include <math.h>

int main(void){
  double x, f;

  printf("Enter an x number: ");
  scanf("%lf", &x);

  if (x >= -5 && x <= 5){
    f = 2 * x * x + 3 * x - 1;
  } else {
    (x + 5)*(x + 5) - 10;
  }

  printf("The result of the function is %.2lf\n", f);
  return 0;
}