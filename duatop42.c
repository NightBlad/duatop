#include <stdio.h>

int main() {

    int num1, num2, num3, max;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("%d\n", max);

    return 0;
}

