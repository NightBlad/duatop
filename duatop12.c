#include <stdio.h>

int isDivisibleBy10(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return (sum % 10 == 0);
}
int main() {
    int num_tests;
    scanf("%d", &num_tests);
    for (int i = 0; i < num_tests; i++) {
        int num;
        scanf("%d", &num);
        if (isDivisibleBy10(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

