#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num_tests,i;
    scanf("%d", &num_tests);

    for (i = 0; i < num_tests; i++) {
        int num;
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

