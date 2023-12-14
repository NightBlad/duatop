#include <stdio.h>

void dichtrai(int A[], int n) {
    int x, i;
    scanf("%d", &x);

    int arr1[100];
    int arr2[100];

    for (i = 0; i < x; i++) {
        arr1[i] = A[i];
    }

    for (i = x; i < n; i++) {
        arr2[i - x] = A[i];
    }

    for (i = 0; i < n; i++) {
        if (i < n-x) printf("%d ", arr2[i]);
        else printf("%d ", arr1[i - (n-x)]);

    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    if (n <= 1 || n >= 100) {
        printf("Invalid input for n. Exiting the program.\n");
        return 1;
    }

    int A[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] > 1000) {
            printf("Invalid input for element %d. Exiting the program.\n", i + 1);
            return 1;
        }
    }

    dichtrai(A, n);
    return 0;
}

