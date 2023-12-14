#include <stdio.h>

int main() {
    int num_test;
    scanf("%d", &num_test);
    for (int i = 0; i < num_test; i++) {
        long long int x;
        scanf("%lld", &x);
        if (x < 10&&x%2==0) {
            printf("YES\n");
            continue;
        }
        while (x > 0) {
            int currentDigit = x % 10;
            if (!(currentDigit %2==0)) {
                printf("NO\n");
                break;
            }
            x /= 10;
            if (x < 10&&x%2==0) {
                printf("YES\n");
                break;
            }
        }
    }

    return 0;
}
