#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {

    int num_tests, a, b;

    scanf("%d", &num_tests);

    for (int i = 0; i < num_tests; i++) {
        scanf("%d %d", &a, &b);
        int gcd = find_gcd(a, b);
        printf("%d\n", gcd);
    }
    return 0;
}

