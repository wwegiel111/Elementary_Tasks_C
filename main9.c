#include <stdio.h>
#include <math.h>

int main(void) {
    float n, sum = 0.0;
    int count = 0, positive_count = 0, less_100 = 0;

    printf("Enter a series of real numbers (terminated by zero):\n");
    while (1) {
        scanf("%f", &n);
        if (n == 0) break;

        if (n > 0) {
            sum += n;
            positive_count++;
        }
        if (fabs(n) < 100) {
            less_100++;
        }
    }

    if (positive_count > 0) {
        float avg = sum / positive_count;
        printf("Arithmetic average of the positive numbers is %.2f\n", avg);
    } else {
        printf("No positive numbers in the series.\n");
    }

    printf("Number of numbers with absolute value less than 100: %d\n", less_100);

    return 0;
}