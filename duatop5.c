#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);
    int sum_result = a + b;
    int difference_result = a - b;
    long long  product_result = (long long)a * b;
    int integer_division_result = a / b;
    int remainder_result = a % b;
    float float_division_result = (float)a / b;
    printf("%d\n", sum_result);
    printf("%d\n", difference_result);
    printf("%lld\n", product_result);
    printf("%d\n", integer_division_result);
    printf("%d\n", remainder_result);
    printf("%.2f\n", float_division_result);
    return 0;
}

