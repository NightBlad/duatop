#include <stdio.h>

int main() {
    int num_tests;
    scanf("%d", &num_tests);
    
    int i;
    for (i = 0; i < num_tests; i++) {
        int N;
        scanf("%d", &N);

        if (N >= 0 && N <= 999999999) {
            long long int square = (long long int)N * N;
            printf("%lld\n", square);
        }
    }

    return 0;
}

