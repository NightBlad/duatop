#include <stdio.h>

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    int n, sum = 0;

    for (int i = 0; i < num_tests; i++) {
        scanf("%d", &n);

        sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }

        printf("%d\n", sum);
    }

    return 0;
}

