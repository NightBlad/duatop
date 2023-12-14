#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void reverseArray(char arr[], int size, char reverse[]) {
    int temp;
    int start = 0;
    int end = size - 1;
    while (start < end) {
        temp = arr[start];
        reverse[start] = arr[end];
        reverse[end] = temp;
        start++;
        end--;
    }
}

bool isBeautifulNumber(char num[], int length) {
    if (num[0] != '8' || num[length - 1] != '8') {
        return false;
    }

    char reverse[length];
    reverseArray(num, length, reverse);

    if (memcmp(num, reverse, length) != 0) {
        return false;
    } else {
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum += num[i] - '0';
        }
        return sum % 10 == 0;
    }
}

int main() {
    int numTests;
    scanf("%d", &numTests);

    for (int i = 0; i < numTests; i++) {
        char num[501];
        scanf("%s", num);
        int n = strlen(num);
        if (isBeautifulNumber(num, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
