#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void separatePrime(int A[], int n, int prime[], int *sizePrime) {
    *sizePrime = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(A[i])) {
            prime[*sizePrime] = A[i];
            (*sizePrime)++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int num_tests;
    scanf("%d", &num_tests);
    for (int test = 0; test < num_tests; test++) {
        int n;
        scanf("%d", &n);
        if (n <= 1 || n >= 100) {
            printf("Invalid input for test case %d. Skipping.\n", test + 1);
            continue;
        }
        int A[100], prime[100];
        int sizePrime;
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            if (A[i] > 1000) {
                printf("Invalid input for element %d in test case %d. Skipping.\n", i + 1, test + 1);
                return 1;
            }
        }
        separatePrime(A, n, prime, &sizePrime);
        printArray(prime, sizePrime);
    }
    return 0;
}

