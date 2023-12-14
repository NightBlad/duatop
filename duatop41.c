#include <stdio.h>

int main() {
    double principal, time, rate, simpleInterest;
    scanf("%lf", &principal);
    scanf("%lf", &time);
    scanf("%lf", &rate);
    simpleInterest = (principal * time * rate) / 100;
    printf("%.2lf\n", simpleInterest);
    return 0;
}

