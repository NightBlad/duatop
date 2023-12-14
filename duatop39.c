#include <stdio.h>

int isAdvantageousOdd(long long num) {

    if (num % 2 == 0) {
        return 0; 
    }
    int oddCount = 0;
    int evenCount = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenCount++;
        } else {	
            oddCount++;
        }
        num /= 10;
    }
    return oddCount > evenCount;
}

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        long long num;
        scanf("%lld", &num);
        if (isAdvantageousOdd(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

