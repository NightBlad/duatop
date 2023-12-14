#include <stdio.h>

void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    for (int i = 0; i < num_tests; i++) {
        int num;
        scanf("%d", &num);
        primeFactorization(num);
        printf("\n");
    }

    return 0;
}

