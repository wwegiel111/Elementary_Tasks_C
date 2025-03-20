#include <stdio.h>

int main(void) {
  int n, k = 0;
  int matrix[20][20];
  int rowsum[20] = {0}, colsum[20] = {0};

  printf("Enter the dimension n and k (both < 20): ");
  scanf("%d %d", &n, &k);

  printf("Enter the %d x %d matrix:\n", n, n);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
      rowsum[i] += matrix[i][j];
      colsum[j] += matrix[i][j];
    }
  }

  printf("Matrix of the sum of rows:\n");
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      printf("%d ", rowsum[i]);
    }
    printf("\n");
  }
  return 0;
}