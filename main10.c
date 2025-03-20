#include <stdio.h>
#include <math.h>

int main(void) {
  int m;
  double x[200], sum = 0.0, mean, variance, std_dev, variance_sum = 0.0;

  printf("Enter the number of measurments: ");
  scanf("%d", &m);

  printf("Enter %d measurements:\n", m);
  for(int i = 0; i < m; i++) {
    scanf("%lf", &x[i]);
    sum += x[i];
  }

  mean = sum / m;

  for(int i = 0; i < m; i++) {
    variance_sum += pow(x[i] - mean, 2);
  }

  variance = variance_sum / (m-1);

  std_dev = sqrt(variance);

  printf("Mean: %.2lf\n", mean);
  printf("Variance: %.2lf\n", variance);
  printf("Standard deviation: %.2lf\n", std_dev);

  return 0;
}