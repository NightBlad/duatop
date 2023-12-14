#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("%d",b);
    } else {
        int sum = a + b;
        int tru = a - b;
        int tich = a*b;
        float chia = (float)a / b;  // Use %f for float in printf
        int chiadu = a % b;

        printf("%d %d %d %.2f %d", sum, tru, tich, chia, chiadu);
    }

    return 0;
}
