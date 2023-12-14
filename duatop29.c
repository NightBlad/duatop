#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0;
    int len = strlen(str);
    int i = 0;
    while (i < len) {
        while (i < len && str[i] == ' ') {
            i++;
        }
        if (i < len && str[i] != ' ') {
            count++;

            while (i < len && str[i] != ' ') {
                i++;
            }
        }
    }

    return count;
}

int main() {
    int numTests;
    scanf("%d", &numTests);
    getchar();

    for (int t = 0; t < numTests; t++) {
        char str[200];
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        int result = countWords(str);
        printf("%d\n", result);
    }

    return 0;
}

