#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1;
    while (pow(1.02, n) <= 1000.0 * n * n) {
        n++;
    }
    printf("Part (a): n = %d\n", n);

    double sum = 0.0;
    n = 1;
    while (sum <= M_E) {
        sum += 1.0 / n;
        n++;
    }

    printf("Part (b): n = %d\n", n - 1);

    return 0;
}
