#include <stdio.h>

int main(void) {
    int n, i;
    double number, sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i=1; i <= n; ++i) {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }

    printf("The sum of the numbers is %.2lf\n", sum);

    return 0;
}