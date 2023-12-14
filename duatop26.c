#include <stdio.h>
#include <stdlib.h>
int cmp_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int cmp_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void tron(int A[], int B[], int n) {
    qsort(A, n, sizeof(int), cmp_asc);
    qsort(B, n, sizeof(int), cmp_desc);
    for (int i = 0; i < n * 2; i++) {
        if (i % 2 == 0)
            printf("%d ", A[i / 2]);
        else
            printf("%d ", B[(i - 1) / 2]);
    }
    printf("\n");
}

int main() {
    int num_tests, n;
    scanf("%d", &num_tests);

    for (int j = 0; j < num_tests; j++) {
        scanf("%d", &n);
        if (n <= 1 || n >= 100) {
            printf("Invalid input for test case %d. Exiting the program.\n", j + 1);
            return 1;
        }
        int A[100], B[100];
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            if (A[i] > 30000) {
                printf("Invalid input for element %d in test case %d. Exiting the program.\n", i + 1, j + 1);
                return 1;
            }
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &B[i]);
            if (B[i] > 30000) {
                printf("Invalid input for element %d in test case %d. Exiting the program.\n", i + 1, j + 1);
                return 1;
            }
        }
        printf("Test %d:\n", j + 1);
        tron(A, B, n);
    }

    return 0;
}
