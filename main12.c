#include <stdio.h>

int is_prime(unsigned long long num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (unsigned long long i = 3; i * i <= num; i += 2)
        if (num % i == 0)
            return 0;
    return 1;
}

unsigned long long mersenne(int n) {
    return (1ULL << n) - 1;
}

int main(void) {
    int lower, upper;
    printf("Input lower bound: ");
    scanf("%d", &lower);
    printf("Input upper bound: ");
    scanf("%d", &upper);

    for (int n = lower; n <= upper; n++) {
        unsigned long long m = mersenne(n);
        if (is_prime(m))
            printf("n = %d, Mersenne prime: %llu\n", n, m);
    }
    return 0;
}