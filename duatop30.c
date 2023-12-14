#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int countLetters = 0;
    int countDigits = 0;
    int countOthers = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            countLetters++;
        } else if (isdigit(str[i])) {
            countDigits++;
        } else if (str[i] != '\n' && str[i] != '\r') {
            countOthers++;
        }
        i++;
    }

    printf("%d %d %d",countLetters,countDigits,countOthers);

    return 0;
}

