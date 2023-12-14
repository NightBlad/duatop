#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 501
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void addBigIntegers(char num1[], char num2[], char result[]) {
    int carry = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = (len1 > len2) ? len1 : len2;
    reverseString(num1);
    reverseString(num2);
    for (int i = 0; i < maxLen; i++) {
        int digit1 = (i < len1) ? num1[i] - '0' : 0;
        int digit2 = (i < len2) ? num2[i] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        result[i] = (sum % 10) + '0';
        carry = sum / 10;
    }
    if (carry) {
        result[maxLen] = carry + '0';
        result[maxLen + 1] = '\0';
    } else {
        result[maxLen] = '\0';
    }

    reverseString(result);
}

int main() {
    int numTests;
    scanf("%d", &numTests);

    for (int test = 1; test <= numTests; test++) {
        char num1[MAX_DIGITS], num2[MAX_DIGITS], result[MAX_DIGITS + 1];
        scanf("%s %s", num1, num2);

        addBigIntegers(num1, num2, result);

        printf("%s\n", result);
    }

    return 0;
}

