#include <stdio.h>

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    for (int i = 0; i < num_tests; i++) {
        int N;
        scanf("%d", &N);
        printf("%.15f\n", 1.0 / N);
    }

    return 0;
}

