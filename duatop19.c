#include <stdio.h>

int hasDigitNine(int num) {
    while (num > 0) {
        if (num % 10 == 9) {
            return 1; 
        }
        num /= 10;
    }
    return 0;
}
int isPalindrome(int num) {
    if (hasDigitNine(num)) {
        return 0;
    }

    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}
int main() {
    int number,count=0;
    scanf("%d", &number);
    for (int i = 2; i <= number; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
            count++;
        }
    }printf("\n%d",count);
    return 0;
}
