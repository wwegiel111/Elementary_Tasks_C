#include <stdio.h>
#include <math.h>

int main(void){
  double a, b;

  printf("Enter the lengths of the A and B sides of the triangle: ");
  scanf("%lf %lf", &a, &b);

  const double c = sqrt(a * a + b * b);
  const double alpha = asin(a / c) * 180 / 3.14159265358979323846;
  const double beta = 90.0 - alpha;

  printf("The angles of the triangle are %.2lf and %.2lf degrees\n", alpha, beta);

  return 0;
}