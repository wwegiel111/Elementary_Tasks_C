#include <stdio.h>

int main(void){
        double epsilon = 0.0001;
        double sum = 0.0;
        double term;
        int n = 1;

        while (1) {
            term = 1.0 / (n * (n + 1));
            if (term < epsilon) {
                break;
            }
            sum += term;
            n++;
        }
        printf("Sum of the series up to accuracy %.5f is approximately %.6f\n",
               epsilon, sum);

        return 0;
}