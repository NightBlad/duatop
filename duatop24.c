#include <stdio.h>

void countAndPrintOccurrences(int A[], int n) {
    int uniqueElements[100];
    int occurrences[100] = {0};
    int count = 0;
    int i,j;
    for (i = 0; i < n; i++) {
        int isUnique = 1;
        for (j = 0; j < count; j++) {
            if (A[i] == uniqueElements[j]) {
                occurrences[j]++;
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            uniqueElements[count] = A[i];
            occurrences[count] = 1;
            count++;
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d %d\n", uniqueElements[i], occurrences[i]);
    }
}

int main() {
    int numtest,i;
    int n;
    scanf("%d", &n);

    if (n <= 1 || n >= 100) {
        printf("Invalid input for n. Exiting the program.\n");
        return 1;
    }

    int A[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    countAndPrintOccurrences(A, n);

    return 0;
}

