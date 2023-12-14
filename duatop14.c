#include <stdio.h>
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long a, b;
    scanf("%lld %lldd", &a, &b);
    printf("%lld\n", gcd(a, b));
    printf("%lld\n", lcm(a, b));

    return 0;
}
